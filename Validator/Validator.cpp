#include "stdafx.h"  //________________________________________ Validator.cpp
#include "Validator.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Validator app;
	return app.BeginDialog(IDI_Validator, hInstance);
}

void Validator::Window_Open(Win::Event& e)
{
}

void Validator::btValidar_Click(Win::Event& e)
{
	const int numero = this->tbxNumero.IntValue;
	if (numero <= 0||numero > 100)
	{
		tbxNumero.ShowBalloonTip(L"Validator", L"El numero es invalido", TTI_ERROR);
	}
	else
	{
		tbxNumero.ShowBalloonTip(L"Validator", L"El numero es valido", TTI_INFO_LARGE);
	}
}

