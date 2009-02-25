/***************************************************************
 * Name:      StockRecordApp.cpp
 * Purpose:   Code for Application Class
 * Author:    gaojiongjiong ()
 * Created:   2009-02-25
 * Copyright: gaojiongjiong ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "StockRecordApp.h"
#include "StockRecordMain.h"

IMPLEMENT_APP(StockRecordApp);

bool StockRecordApp::OnInit()
{
    StockRecordFrame* frame = new StockRecordFrame(0L, _("wxWidgets Application Template"));
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();
    
    return true;
}
