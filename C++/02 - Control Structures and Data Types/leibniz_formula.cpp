/*One of the methods used to find the value of π (let's add: not a very effective method) is the Leibniz formula. At first glance, it looks complicated, but if you look at it carefully, you'll see a very simple recurrence and (we can bet on it!) you'll be able to imagine a draft of a very simple code implementing Leibniz's idea.

Here you are:

pi/4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 - ...

Note:

    you need to add a number of fractions – the sum will show you an approximate value of a quarter of π;
    some of the fractions are positive, some are negative – can you see the regularity?

Leibniz's formula needs a very large number of fractions to achieve good accuracy (you'll see this soon), but that's not a problem – we don't actually want to discover the value of π. We just want to check if we can find it.

Your task is to complete the code below. The code should ask the user to enter a number of totaled fractions (in other words, the number of iterations) and to print the computed value of π. As we need good accuracy and a very large number of iterations, we use a double instead of a float and a long instead of an int.*/

#include <iostream> 

int main(void) {
    unsigned long iterations;
    double pi4 = 0.;
    std::cout << "Enter the number of iterations: ";
    if (std::cin >> iterations){
        unsigned long dividend;
        short sign = 1;
        for (int i = 0; i < iterations; i++){
            pi4 += sign * 1.0/(1 + 2*i);
            sign *= -1;
        }

        std::cout.precision(20);
        std::cout << "Pi = " << (pi4 * 4.) << std::endl;
    }
    return 0;
}