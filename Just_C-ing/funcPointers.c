#include<stdio.h>
#include<stdint.h>

void hello() {
    printf("Hello\n");
}

void world() {
    printf("World\n");
}

void call_traverse(void (*func)()) {
    func();
}

int main() {
    void (*ptr_array[2])() = { hello, world };
    int choice;

    printf("Enter 0 for hello, 1 for world: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 2) {
        call_traverse(ptr_array[choice]);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
