#pragma once

#include "wx/wx.h"
#include "gMain.h"

class gApp : public wxApp
{
public: 
	gApp();
	~gApp();

public:
	virtual bool OnInit();

private:
	gMain* m_frame1 = nullptr;
};

