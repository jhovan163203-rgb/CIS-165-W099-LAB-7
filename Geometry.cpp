#include <iostream>
#include <iomanip>

int main() {
    const double PI = 3.14159;

    std::cout << "Geometry Calculator\n";
    std::cout << "1. Calculate the Area of a Circle\n";
    std::cout << "2. Calculate the Area of a Rectangle\n";
    std::cout << "3. Calculate the Area of a Triangle\n";
    std::cout << "4. Quit\n";
    std::cout << "Enter your choice (1-4): ";

    int choice = 0;
    std::cin >> choice;

    std::cout << "Area: " << std::fixed << std::setprecision(5);

    if (choice == 1) {
        double radius = 0.0;
        std::cout << "Enter the radius: ";
        std::cin >> radius;

        if (radius < 0) {
            std::cout << "Error: Radius cannot be negative.\n";
        } else {
            double area = PI * radius * radius;
            std::cout << area << "\n";
        }
    } else if (choice == 2) {
        double length = 0.0;
        double width = 0.0;
        std::cout << "Enter the length: ";
        std::cin >> length;
        std::cout << "Enter the width: ";
        std::cin >> width;

        if (length < 0 || width < 0) {
            std::cout << "Error: Length and width cannot be negative.\n";
        } else {
            double area = length * width;
            std::cout << area << "\n";
        }
    } else if (choice == 3) {
        double base = 0.0;
        double height = 0.0;
        std::cout << "Enter the base: ";
        std::cin >> base;
        std::cout << "Enter the height: ";
        std::cin >> height;

        if (base < 0 || height < 0) {
            std::cout << "Error: Base and height cannot be negative.\n";
        } else {
            double area = base * height * 0.5;
            std::cout << area << "\n";
        }
    } else if (choice == 4) {
    } else {
        std::cout << "Error: Invalid menu choice. Please select a choice between 1 and 4.\n";
    }

    return 0;
}
