#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString;

    // Input the first string
    std::cout << "Enter the first string: ";
    std::cin >> firstString;

    // Input the second string
    std::cout << "Enter the second string: ";
    std::cin >> secondString;

    // Concatenate the two strings
    std::string concatenatedString = firstString + secondString;

    // Display the concatenated string
    std::cout << "Concatenated string: " << concatenatedString << std::endl;

    return 0;
}
