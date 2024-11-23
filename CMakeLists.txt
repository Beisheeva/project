cmake_minimum_required(VERSION 3.29)
project(SupermarketBillingSystem)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(SupermarketBillingSystem
    include/cartManagement.h
    include/displayCategories.h
    include/fileHandling.h
    include/receiptGeneration.h
    include/userLogin.h
    src/cartManagement.cpp
    src/displayCategories.cpp
    src/fileHandling.cpp
    src/main.cpp
    src/userLogin.cpp
        include/displayWelcome.h
        src/displayWelcome.cpp
)
