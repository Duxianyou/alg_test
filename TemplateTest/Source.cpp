#include <iostream>

using namespace std;


template<class T>
T MinData(T Data1, T Data2)
{
	if (Data1 > Data2)
	{
		return Data2;
	}
	return Data1;
}


int main()
{
	//float a = 2.2;
	//float b = 3.3;
	//cout << MinData(a, b) << endl;

	//cout << sizeof(int) << sizeof(double) << sizeof(float) << sizeof(long long) << endl;

	system("pause");
	return 0;
}