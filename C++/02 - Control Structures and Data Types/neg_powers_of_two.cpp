/*Okay, positive powers of two are no longer a mystery, but we mustn't forget about the negative ones. They are as important as their positive siblings. Let's remind ourselves of the basic rule:

2^-n = 1/2^n

We want you to modify your previous program to make it able to evaluate negative powers of two.

Hint 1: use division instead of multiplication.

Hint 2: use a double to store the result – remember, you operate in fractions!

Hint 3: don't forget to add cout.precision(20); before printing the final result (unless you want to lose the most interesting part of the value)*/

#include <iostream>

int main(void){
    unsigned short n;
    double power = 1.0;
    std::cout << "Enter an exponent from 0 to 63: ";
    std::cin >> n;
    for (short i = 0; i < n; i++){
        power /= 2.0;
    }
    std::cout.precision(20);
    std::cout << power << std::endl;
    return 0;
}