#include <iostream>
using namespace std;

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL)
	{
	}
};

class Solution 
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		ListNode* l3 = new ListNode(0);
		ListNode* p1 = l1;
		ListNode* p2 = l2;
		ListNode* p3 = l3;
		int temNum;
		bool isCarry = false;
		while (p1 && p2)
		{
			temNum = p1->val + p2->val;
			if (isCarry)
			{
				temNum += 1;
			}
			if (temNum >= 10)
			{
				temNum %= 10;
				isCarry = true;
			}
			else
			{
				isCarry = false;
			}

			p3->next = new ListNode(temNum);
			p3 = p3->next;
			p1 = p1->next;
			p2 = p2->next;
		}
		while (p1)
		{
			temNum = p1->val;
			if (isCarry)
			{
				temNum += 1;
			}
			if (temNum >= 10)
			{
				temNum %= 10;
				isCarry = true;
			}
			else
			{
				isCarry = false;
			}
			p3->next = new ListNode(temNum);
			p3 = p3->next;
			p1 = p1->next;
		}
		while (p2)
		{
			temNum = p2->val;
			if (isCarry)
			{
				temNum += 1;
			}
			if (temNum >= 10)
			{
				temNum %= 10;
				isCarry = true;
			}
			else
			{
				isCarry = false;
			}
			p3->next = new ListNode(temNum);
			p3 = p3->next;
			p2 = p2->next;
		}

		if (isCarry)
		{
			p3->next = new ListNode(1);
		}

		return l3->next;
	}
};

int main()
{




	system("pause");
	return 0;
}