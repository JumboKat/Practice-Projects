/*We've shown you how to declare structures intended to store information about dates. Now we encourage you to declare a structure for handling the time of day with an accuracy of one minute. We think your structure will have two fields, but we don't want to suggest anything more – all the design decisions are up to you.

After you've done that, declare a variable of the previously declared structure type and write a code asking your user for two values: hours and minutes. Note: you should use a 24-hour clock, sometimes referred to as "military time".

Check the inputted values carefully – don't accept ideas like 25:71; store the values in your structure variable.

Next, input an int value and assume that this is a number of minutes – let it be the duration of some event.

Your task is to output a time of day (hours and minutes respectively) that will be shown on clocks immediately after our event; try to show it in the form "HH:MM".*/

#include <iostream>

struct TIME{
    int hour = 0;
    int minutes = 0;
};

int main(){
    TIME time;
    int duration = time.hour = time.minutes = -1;
    while (time.hour < 0 || time.hour > 24){
        std::cout << "Enter the hour ";
        std::cin >> time.hour;
        if (time.hour < 0 || time.hour > 24){
            std::cout << "Invalid time entered." << std::endl;
        }
    }
    while (time.minutes < 0 || time.minutes > 59){
        std::cout << "Enter the minutes ";
        std::cin >> time.minutes;
        if (time.minutes < 0 || time.minutes > 59)
            std::cout << "Invalid time entered." << std::endl;
    }
    while (duration < 0){
        std::cout << "Enter the event duration in minutes: ";
        std::cin >> duration;
        if (duration < 0){
            std::cout << "Invalid duration entered." << std::endl;
        }
    }

    int dur_hours = duration / 60;
    int dur_min = duration % 60;
    time.minutes += dur_min; 
    time.hour = (time.hour + dur_hours + time.minutes / 60) % 24;
    time.minutes %= 60;
    char hour_zero = '\0', minute_zero = '\0';
    if (time.hour < 10){
        hour_zero = '0';
    }
    if (time.minutes < 10){
        minute_zero = '0';
    }
    std::cout << hour_zero << time.hour << ':' << minute_zero << time.minutes << std::endl;

    return 0;
}