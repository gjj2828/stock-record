/***************************************************************
 * Name:      StockPeriodDataUnit.h
 * Purpose:   Defines StockPeriodDataUnit Class
 * Author:    gaojiongjiong ()
 * Created:   2009-02-25
 * Copyright: gaojiongjiong ()
 * License:
 **************************************************************/

#ifndef STOCKPERIODDATAUNIT_H
#define STOCKPERIODDATAUNIT_H

class StockPeriodDataUnit
{
private:
    char    m_code[STOCK_CODE_LENGTH];
    char    m_name[STOCK_NAME_LENGTH];
};

#endif  //STOCKPERIODDATAUNIT_H
