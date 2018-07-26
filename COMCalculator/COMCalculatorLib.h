// COMCalculatorLib.h : Declaration of the CCOMCalculatorLib

#pragma once
#include "resource.h"       // main symbols



#include "COMCalculator_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCOMCalculatorLib

class ATL_NO_VTABLE CCOMCalculatorLib :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCOMCalculatorLib, &CLSID_COMCalculatorLib>,
	public IDispatchImpl<ICOMCalculatorLib, &IID_ICOMCalculatorLib, &LIBID_COMCalculatorLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCOMCalculatorLib()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CCOMCalculatorLib)
	COM_INTERFACE_ENTRY(ICOMCalculatorLib)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(Add)(DOUBLE Input1, DOUBLE Input2, DOUBLE * pOutput);

	STDMETHOD(Subtract)(DOUBLE Input1, DOUBLE Input2, DOUBLE * pOutput);

	STDMETHOD(Multiply)(DOUBLE Input1, DOUBLE Input2, DOUBLE * pOutput);

	STDMETHOD(Divide)(DOUBLE Input1, DOUBLE Input2, DOUBLE * pOutput);

};

OBJECT_ENTRY_AUTO(__uuidof(COMCalculatorLib), CCOMCalculatorLib)
