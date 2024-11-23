#include <iostream>
#include <vector> // Add this line
#include "cartManagement.h"
#include "fileHandling.h" // Add this line for saveReceiptToFile

double calculateSubtotal(int quantity, double price) {
    return quantity * price;
}

void generateReceiptAndPayment() {
    // Placeholder data for items and prices
    std::vector<std::string> cartItems = {"Carrot", "Apple"};
    std::vector<int> quantities = {2, 3};
    std::vector<double> prices = {1.50, 0.75};

    double total = 0;
    std::cout << "Receipt: " << std::endl;
    for (int i = 0; i < cartItems.size(); i++) {
        double itemTotal = calculateSubtotal(quantities[i], prices[i]);
        std::cout << cartItems[i] << " x" << quantities[i] << ": $" << itemTotal << std::endl;
        total += itemTotal;
    }

    std::cout << "Total: $" << total << std::endl;
    std::cout << "Payment successful. Thank you!" << std::endl;

    // Save receipt to file
    std::string receiptContent = "Supermarket Receipt\n";
    for (int i = 0; i < cartItems.size(); i++) {
        receiptContent += cartItems[i] + " x" + std::to_string(quantities[i]) + ": $" + std::to_string(calculateSubtotal(quantities[i], prices[i])) + "\n";
    }
    receiptContent += "Total: $" + std::to_string(total) + "\n";
    saveReceiptToFile(receiptContent);
}
