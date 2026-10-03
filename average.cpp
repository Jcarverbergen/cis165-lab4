#include <iostream>

int main()
{
    double value1 = 28.0;
    double value2 = 32.0;
    double value3 = 37.0;
    double value4 = 24.0;
    double value5 = 33.0;

    double sum = value1 + value2 + value3 + value4 + value5;
    double average = sum / 5.0;

    std::cout << "Sum: " << sum << '\n';
    std::cout << "Average: " << average << '\n';

    return 0;
}
