#include <fstream>
#include <iostream>
#include "fileHandling.h"

using namespace std;

void saveReceiptToFile(const std::string &receiptContent) {
    ofstream file("data/receipt.txt");
    if (file.is_open()) {
        file << receiptContent;
        file.close();
    } else {
        cout << "Unable to open receipt file." << endl;
    }
}

void loadLoginData() {
    // This function could be used to load login data or handle file processing.
}