/*We need a very specific function and we need it ASAP. This is how we imagine it:

    its name is "increment";
    it returns void;
    when invoked with one argument (an int variable), it simply increments the variable by 1;
    when invoked with two arguments (an int variable and int expression), it increments the variable by the expression's value.

Sorry, we cannot show you the function's header – it would be too easy. We'll only show you how we invoke the function – the rest is up to you.*/

#include <iostream>

void increment(int &var, int expression = 1){
    var += expression;
}

int main() {
    int var = 0;
    for(int i = 0; i < 10; i++){
        if (i % 2)
            increment(var);
        else
            increment(var,i);
    }
    std::cout << var << std::endl;
    return 0;
}