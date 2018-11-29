#include <iostream>

using namespace std;

class Solution
{
public:
	int reverse(int x) 
	{
		int sig = 1;
		long long int reverseInt = 0;
		if (x < 0)
		{
			sig = -1;
			x *= sig;
		}
		while (x)
		{
			reverseInt = reverseInt * 10 + x % 10;
			x /= 10;
		}

		if (reverseInt > INT_MAX || reverseInt < INT_MIN)
		{
			return 0;
		}
		return reverseInt * sig;;
	}
};


int main()
{
	int reserveData;
	Solution s;
	while (true)
	{
		cin >> reserveData;

		cout << s.reverse(reserveData) << endl;
	}
	system("pause");
	return 0;
}