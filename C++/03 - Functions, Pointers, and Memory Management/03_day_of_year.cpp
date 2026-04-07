/*Let's add another powerful tool to our calendar toolkit.

Now write a function which:

    is named "dayOfYear"
    accepts one argument of type Date – it's a structure similar to the one you were using before;
    returns an int value, being the number of the day within a certain year (assuming that 1st January is the first day of every year);
    should be mute.
*/

#include <iostream>

struct Date {
    int year;
    int month;
    int day;
};

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

int monthLength(int year, int month){
    int monthLengths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeap(year) && month==2){
        return 29;
    } else {
        return monthLengths[month-1];
    }
}

int dayOfYear(Date date){
    int sum = 0;
    for (int i = 1; i < date.month; i++){
        sum += monthLength(date.year, i);
    }
    return sum +=date.day;
}

int main(){
    Date d;
    std::cout << "Enter year, month, day: ";
    std::cin >> d.year >> d.month >> d.day;
    std::cout << dayOfYear(d) << std::endl;
    return 0;
}