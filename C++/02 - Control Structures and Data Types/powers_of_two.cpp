/*As powers of ten play an important role in the real lives of humans, powers of two are significant in computers' lives. Can you enumerate the first few powers of two? It's easy at the beginning: 1, 2, 4, 8,.. but it gets complicated very soon and you'll need some time to find the next number.

This is a good reason to use a computer instead of our brains.

Write a program which shows the n-th power of two (n will be the input for the program). We'll use the following assumptions:

    the largest value of n to take into consideration is 63, as unsigned long integers use exactly 64 bits to represent their values (note: a value of 2n needs n+1 bits – can you explain why?);
    we won't use any actual exponentiation – we're going to substitute it with repeated multiplications.

Write a program that implements the task described above.*/

#include <iostream>

int main(void) {
    unsigned short n;
    unsigned long long power = 2;
    std::cout << "Enter an exponent from 1 to 63: ";
    if (std::cin >> n){
        for (int i = 1; i < n; i++){
            power *= 2;
        }
        std::cout << power << std::endl;
    }
    return 0;
}