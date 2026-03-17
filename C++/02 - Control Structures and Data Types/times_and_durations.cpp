/*We hope that your previous program enables you to travel in time smoothly and accurately. Now we want you to modify it a bit:

    declare two structure variables – one for the start time, another for the end time;
    Ask your user for both times – be sure that the end time denotes a later time of day than the start time (we assume that both times fall on the same day);
    evaluate and output the duration of time (in hours and minutes) between both times.

Note: we're still using a 24-hour clock!*/

#include <iostream>

struct TIME{
    int hour = -1;
    int minutes = -1;
};

int main(){
    TIME start, end;
    while (start.hour < 0 || start.hour > 23){
        std::cout << "Enter the start hour: ";
        std::cin >> start.hour;
        if (start.hour < 0 || start.hour > 23)
            std::cout << "Invalid time entered." << std::endl;
    }

    while (start.minutes < 0 || start.minutes > 59){
        std::cout << "Enter the start minutes: ";
        std::cin >> start.minutes;
        if (start.minutes < 0 || start.minutes > 59)
            std::cout << "Invalid time entered." << std::endl;
    }

    while (end.hour < 0 || end.hour > 23 || end.hour < start.hour){
        std::cout << "Enter the end hour: ";
        std::cin >> end.hour;
        if (end.hour < 0 || end.hour > 23 || end.hour < start.hour)
            std::cout << "Invalid time entered." << std::endl;
    }

    while (end.minutes < 0 || end.minutes > 59){
        std::cout << "Enter the start minutes: ";
        std::cin >> end.minutes;
        if (end.minutes < 0 || end.minutes > 59)
            std::cout << "Invalid time entered." << std::endl;
    }

    TIME duration;
    
    duration.hour = end.hour - start.hour;
    duration.minutes = end.minutes - start.minutes;
    if (duration.minutes < 0){
        duration.hour -= 1;
        duration.minutes = 60 + duration.minutes;
    }

    char minute_zero = '\0';

    if (duration.minutes < 10){
        minute_zero = '0';
    }

    std::cout << duration.hour << ":" << minute_zero << duration.minutes << std::endl;

    return 0;
}