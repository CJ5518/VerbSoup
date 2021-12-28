#include "ConjugationEntry.hpp"

const static char* idxToSubject[] = {
	"Je",
	"Tu",
	"Il/Elle",
	"Nous",
	"Vous",
	"Ils/Elles"
};

ConjugationEntry::ConjugationEntry(wxWindow* parent) : wxPanel(parent) {
	int x,y;
	parent->GetClientSize(&x,&y);
	this->SetSize(x,y);
	for (int q = 0; q < 6; q++) {
		int xCoord = q >= 3 ? xSpacing : 0;
		int yCoord = (q % 3) * ySpacing;

		wxStaticText* staticText = new wxStaticText(this, wxID_ANY, idxToSubject[q], wxPoint(xCoord, yCoord), wxSize(textEntryMargin, 25));
		textLabels.push_back(staticText);
		wxTextEntry* textEntry = new 
		wxTextCtrl(this, wxID_ANY, "", wxPoint(xCoord + textEntryMargin, yCoord), wxSize(xSpacing - textEntryMargin - 10, 20));
	}
}

ConjugationEntry::~ConjugationEntry() {
	for (int q = 0; q < textLabels.size(); q++) {
		delete textLabels[q];
	}
}