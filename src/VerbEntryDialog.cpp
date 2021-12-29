#include "VerbEntryDialog.hpp"

VerbEntryDialog::VerbEntryDialog(wxWindow* parent) : wxDialog(parent,wxID_ANY, "Le bon titre") {
	verbEntry = new VerbEntry(this);
}

VerbEntryDialog::~VerbEntryDialog() {
	
}