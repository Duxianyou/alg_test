#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		vector<int> returnNum;
//		int numsSize = nums.size();
//		for (int i = 0; i < numsSize; i++)
//		{
//			if (nums[i] >= target)
//				continue;
//			for (int j = i + 1; j < numsSize; j++)
//			{
//				if ((nums[i] + nums[j]) == target)
//				{
//					returnNum.push_back(i);
//					returnNum.push_back(j);
//					return returnNum;
//				}
//			}
//		}
//		returnNum.push_back(0);
//		return returnNum;
//	}
//};

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> returnNum;
	int numsSize = nums.size();
	for (int i = 0; i < numsSize; i++)
	{
		//if (nums[i] > target)
		//	continue;
		for (int j = i + 1; j < numsSize; j++)
		{
			if ((nums[i] + nums[j]) == target)
			{
				returnNum.push_back(i);
				returnNum.push_back(j);
				return returnNum;
			}
		}
	}
	returnNum.push_back(0);
	return returnNum;
}

int main()
{
	vector<int> iData = { -1, -2, -3, -4, -5 };
	vector<int> iVector;
	iVector = twoSum(iData, -8);

	for (int i = 0; i < iVector.size(); i++)
	{
		cout << iVector[i] << endl;
	}

	system("pause");
	return 0;
}