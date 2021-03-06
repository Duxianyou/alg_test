//----------------------------------------------------------
#ifndef _COPY_CONSTRUCTOR_H_
#define _COPY_CONSTRUCTOR_H_
#pragma once
namespace rongcard
{
	class CopyConstructor
	{
	public:
		CopyConstructor(char* str = nullptr);
		CopyConstructor(const CopyConstructor& copySrc);
		CopyConstructor & operator = (const CopyConstructor& copyStr);
		~CopyConstructor();
		void callFunction(CopyConstructor copyObj);
	private:
	public:
		char* m_pString;

	};
}
 
#endif
//----------------------------------------------------------
