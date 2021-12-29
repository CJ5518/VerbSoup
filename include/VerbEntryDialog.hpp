#ifndef VERB_ENTRY_DIALOG_HPP
#define VERB_ENTRY_DIALOG_HPP

#include <wx/wx.h>
#include "VerbEntry.hpp"

class VerbEntryDialog : public wxDialog {
public:
	VerbEntryDialog(wxWindow* parent);
	~VerbEntryDialog();
	VerbEntry* verbEntry;
};

#endif