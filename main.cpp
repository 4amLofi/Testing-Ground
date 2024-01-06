#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double d{};
    std::cin >> d;
    return d;
}

char getOperator()
{
    std::cout << "Enter +, -, *, or /: ";
    char c{};
    std::cin >> c;
    return c;
}

void printResults(double d1, double d2, char c)
{
    if (c == '+')
        std::cout << d1 << " + " << d2 << " is " << d1 + d2 << '\n';
    else if (c == '-')
        std::cout << d1 << " - " << d2 << " is " << d1 - d2 << '\n';
    else if (c == '*')
        std::cout << d1 << " * " << d2 << " is " << d1 * d2 << '\n';
    else if (c == '/')
        std::cout << d1 << " / " << d2 << " is " << d1 / d2 << '\n';
}

int main()
{
    double d1{getDouble()};
    double d2{getDouble()};
    char c{getOperator()};

    printResults(d1, d2, c);

    return 0;
}