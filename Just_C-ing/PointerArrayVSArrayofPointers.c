#include<stdio.h>
#include<stdint.h>

int main()

{
    int arr[3] = {10, 20, 30};

    // 1. Pointer to whole array
    int (*arr_ptr)[3] = &arr;

    // 2. Array of pointers to individual ints
    int *ptr_arr[3];

    for (int i = 0; i < 3; i++) {
        ptr_arr[i] = &arr[i];
    }

    // 3. Print using arr_ptr
    printf("Using arr_ptr: ");
    for (int i = 0; i < 3; i++) {
        // *arr_ptr gives the array; then [i] indexes it
        printf("%d ", (*arr_ptr)[i]);
    }
    printf("\n");

    // 4. Print using ptr_arr
    printf("Using ptr_arr: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *ptr_arr[i]);
    }
    printf("\n");

    return 0;
}