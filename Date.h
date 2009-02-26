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
public:
    Date()                                          {m_year = 0;    m_month = 0;     m_day = 0;  }
    Date(uint year, uint month, uint day)           {m_year = year; m_month = month; m_day = day;}
    void   SetDate(uint year, uint month, uint day) {m_year = year; m_month = month; m_day = day;}
    ushort year()                                   {return m_year;                              }
    ushort month()                                  {return m_month;                             }
    ushort day()                                    {return m_day;                               }
private:
    uint    m_year  :16;
    uint    m_month :4;
    uint    m_day   :5;
    uint    m_dummy :7;
};

#endif  //DATE_H
