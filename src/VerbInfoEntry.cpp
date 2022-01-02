#include "VerbInfoEntry.hpp"

VerbInfoEntry::VerbInfoEntry(wxWindow* parent, VerbInfoEntryType type) : wxPanel(parent) { 
	verbInfinitiveEntry = new wxTextCtrl(this, wxID_ANY, "avoir", wxPoint(0,0), wxSize(150, 20));

	verbDescriptionEntry = new wxTextCtrl(
		this, wxID_ANY, "desc.",
		wxPoint(0, verbInfinitiveEntry->GetSize().GetY() + 2),
		wxSize(verbInfinitiveEntry->GetSize().GetX(), 100),
		wxTE_MULTILINE
	);

	for (int q = 0; q < 3; q++) {
		wxTextCtrl* imperativeControl = new wxTextCtrl(
			this, wxID_ANY, wxEmptyString,
			wxPoint(0, 
				verbDescriptionEntry->GetSize().GetY()
				+ verbDescriptionEntry->GetPosition().y
				+ 20 + (q * verbInfinitiveEntry->GetSize().GetY())
			),
			verbInfinitiveEntry->GetSize()
		);

		verbImperativeEntries.push_back(imperativeControl);
	}

	verbPresentParticipleEntry = new wxTextCtrl(
		this, wxID_ANY, "Pres Participle",
		wxPoint(verbInfinitiveEntry->GetSize().GetX() + 20, 0),
		verbInfinitiveEntry->GetSize()
	);

	setEntryType(type);
}

VerbInfoEntry::~VerbInfoEntry() {
	for (int q = 0; q < verbImperativeEntries.size(); q++) {
		delete verbImperativeEntries[q];
	}
}

void VerbInfoEntry::setEntryType(VerbInfoEntryType type) {

}