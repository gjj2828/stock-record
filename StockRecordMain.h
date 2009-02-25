/***************************************************************
 * Name:      StockRecordMain.h
 * Purpose:   Defines Application Frame
 * Author:    gaojiongjiong ()
 * Created:   2009-02-25
 * Copyright: gaojiongjiong ()
 * License:
 **************************************************************/

#ifndef STOCKRECORDMAIN_H
#define STOCKRECORDMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "StockRecordApp.h"

class StockRecordFrame: public wxFrame
{
    public:
        StockRecordFrame(wxFrame *frame, const wxString& title);
        ~StockRecordFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // STOCKRECORDMAIN_H
