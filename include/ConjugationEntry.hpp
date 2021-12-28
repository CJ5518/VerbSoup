#ifndef CONJUGATION_ENTRY_HPP
#define CONJUGATION_ENTRY_HPP

#include <wx/wx.h>
#include <vector>

class ConjugationEntry : public wxPanel {
public:
	ConjugationEntry(wxWindow* parent);
	~ConjugationEntry();

	std::vector<wxStaticText*> textLabels;
	std::vector<wxTextEntry*> textEntries;

	int xSpacing = 175;
	int ySpacing = 50;
	int textEntryMargin = 40;
};

#endif