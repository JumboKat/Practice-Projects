/*We're almost sure that you've heard of the Fibonacci sequence. It's a series of natural numbers built up by a simple formula:

    the first Fibonacci number is equal to 1;
    the second Fibonacci number is equal to 1 too;
    the third, fourth and every subsequent Fibonacci number is equal to the sum of the previous two numbers.

This means that the first five Fibonacci numbers look as follows:

1, 1, 2, 3, 5

Is that clear? Of course it is! Now it's your turn – write a code asking the user for a number (let's name it n) and then print an n-th Fibonacci number.

But beware! These numbers grow very fast – use proper data types to avoid premature overflows!*/

#include <iostream>

int main(void){
    unsigned n;
    unsigned long long num1 = 0;
    unsigned long long temp = 0;
    unsigned long long num2 = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for (int i = 1; i < n; i++){
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
    std::cout << num2 << std::endl;
    return 0;
}