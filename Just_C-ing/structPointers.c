#include <stdio.h>
#include<stdint.h>


typedef struct {
    void (*init)();
    int  (*read)();
    void (*write)(int data);
} DeviceDriver;

// === ADC Functions ===
void ADC_Init() { printf("ADC Initialized\n"); }
int  ADC_Read() { printf("ADC Reading...\n"); return 123; }
void ADC_Write(int data) { printf("ADC Ignoring write: %d\n", data); }

// === UART Functions ===
void UART_Init() { printf("UART Initialized\n"); }
int  UART_Read() { printf("UART Reading...\n"); return 65; }
void UART_Write(int data) { printf("UART Writing: %d\n", data); }

int main() {
    // === Step 1: Populate Device Table ===
    DeviceDriver deviceTable[2] = {
        { ADC_Init,  ADC_Read,  ADC_Write },   // index 0: ADC
        { UART_Init, UART_Read, UART_Write }  // index 1: UART
    };

    // === Step 2: Use the table generically ===
    for (int i = 0; i < 2; i++) {
        printf("\n-- Device %d --\n", i);
        deviceTable[i].init();                // Initialize device
        int val = deviceTable[i].read();      // Read from device
        printf("Read value: %d\n", val);
        deviceTable[i].write(999);            // Write to device
    }
    return 0;
}
