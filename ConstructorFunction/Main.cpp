#include <iostream>
#include "CopyConstructor.h"
using namespace rongcard;
 
int main()
{
	CopyConstructor cpA("aabb");
	CopyConstructor cpB = cpA;
	CopyConstructor cpC ;
	cpC = cpB;
	system("pause");
	return 0;
}