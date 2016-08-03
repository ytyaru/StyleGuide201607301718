#include "InitializeWndProc.h"

InitializeWndProc::InitializeWndProc(void) {}
InitializeWndProc::~InitializeWndProc(void) {}

LRESULT CALLBACK InitializeWndProc::PartWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL* pIsReturn)
{
	switch (uMsg) {
    	case WM_CREATE:
    		MessageBox(hWnd, _T("Window1 InitializeWndProc::PartWndProc"), _T("WM_CREATE"), MB_OK);
    		break;
		//case WM_DESTROY:
		//	//PostQuitMessage(0);
		//	break;
		//default:
		//	return(DefWindowProc(hWnd, uMsg, wParam, lParam));
	}
	return (0L);
}
