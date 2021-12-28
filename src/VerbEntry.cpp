#include "VerbEntry.hpp"
#include "ConjugationEntry.hpp"

VerbEntry::VerbEntry(wxWindow* parent) : wxPanel(parent) {
	int x,y;
	parent->GetClientSize(&x,&y);
	notebook = new wxNotebook(this, 1, wxPoint(0,0), wxSize(x,y));
	notebook->AddPage(new ConjugationEntry(notebook), "Pr\u00E9sent");
	notebook->AddPage(new ConjugationEntry(notebook), "Imparfait");
}