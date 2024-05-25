#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    
    Date operator++() {
        
        day++;

        
        if (day > getMaxDaysInMonth()) {
            day = 1;
            month++;

        
            if (month > 12) {
                month = 1;
                year++;
            }
        }

        return *this;
    }

    
    int getMaxDaysInMonth() {
        int maxDays = 31;

        
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;
        } else if (month == 2) {
            if (isLeapYear()) {
                maxDays = 29;
            } else {
                maxDays = 28;
            }
        }

        return maxDays;
    }

    
    bool isLeapYear() {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
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

    
    void display() {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    int day, month, year;

    std::cout << "Enter day: ";
    std::cin >> day;

    std::cout << "Enter month: ";
    std::cin >> month;

    std::cout << "Enter year: ";
    std::cin >> year;

    Date date(day, month, year);

    std::cout << "Current date: ";
    date.display();

    
    ++date;

    std::cout << "Next day: ";
    date.display();

    return 0;
}