// R.O.C-Video-Dll.cpp�: d�finit les routines d'initialisation pour la DLL.
//

#include "stdafx.h"
#include "R.O.C-Video-Dll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: si cette DLL est li�e dynamiquement aux DLL MFC,
//		toute fonction export�e de cette DLL qui appelle
//		MFC doit avoir la macro AFX_MANAGE_STATE ajout�e au
//		tout d�but de la fonction.
//
//		Par exemple�:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// corps de fonction normal ici
//		}
//
//		Il est tr�s important que cette macro se trouve dans chaque
//		fonction, avant tout appel � MFC.  Cela signifie qu'elle
//		doit �tre la premi�re instruction dans la 
//		fonction, avant toute d�claration de variable objet
//		dans la mesure o� leurs constructeurs peuvent g�n�rer des appels � la DLL
//		MFC.
//
//		Consultez les notes techniques MFC 33 et 58 pour plus de
//		d�tails.
//

// CROCVideoDllApp

BEGIN_MESSAGE_MAP(CROCVideoDllApp, CWinApp)
END_MESSAGE_MAP()


// construction CROCVideoDllApp

CROCVideoDllApp::CROCVideoDllApp()
{
	this->height = DEFAULT_WIDTH;
	this->width  = DEFAULT_HEIGHT;
}


// Seul et unique objet CROCVideoDllApp

CROCVideoDllApp theApp;


// initialisation de CROCVideoDllApp

BOOL CROCVideoDllApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}

