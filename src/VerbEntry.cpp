#include "VerbEntry.hpp"
#include "VerbInfoEntry.hpp"
#include "ConjugationEntry.hpp"
#include <iostream>

const static wxString verbTenses[] = {
	"Pr\u00E9sent",
	"Imparfait",
	"Futur",
	"Pass\u00E9 Simple",
	"Conditionnel"
};

VerbEntry::VerbEntry(wxWindow* parent) : wxPanel(parent) {
	int x,y;
	parent->GetClientSize(&x,&y);
	notebook = new wxNotebook(this, 1, wxPoint(0,0), wxSize(x,y));
	notebook->AddPage(new VerbInfoEntry(notebook), "Verbe");
	for (int q = 0; q < sizeof(verbTenses) / sizeof(wxString); q++) {
		notebook->AddPage(new ConjugationEntry(notebook), verbTenses[q]);
	}
}