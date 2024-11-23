#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void userLogin() {
    string userID, password;
    fstream file;

    cout << "Enter User ID: ";
    cin >> userID;
    cout << "Enter Password: ";
    cin >> password;

    // Attempt to open the login data file
    file.open("data/loginData.txt", ios::in);

    if (!file.is_open()) {
        // If the file cannot be opened, show an error message
        cout << "Error: Unable to open login data file!" << endl;
        return;
    }

    string storedID, storedPass;
    bool loginSuccess = false;

    // Debugging to see if the file contents are being read correctly
    cout << "Reading stored credentials from file..." << endl;

    while (file >> storedID >> storedPass) {
        cout << "Read ID: " << storedID << " Password: " << storedPass << endl; // Debug output

        // Check if the entered credentials match any stored credentials
        if (userID == storedID && password == storedPass) {
            loginSuccess = true;
            break;
        }
    }

    file.close();

    if (loginSuccess) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid credentials. Try again." << endl;
        userLogin(); // Re-prompt for credentials if login fails
    }
}
