#include <iostream>
#include <vector>
#include "displayCategories.h"
#include "cartManagement.h"

using namespace std;

void displayCategories() {
    cout << "Product Categories: " << endl;
    cout << "1. Canned Food" << endl;
    cout << "2. Vegetables" << endl;
    cout << "3. Fruits" << endl;
    cout << "Select a category: ";

    int category;
    cin >> category;
    addItemToCart(category);
}

void addItemToCart(int category) {
    vector<string> cannedFoods = {"Tuna", "Beans", "Corn", "Tomato Paste"};
    vector<string> vegetables = {"Carrot", "Cabbage", "Potato", "Spinach"};
    vector<string> fruits = {"Apple", "Banana", "Orange", "Pineapple"};

    vector<string> *selectedCategory;
    switch (category) {
        case 1: selectedCategory = &cannedFoods; break;
        case 2: selectedCategory = &vegetables; break;
        case 3: selectedCategory = &fruits; break;
        default: cout << "Invalid category." << endl; return;
    }

    int itemIndex;
    cout << "Items: " << endl;
    for (int i = 0; i < selectedCategory->size(); i++) {
        cout << i + 1 << ". " << (*selectedCategory)[i] << endl;
    }
    cout << "Select item number to add to the cart: ";
    cin >> itemIndex;

    int quantity;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Logic to add item to the cart and calculate subtotal
    double price = 2.50; // Example price for each item
    double subtotal = calculateSubtotal(quantity, price);
    cout << "Subtotal for " << (*selectedCategory)[itemIndex - 1] << ": $" << subtotal << endl;

    generateReceiptAndPayment();
}