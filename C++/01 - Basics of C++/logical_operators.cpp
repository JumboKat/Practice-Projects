/*
We need a number whose value:

    is greater than or equal to 0 and less than 10, or
    multiplied by 2 is less than 20 and reduced by 2 is greater than minus 2, or
    reduced by 1 is greater than 1 and divided by 2 is less than 10, or
    is equal to 111.

Write the above condition in the form of an expression accepted by the C++ language and assign its result to the answer variable.
*/

#include <iostream>

int main(void) {
    bool answer;
    int value;

    std::cout << "Enter a value: ";
    std::cin >> value;

    answer = (value >= 0 && value < 10) || (value*2 < 20 && value - 2 > -2) || (value - 1 > 1 && value / 2 < 10) || (value == 111);

    std::cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << std::endl;
    return 0;
}