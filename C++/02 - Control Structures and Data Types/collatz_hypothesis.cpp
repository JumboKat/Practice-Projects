/*In 1937, a mathematician named Lothar Collatz formulated an intriguing hypothesis that remains unsolved to this day (perhaps this would be a good challenge for you?) which can be described in the following way:

    take any non-negative and non-zero integer number and name it c0;
    if it's even, evaluate a new c0 as c0 / 2
    otherwise, if it's odd, evaluate a new c0 as 3 ⋅ c0 + 1
    if c0 ≠ 1, skip to point 2

The hypothesis says that, regardless of the initial value of c0, it will always (always!) go to 1.

Of course, it's an extremely complex task to use a computer in order to prove the hypothesis for any natural number (it may in fact need artificial intelligence), but you can use C++ to check some individual numbers. Maybe you can find the one that disproves the hypothesis and become a famous mathematician.

Okay, let's start. Write a program which reads one natural number and executes the above steps as long as c0 remains different from 1. Moreover, we'll give you another task – we want you to count the steps needed to achieve the goal. Your code should output all intermediate values of c0, too – it'll be very illustrative, won't it?

Hint: the most important part of the problem is how to transform Collatz's idea into a "while" loop – this is the key to success.*/

#include <iostream>

int main(void) {
    unsigned c0;
    std::cout << "Enter an integer greater than 0: ";
    if (std::cin >> c0){
        unsigned count = 0;
        while(c0 != 1){
            if (c0 % 2) {
                c0 = 3*c0 + 1;
            } else {
                c0 = c0 / 2;
            }
            std::cout << c0 << std::endl;
            count++;
        }
        std::cout << "Steps = " << count << std::endl;
    } 
    return 0;
}