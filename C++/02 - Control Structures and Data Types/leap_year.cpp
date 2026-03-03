/*As you surely know, due to some astronomical reason, a year may be leap or common. The former is 366 days long while the latter is 365 days.

Since the introduction of the Gregorian calendar (in 1582), the following rule is used to determine the kind of year:

    if the year number isn't divisible by 4, it is a common year;
    otherwise, if the year number isn't divisible by 100, it is a leap year;
    otherwise, if the year number isn't divisible by 400, it is a common year;
    otherwise, it is a leap year.

The code should output one of two possible messages, which are Leap year or Common year, depending on the value entered.

It would be good to verify if the year entered falls into the Gregorian era and to output a warning otherwise.*/

#include <iostream>

int main(void){
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (year % 4 == 0){
        if (year % 100 != 0) {
            std::cout << "Leap year";
        } else if (year % 400 != 0){
            std::cout << "Common year";
        } else {
            std::cout << "Leap year";
        }
    } else {
        std::cout << "Common year";
    }

    return 0;
}