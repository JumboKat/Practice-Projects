/*Your task it to write a real, interactive, four-function calculator. Of course, you may add as many new functions as you want, but four basic operations (+ - * /) are a must. Moreover, we hope that your calculator will be smart enough not to be fooled by a division by 0. Be careful!

We want your program to display a menu that looks like this one:

MENU:

0 - exit

1 - addition

2 - subtraction

3 - multiplication

4 - division

Your choice?

Next, your program should read an int value representing the chosen option and act accordingly. If the option requires the execution of further operations, your program should read two double values, perform an operation and display the result. Then, your program should display a menu and... the story repeats until the user enters 0.

Hint: use a switch statement - you expected this, didn't you?*/

#include <iostream>

int main(void) {
    short choice;

    std::cout << "MENU:\n\n0 - exit\n\n1 - addition\n\n2 - subtraction\n\n3 - multiplication\n\n4 - division\n\nYour choice? ";
    std::cin >> choice;

    if (choice) {
        int num1, num2;
        std::cout << "Enter two integers ";
        std::cin >> num1 >> num2;
        
        switch(choice) {
            case 1:
                std::cout << num1 + num2;
                break;
            case 2: 
                std::cout << num1 - num2;
                break;
            case 3:
                std::cout << num1 * num2;
                break;
            case 4: 
                if (num2){
                    std::cout << num1 / num2;
                } else {
                    std::cout << "Error: Cannot divide by zero";
                }
                break;
            default:
                break;
        }
    }
    return 0;
}