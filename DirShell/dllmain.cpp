// dllmain.cpp : DllMain 的实现。

#include "stdafx.h"
#include "resource.h"
#include "DirShell_i.h"
#include "dllmain.h"

CDirShellModule _AtlModule;

// DLL 入口点
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved); 
}
