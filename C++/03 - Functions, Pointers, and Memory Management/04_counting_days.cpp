/*Now you're ready to take on the next, more ambitious challenge.

We need a function which:

    is called "daysBetween";
    accepts two arguments of type Date – the first represents the "since" date, while the second represents the "till" date;
    returns an int value, being the number of days passed between both dates;
    returns -1 if the "till" date is earlier than the "since" date;
    should be mute.

As usual, we've provided a skeleton of code and some test data. You provide the rest of the code and do the tests – that's the deal.*/

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

int daysBetween (Date since, Date till){
    if (till.year < since.year) {
        return -1;
    }
    int daysBetween = 0;
    daysBetween += (till.day - since.day);
    
    for (int m = 1; m< till.month; m++){
        daysBetween += monthLength(till.year, m);
    } 
    for (int m = 1; m < since.month; m++){
        daysBetween -= monthLength(since.year, m);
    }

    for (int y = since.year; y < till.year; y++){
        if (isLeap(y)){
            daysBetween += 366;
        } else {
            daysBetween += 365;
        }
    }
    return (daysBetween > 0) ? daysBetween : -1;
}

int main(){
    Date since, to;
    std::cout << "Enter first date (y m d): ";
    std::cin >> since.year >> since.month >> since.day;
    std::cout << "Enter second date (y m d): ";
    std::cin >> to.year >> to.month >> to.day;
    std::cout << daysBetween(since, to) << std::endl;
    return 0;
}
