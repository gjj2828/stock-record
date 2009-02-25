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

#define STOCK_CODE_LENGTH   (6)
#define STOCK_NAME_LENGTH   (8)

class StockDayDataUnit
{
private:
    char    stock_code[STOCK_CODE_LENGTH];
    char    stock_name_old[STOCK_NAME_LENGTH];
    char    stock_name[STOCK_NAME_LENGTH];
}

#endif  //STOCKDAYDATAUNIT_H
