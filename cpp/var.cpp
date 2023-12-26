#include <iostream>
#include <string> // Add this line for string support

int main()
{
    int num = 8;
    double dblNum = 4.44;
    char charecter = 'D';        // Use single quotes for characters
    std::string myStr = "Hello"; // Include the string header
    bool myBool = true;

    // Use << for stream insertion
    std::cout << num << "\n"
              << dblNum << "\n"
              << charecter << "\n"
              << myStr << "\n"
              << myBool << std::endl;

    return 0; // Add a semicolon here
}
