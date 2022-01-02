#ifndef VERB_INFO_ENTRY
#define VERB_INFO_ENTRY

#include <wx/wx.h>
#include <vector>

enum VerbInfoEntryType {
	FullyEditable,
	PartiallyEditable,
	NotEditable
};

class VerbInfoEntry : public wxPanel {
public:
	VerbInfoEntry(wxWindow* parent, VerbInfoEntryType type = VerbInfoEntryType::FullyEditable);
	~VerbInfoEntry();
	void setEntryType(VerbInfoEntryType type);

	wxTextCtrl* verbInfinitiveEntry;
	wxTextCtrl* verbDescriptionEntry;
	wxTextCtrl* verbPastParticipleEntry;
	wxTextCtrl* verbPresentParticipleEntry;
	std::vector<wxTextCtrl*> verbImperativeEntries;

	wxCheckBox* verbUsesEtreCheckBox;
	wxStaticText* verbUsesEtreStaticText;
};

#endif