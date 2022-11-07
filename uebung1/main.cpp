#include <iostream>
#include "functions01.h"

int main() {
    const int test_array[5] = { 1, 2, 3, 4, 5 };

    std::cout << "You did it, everything is set up, great job! :) ";

    // task a
    helloworld();

    // task b
    const int length = sizeof(test_array) / sizeof(*test_array);
    std::cout << "The sum of the array up to index  " << 4 << " is " << sumup(test_array, length, 4) << std::endl;
    std::cout << "The sum of the array up to index  " << 5 << " is " << sumup(test_array, length, 5) << std::endl;
    std::cout << "The sum of the array up to index  " << 6 << " is " << sumup(test_array, length, 6) << std::endl;
    std::cout << "The sum of the array up to index " << -1 << " is " << sumup(test_array, length, -1) << std::endl;
    std::cout << "The sum of the array up to index " << -2 << " is " << sumup(test_array, length, -2) << std::endl;
    std::cout << "The sum of the array up to index  " << 2 << " is " << sumup(test_array, length, 2) << std::endl;

    // task c
    const int sum = sumup_input(test_array, length);
    std::cout << "The sum up to the index you entered is " << sum;

    return 0;
}