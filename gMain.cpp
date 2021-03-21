#include "gMain.h"

wxBEGIN_EVENT_TABLE(gMain, wxFrame)
	EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()

gMain::gMain() : wxFrame(nullptr, wxID_ANY, "GTerm Music Player", wxPoint(30, 30), wxSize(800, 600))
{
	m_btn1 = new wxButton(this, 10001, "Click Me", wxPoint(10, 10), wxSize(150, 50));
	m_text1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 100), wxSize(300, 300));
}

gMain::~gMain()
{

}

void gMain::OnButtonClicked(wxCommandEvent& evt)
{
	if (m_text1->GetValue().Len() != 0)
	{
		m_list1->AppendString(m_text1->GetValue());
		m_text1->Clear();
	}
	else
	{
		m_list1->AppendString(wxString("啥都没有"));
	}
	evt.Skip();
}
