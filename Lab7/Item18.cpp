//
//  Item18.cpp
//  
//
//  Created by Moica Dan on 19/11/2020.
//

#include <stdio.h>
class Date
{
public:
    struct Day
    {
        explicit Day(int d):val(d){}
        int val;
    };
    struct Month
    {
        explicit Month(int m):val(m){}
        int val;
    };
    struct Year
    {
        explicit Year(int y):val(y){}
        int val;
    };

    Date(const Month& m, const Day& d, const Year& y)
    : m_month(m)
    , m_day(d)
    , m_year(y) {};
    ~Date(){};

private:
    Month m_month;
    Day   m_day;
    Year  m_year;
};
