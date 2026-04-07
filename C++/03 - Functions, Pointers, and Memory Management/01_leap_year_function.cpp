/*Some time ago we asked you to write a program to find out if a certain year was leap or common. We want to return to the issue, but in a completely different form.

We want you to write a function equipped with the following features:

    its name should be "isLeap";
    it accepts one argument of type int representing the year number;
    it returns a bool value: true if the year is leap and false otherwise;
    it should be mute! It mustn't write anything to the output – the only way it reveals its actions is by the value it returns.

We've prepared a skeleton of the program – fill the function body with the appropriate content.


    if the year number isn't divisible by 4, it is a common year;
    otherwise, if the year number isn't divisible by 100, it is a leap year;
    otherwise, if the year number isn't divisible by 400, it is a common year;
    otherwise, it is a leap year.*/

#include <iostream>

bool isLeap(int year) {
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main(void) {
    for(int yr = 1995; yr < 2017; yr++)
        std::cout << yr << " -> " << isLeap(yr) << std::endl;
    return 0;
}