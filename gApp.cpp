#include "gApp.h"

wxIMPLEMENT_APP(gApp);

gApp::gApp()
{

}

gApp::~gApp()
{

}

bool gApp::OnInit()
{
	m_frame1 = new gMain();
	m_frame1->Show();

	return true;
}
