// dllmain.h : 模块类的声明。

class CDirShellModule : public ATL::CAtlDllModuleT< CDirShellModule >
{
public :
	DECLARE_LIBID(LIBID_DirShellLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DIRSHELL, "{096F7AD0-0DB5-48FC-8FD9-1169C4ECFDF5}")
};

extern class CDirShellModule _AtlModule;
