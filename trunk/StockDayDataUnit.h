/***************************************************************
 * Name:      StockDayDataUnit.h
 * Purpose:   Defines StockDayDataUnit Class
 * Author:    gaojiongjiong ()
 * Created:   2009-02-25
 * Copyright: gaojiongjiong ()
 * License:
 **************************************************************/

#ifndef STOCKDAYDATAUNIT_H
#define STOCKDAYDATAUNIT_H

class StockDayDataUnit
{
private:
    Date    m_date;
    PriceAmount buy[ENTRUST_GRADE];
    PriceAmount sell[ENTRUST_GRADE];
    char    m_name[STOCK_NAME_LENGTH];
    float   m_close;
    float   m_prev_close;
    float   m_open;
    float   m_low;
    float   m_high;
    float   m_amount;
    float   m_volumn;
    float   m_buying;
    float   m_selling;
    float   m_shift;
};

#endif  //STOCKDAYDATAUNIT_H
