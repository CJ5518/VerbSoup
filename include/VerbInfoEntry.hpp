#ifndef VERB_INFO_ENTRY
#define VERB_INFO_ENTRY

#include <wx/wx.h>

enum VerbInfoEntryType {
	FullyEditable,
	PartiallyEditable,
	NotEditable
};

class VerbInfoEntry : public wxPanel {
public:
	VerbInfoEntry(wxWindow* parent, VerbInfoEntryType type);
	~VerbInfoEntry();
};

#endif