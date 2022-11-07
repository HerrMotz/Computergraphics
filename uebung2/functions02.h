#pragma once

#include <iostream>

//insert helloworld here
void helloworld() {
    std::cout << std::endl << "Hello World" << std::endl;
}

//insert sumup here
int sumup(const int array[], int length, int index) {
    int sum = 0;

    // handle if index is larger than array length
    //  and if index is smaller than zero
    if (index >= length) {
        index = length - 1;
    } else if (index < 0) {
        return 0;
    }

    for (int i = 0; i <= index; ++i) {
        sum += array[i];
    }

    return sum;
}


//insert sumup_input here
int sumup_input(const int array[], int length) {
    int index = 0;

    while (true) {
        // ask for user input
        std::cout << std::endl << "Please enter the index (in a range from " << 0 << " to " << length - 1
                  << ") up to which the sum is computed:";
        std::cin >> index;

        // handle if index is larger than array length
        //  and if index is smaller than zero
        if (index >= length || index < 0) {
            std::cout << std::endl << "The index you entered is invalid. Please try again." << std::endl;
        } else {
            break;
        }
    }

    return sumup(array, length, index);
}