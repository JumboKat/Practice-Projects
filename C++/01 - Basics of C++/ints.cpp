/*Take a look at the code below: it reads two integer values, manipulates them and finally outputs the k variable. The problem is that the manipulations have been described using natural language, so the code is completely useless now.

We want you to act as an intelligent (naturally!) compiler and to translate the formula into real C++ notation. Try to use pre/post and short-cut operators – they fit perfectly into some of the steps.

Test your code using the data we've provided.*/

#include <iostream>

int main(void) {
    int i, j, k;
    std::cout << "Enter i: ";
    std::cin >> i;
    std::cout << "Enter j: ";
    std::cin >> j;

    // increment i by 2
	// decrement j by i
	// divide i by j giving k
	// increment k by k
	// decrement k by 1
	// assign k modulo i to j
	// increment k by k added to i
	// increment k by k divided by j
	// assign k times k times k to k
	// increment k by i times j
    i+=2;
    j-=i;
    k = i/j;
    k += k;
    k--;
    j = k % i;
    k += k + i;
    k += k / j;
    k = k*k*k;
    k += i * j;
    std::cout << k;
    return 0;

}