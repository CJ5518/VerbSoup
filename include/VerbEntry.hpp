#ifndef VERB_ENTRY_HPP
#define VERB_ENTRY_HPP

#include <wx/wx.h>
#include <wx/notebook.h>
#include <sol/sol.hpp>
#include "ConjugationEntry.hpp"

class VerbEntry : public wxDialog {
public:
	VerbEntry();
	//VerbEntry(sol::lua_table verbTenses);
private:
	wxNotebook* notebook;
	ConjugationEntry** conjugationEntries;

};



#endif