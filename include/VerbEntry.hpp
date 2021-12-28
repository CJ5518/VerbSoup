#ifndef VERB_ENTRY_HPP
#define VERB_ENTRY_HPP

#include <wx/wx.h>
#include <wx/notebook.h>
#include <sol/sol.hpp>
#include "ConjugationEntry.hpp"

class VerbEntry : public wxPanel {
public:
	VerbEntry(wxWindow* parent);
private:
	wxPanel* panel;
	wxNotebook* notebook;
	ConjugationEntry** conjugationEntries;

};



#endif