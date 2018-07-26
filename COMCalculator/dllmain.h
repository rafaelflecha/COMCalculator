// dllmain.h : Declaration of module class.

class CCOMCalculatorModule : public ATL::CAtlDllModuleT< CCOMCalculatorModule >
{
public :
	DECLARE_LIBID(LIBID_COMCalculatorLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMCALCULATOR, "{9b76019f-9098-437d-8535-e67df54a00cc}")
};

extern class CCOMCalculatorModule _AtlModule;
