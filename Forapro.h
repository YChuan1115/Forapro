
// Forapro.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CForaproApp:
// �аѾ\��@�����O�� Forapro.cpp
//

class CForaproApp : public CWinAppEx
{
public:
	CForaproApp();

// �мg
	public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CForaproApp theApp;