#include <iostream>

using namespace std;


bool isPalindrome(int x)
{
	int rightHalf = 0;
	
	if (!x)
	{
		return true;
	}
	else if ((x < 0) || (x%10) == 0)
	{
		return false;
	}
	while (x > rightHalf)
	{
		rightHalf = rightHalf * 10 + x % 10;
		if (x == rightHalf)
		{
			return true;
		}
		x /= 10;
		if (x == rightHalf)
		{
			return true;
		}
	}
	return false;
}

int main()
{

	int iPalindrome = 0;

	cout << isPalindrome(iPalindrome) << endl;
	iPalindrome = 121;

	cout << isPalindrome(iPalindrome) << endl;
	iPalindrome = 12321;

	cout << isPalindrome(iPalindrome) << endl;
	iPalindrome = 2;

	cout << isPalindrome(iPalindrome) << endl;
	iPalindrome = 12331321;

	cout << isPalindrome(iPalindrome) << endl;

	system("pause");
	return 0;
}