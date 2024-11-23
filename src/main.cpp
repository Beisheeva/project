#include <iostream>
#include "userLogin.h"
#include "displayCategories.h"
#include "displayWelcome.h" // Include the new header

int main() {
    displayWelcome();
    userLogin();
    displayCategories();
    return 0;
}
