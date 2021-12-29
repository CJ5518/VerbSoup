#include "VerbEntry.hpp"
#include "ConjugationEntry.hpp"

const static wxString verbTenses[] = {
	"Pr\u00E9sent",
	"Imparfait",
	"Futur",
	"Pass\u00E9 Simple",
	"Conditionnel"
	"0"
};

VerbEntry::VerbEntry(wxWindow* parent) : wxPanel(parent) {
	int x,y;
	parent->GetClientSize(&x,&y);
	notebook = new wxNotebook(this, 1, wxPoint(0,0), wxSize(x,y));
	int q = 0;
	while (true) {
		if (verbTenses[q] == "0")
			break;
		notebook->AddPage(new ConjugationEntry(notebook), verbTenses[q]);
		q++;
	}
}