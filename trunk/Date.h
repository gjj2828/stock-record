/***************************************************************
 * Name:      Date.h
 * Purpose:   Defines Date Class
 * Author:    gaojiongjiong ()
 * Created:   2009-02-25
 * Copyright: gaojiongjiong ()
 * License:
 **************************************************************/

#ifndef DATE_H
#define DATE_H

class Date
{
private:
    uint    m_year  :16;
    uint    m_month :4;
    uint    m_day   :5;

    uint    m_dummy :7;

public:
    Date(uint year, uint month, uint day)   {m_year = year, m_month = month, m_day = day}
    inline  SetDate(uint year, uint month, uint day)
    {
        m_year  = year;
        m_month = month;
        m_day   = day;
    }
}

#endif  //DATE_H
