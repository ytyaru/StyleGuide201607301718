#pragma once
#include "IPartWndProc.h"

class KeyboardWndProc : public ytyaru::Framework::WndProc::IPartWndProc
{
public:
	KeyboardWndProc(void);
	~KeyboardWndProc(void);
	LRESULT CALLBACK PartWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL* pIsReturn);
};
