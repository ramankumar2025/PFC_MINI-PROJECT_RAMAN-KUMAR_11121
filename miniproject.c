#include <stdio.h>

#define ITEMS 5   

float calculateTotal(float prices[], int qty[], int size) {
    float total = 0;
    int i;

    for (i = 0; i < size; i++) {
        total += prices[i] * qty[i];
    }

    return total;
}

int main() {
        // RAMAN KUMAR 11121
    float prices[ITEMS] = {120.0, 80.0, 150.0, 60.0, 100.0};
    int quantity[ITEMS];
    int i;
    float totalBill;

    printf("------ Online Food Menu ------\n");
    printf("1. Burger   - Rs. %.2f\n", prices[0]);
    printf("2. Pizza    - Rs. %.2f\n", prices[1]);
    printf("3. Pasta    - Rs. %.2f\n", prices[2]);
    printf("4. Fries    - Rs. %.2f\n", prices[3]);
    printf("5. Sandwich - Rs. %.2f\n", prices[4]);
    printf("-------------------------------\n");

    for (i = 0; i < ITEMS; i++) {
        printf("Enter quantity for item %d: ", i + 1);
        scanf("%d", &quantity[i]);
    }

    totalBill = calculateTotal(prices, quantity, ITEMS);

    
    printf("\nTotal Bill Amount: Rs. %.2f\n", totalBill);

    return 0;
}
