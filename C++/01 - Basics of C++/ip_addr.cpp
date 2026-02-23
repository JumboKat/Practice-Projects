/*Write a simple code to input an IP number. Check the given data with a few simple conditions (i.e. if the number is in the range from 1 to 255) and concatenate it into an IP number.

You must get four numbers from the user, connect them with dots and print them.*/

#include <iostream>

int main(void) {
    int val1,val2,val3,val4;
    std::cout << "Enter four integers ranging from 1 to 255: ";
    if (std::cin >> val1 >> val2 >> val3 >> val4){
        std::cout << std::dec << val1 << '.' << val2 << '.' << val3 << '.' << val4 << std::endl;
    } else {
        std::cout << "Please enter valid integers.";
    }

    return 0;
}