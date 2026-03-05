/*We've told you many, many times that computers store information using bits. You know perfectly well that a single bit is in fact a two-state device. It's easier to name these states "0" and "1", although technically they are actually connected to electrical phenomena like voltage or electric charge.

Now it's time to feel the bits – to look inside the variables and to see their internal life.

Your task is to write a program that counts the ones (bits set to "1") in an integer variable. We suggest that you use an unsigned long for that purpose.

Hint 1: you can test an individual bit to find if it's set or reset – the '&' operator will do that for you.

Hint 2: you can shift the value to prepare the remaining bits for testing.

Hint 3: you can repeat the above steps to... sorry, we won't say anything more...*/

#include <iostream>

int main(void) {
    unsigned long n, mask = 1;
    unsigned count = 0;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    while (n){
        if (n & mask){
            count++;
        }
        n >>= 1;
    }
    std::cout << count;
    return 0;
}