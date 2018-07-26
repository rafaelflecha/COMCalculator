// COMCalculatorLib.cpp : Implementation of CCOMCalculatorLib

#include "stdafx.h"
#include "COMCalculatorLib.h"


// CCOMCalculatorLib


STDMETHODIMP CCOMCalculatorLib::Add(DOUBLE Input1, DOUBLE Input2, DOUBLE* pOutput)
{
	*pOutput = Input1 + Input2;

	return S_OK;
}

STDMETHODIMP CCOMCalculatorLib::Subtract(DOUBLE Input1, DOUBLE Input2, DOUBLE* pOutput)
{
	*pOutput = Input1 - Input2;

	return S_OK;
}

STDMETHODIMP CCOMCalculatorLib::Multiply(DOUBLE Input1, DOUBLE Input2, DOUBLE* pOutput)
{
	*pOutput = Input1 * Input2;

	return S_OK;
}

STDMETHODIMP CCOMCalculatorLib::Divide(DOUBLE Input1, DOUBLE Input2, DOUBLE* pOutput)
{

	*pOutput = Input1 / Input2;

	return S_OK;
}