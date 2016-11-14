#ifndef DATE_H
#define DATE_H
#include <string>

class Date
{
    public:
        int day;
        int mouth;
        int hour;
        int minute;
        double second;
        Date(std::string date, std::string time) ;
        Date();
        void print( );
        static void getTimeString(const char* s, std::string &date, std::string &time);
        virtual ~Date();

    protected:
    private:
};

#endif // DATE_H
