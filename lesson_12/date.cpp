#include <iostream>
#include <sstream>
#include <string>
using std::string;
using std::ostringstream;

class Date
{

private:
    int year;
    int month;
    int day;
    string dateInString;

public:
    Date(int yearInput, int monthInput, int dayInput): year(yearInput), month(monthInput),
    day(dayInput) {}

    Date& operator ++ ()
    {
        this->day += 1;
        return *this;
    }

    explicit operator const char*()
    {
        ostringstream formattedDate;
        formattedDate << year << '/' << month << '/' << day;

        dateInString = formattedDate.str();
        return dateInString.c_str(); 
    }


    explicit operator int()
    {
        return (year*1000 + month*100 + day*10);
    }
    

    Date operator+= (int daysToAdd)
    {
        this->day += daysToAdd;
        return *this;
    }

    bool operator== (const Date& dateToCompare) const
    {
        return ((year == dateToCompare.year)
        && (month == dateToCompare.month)
        && (day == dateToCompare.day));
    }
};


int main()
{
    using std::cout, std::endl;

    Date today(2024,9,5);

    cout << static_cast<const char*>(today) << endl;

    ++today;

    cout << static_cast<const char*>(today) << endl;

    today += 7;

    cout << static_cast<const char*>(today) << endl;

    Date yesterday(2024,9,4);

    cout << (yesterday == today) << endl;

    return 0;
}