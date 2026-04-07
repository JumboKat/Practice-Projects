/*A natural number is prime if it is greater than 1 and has no divisors other than 1 and itself.

Complicated? Not at all. Look: 8 isn't a prime number as you can divide it by 2 and 4 (we can't use divisors equal to 1 and 8 as the definition prohibits this). On the other hand, 7 is a prime number since we can't find any legal divisors for it.

Your task is to write a function that checks whether or not a number is prime or not.

The function:

    is called "isPrime";
    takes one int argument (the value to check);
    returns "true" if the argument is a prime number or "false" otherwise;
    should be mute.

Hint: try to divide the argument by all subsequent values (starting from 2) and check the remainder – if it's 0, your number cannot be a prime; think carefully when you should stop the process and check whether you could use the "sqrt()" function (which you already know).

Complete the code in the editor.*/

#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    int limit = static_cast<int>(std::sqrt(num));

    for (int i = 5; i <= limit; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
        return false;
    }

    return true;
}

int main() {
    for (int i = 0; i <= 21; i++){
        if(isPrime(i)){
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}