#include <iostream>
#include <string>

enum  DayOfWeek {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

struct Date {
    DayOfWeek day;
    int month;
    int year;
};

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

void printDateAndDay(const Date& date) 
{
    std::cout << "Date: " << date.year << "-" << date.month << "-" << date.day << std::endl;
}

int main() 
{
    Date day = {DayOfWeek::Friday, 5, 2024}; // Example date: May 1, 2024
    printDateAndDay(day);
    return 0;
}
