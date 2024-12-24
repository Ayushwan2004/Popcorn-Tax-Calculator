#include <stdio.h>

int main() {
    int choice;
    float price, tax, total;

    printf("Popcorn Menu:\n");
    printf("1. Salted Popcorn (Rs. 50)\n");
    printf("2. Caramel Popcorn (Rs. 70)\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        price = 50;
        tax = 12; // GST rate for salted popcorn
    } else if (choice == 2) {
        price = 70;
        tax = 18; // GST rate for caramel popcorn
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Calculate tax amount
    float tax_amount = (price * tax) / 100.0;

    // Calculate total price (price + tax)
    total = price + tax_amount;

    printf("Price: Rs. %.2f\n", price);
    printf("Tax (%.2f%%): Rs. %.2f\n", tax, tax_amount);
    printf("Total: Rs. %.2f\n", total);
    printf("\tBest Regards From Best Finance Minister of BHARAT");
    return 0;
}