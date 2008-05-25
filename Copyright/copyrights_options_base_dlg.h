///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 19 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __copyrights_options_base_dlg__
#define __copyrights_options_base_dlg__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/checkbox.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class CopyrightsOptionsBaseDlg
///////////////////////////////////////////////////////////////////////////////
class CopyrightsOptionsBaseDlg : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrlFileName;
		wxButton* m_buttonBrowse;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrlFileMaksing;
		wxPanel* filler1;
		wxCheckBox* m_checkBoxBackup;
		wxStaticLine* m_staticline1;
		wxButton* m_buttonSave;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnSelectFile( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnButtonSave( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		CopyrightsOptionsBaseDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Copyrights Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 606,170 ), long style = wxDEFAULT_DIALOG_STYLE );
		~CopyrightsOptionsBaseDlg();
	
};

#endif //__copyrights_options_base_dlg__
