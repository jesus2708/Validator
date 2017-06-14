#pragma once  //______________________________________ Validator.h  
#include "Resource.h"
class Validator: public Win::Dialog
{
public:
	Validator()
	{
	}
	~Validator()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxNumero;
	Win::Button btValidar;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(13.94354);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.32833);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Validator";
		lb1.CreateX(NULL, L"Escribe un numero entre 1 y 100", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.71437, 1.53458, 5.71500, 0.60854, hWnd, 1000);
		tbxNumero.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 7.09083, 1.50812, 3.20146, 0.60854, hWnd, 1001);
		btValidar.CreateX(NULL, L"Validar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 10.87438, 1.42875, 2.88396, 0.68792, hWnd, 1002);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxNumero.Font = fontArial009A;
		btValidar.Font = fontArial009A;
	}
	//_________________________________________________
	void btValidar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btValidar.IsEvent(e, BN_CLICKED)) {btValidar_Click(e); return true;}
		return false;
	}
};
