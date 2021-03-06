<<<<<<< HEAD
#include "gridsizer.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1007, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, 1008, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1009, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1006, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1000, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1010, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011, wxT("+")), 0, wxEXPAND);
  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}

void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	cout <<"Hola " << nClicks << endl;
}


void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("1");
	// atoi(para convertir a int)
	
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("2");
}


void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("3");
}

void GridSizer::onBt4 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("4");
}

void GridSizer::onBt5 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("5");
}


void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("6");
}

void GridSizer::onBt7 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("7");
}


void GridSizer::onBt8 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("8");
}


void GridSizer::onBt9 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("9");
}


void GridSizer::onBt0 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("0");
}



void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	string text = (string)display->GetValue();
	valor1 = atoi(text.c_str());	
	display->SetValue ("");;
	/*string text2 = (string)display->GetValue();
	valor2 = atoi(text2.c_str());
	cout<<valor2<<endl;
	master = valor1 + valor2;*/
}


void GridSizer::onEqual(wxCommandEvent& WXUNUSED (event)){
	string text2 = (string)display->GetValue();
	valor2 = atoi(text2.c_str());
	cout<<valor2<<endl;
	master = valor1 + valor2;
	char buff[10];
	sprintf (buff, "%d", master);

	string s(buff);
	display->SetValue(s);

/*	
	string(master);
	cout<<"resultado: "<<master<<endl;
	//display->Replace(0,2,master);
*/
}


BEGIN_EVENT_TABLE(GridSizer, wxFrame)
    EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(1001,  GridSizer::onBt1)
    EVT_BUTTON(1002,  GridSizer::onBt2)
    EVT_BUTTON(1003,  GridSizer::onBt3)
    EVT_BUTTON(1004,  GridSizer::onBt4)
    EVT_BUTTON(1005,  GridSizer::onBt5)
    EVT_BUTTON(1006,  GridSizer::onBt6)
    EVT_BUTTON(1007,  GridSizer::onBt7)
    EVT_BUTTON(1008,  GridSizer::onBt8)
    EVT_BUTTON(1009,  GridSizer::onBt9)
    EVT_BUTTON(1011,  GridSizer::onBtSum)
    EVT_BUTTON(1010,  GridSizer::onEqual)
END_EVENT_TABLE()
=======
#include "gridsizer.h"
#include <iostream>
using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1007, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, 1008, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1009, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1006, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1000, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011 , wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}

void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	cout <<"Hola " << nClicks << endl;
}


void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("1");
	// atoi(para convertir a int)
	
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("2");
}


void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("3");
}

void GridSizer::onBt4 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("4");
}

void GridSizer::onBt5 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("5");
}


void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("6");
}

void GridSizer::onBt7 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("7");
}


void GridSizer::onBt8 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("8");
}


void GridSizer::onBt9 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("9");
}


void GridSizer::onBt0 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("0");
}



void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	string text = (string)display->GetValue();
	valor1 = atoi(text.c_str());
	display->Remove(0,2);
	text = (string)display->GetValue();
	valor2 = atoi(text.c_str());
	int master = valor1 + valor2;
	cout<<master;
	}


BEGIN_EVENT_TABLE(GridSizer, wxFrame)
    EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(1001,  GridSizer::onBt1)
    EVT_BUTTON(1002,  GridSizer::onBt2)
    EVT_BUTTON(1003,  GridSizer::onBt3)
    EVT_BUTTON(1004,  GridSizer::onBt4)
    EVT_BUTTON(1005,  GridSizer::onBt5)
    EVT_BUTTON(1006,  GridSizer::onBt6)
    EVT_BUTTON(1007,  GridSizer::onBt7)
    EVT_BUTTON(1008,  GridSizer::onBt8)
    EVT_BUTTON(1009,  GridSizer::onBt9)
    EVT_BUTTON(1011,  GridSizer::onBtSum)
END_EVENT_TABLE()
>>>>>>> 6626404563bf5e2197a3e0a664f7cffb65501f14
