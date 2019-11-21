#include <iostream>
#include "date.hpp"

using namespace std;

int main(void)
{
    date date1(33, 11, 2015);
    date date2(11, 9, 2005);

    date1.printDate();
    date2.printDate();

    date nextDay = date1.nextDay();
    nextDay.setFormat();
    nextDay.printDate();
}