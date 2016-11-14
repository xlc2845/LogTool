#include "Date.h"
#include <iostream>
#include <cstdio>

using namespace std;

Date::Date(string date, string time)
{
    cout << date << endl;
    cout << time << endl;
    sscanf(time.c_str(), "%d:%d:%lf", &hour, &minute, &second);
}

Date::Date()
{
    hour = minute = second = 0;
}

void Date::print() {
    cout << hour << ":" << minute << ":" << second << endl;
}

void Date::getTimeString(const char* s, string &date, string &time) {
        char a[100], b[100];
        sscanf(s, "%s%s", a, b);
        date = (string)a;
        time = (string)b;
}

Date::~Date()
{
    //dtor
}
