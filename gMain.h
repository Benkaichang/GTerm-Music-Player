#pragma once
#include "wx/wx.h"

class gMain : public wxFrame
{
public:
	gMain();
	~gMain();

public:
	wxButton* m_btn1 = nullptr;
	wxListBox* m_list1 = nullptr;
	wxTextCtrl* m_text1 = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

