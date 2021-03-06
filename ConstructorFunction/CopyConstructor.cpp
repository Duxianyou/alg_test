//----------------------------------------------------------
#include "CopyConstructor.h"
#include <iostream>
#include <string>
using namespace rongcard;
using namespace std;
 

//----------------------------------------------------------
CopyConstructor::CopyConstructor(char* str)
{
	int len;
	if (str)
	{
		len = strlen(str) + 1;
		m_pString = new char[len];
		memcpy(m_pString, str, len);
	}
	else
	{
		m_pString = new char[1];
		memset(m_pString, '0x0', 1);
	}
	cout << "Call the Construct function!" << endl;
}

//----------------------------------------------------------
CopyConstructor::CopyConstructor(const CopyConstructor& copySrc)
{
	int len = strlen(copySrc.m_pString) + 1;
	m_pString = new char[len];
	memcpy(m_pString, copySrc.m_pString, len);
	cout << "Call the copy function!" << endl;
}

//----------------------------------------------------------
CopyConstructor& CopyConstructor::operator=(const CopyConstructor& copySrc)
{
	int len = strlen(copySrc.m_pString) + 1;
	if (m_pString)
	{
		delete m_pString;
		m_pString = new char[len];
	}
	memcpy(m_pString, copySrc.m_pString, len);
	cout << "Call the Assignment function!" << endl;
	return *this;
}

//----------------------------------------------------------
CopyConstructor::~CopyConstructor()
{
	delete m_pString;
	m_pString = nullptr;
	cout << "Call the Delete function!" << endl;
}

//----------------------------------------------------------

//----------------------------------------------------------