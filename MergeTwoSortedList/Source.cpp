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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
	{
		ListNode* l3 = new ListNode(0);
		ListNode* p1 = l1;
		ListNode* p2 = l2;
		ListNode* p3 = l3;

		while ((p1 != NULL) && (p2 != NULL))
		{
			if (p1->val > p2->val)
			{
				p3->next = new ListNode(p2->val);
				p2 = p2->next;
			}
			else
			{
				p3->next = new ListNode(p1->val);
				p1 = p1->next;
			}
			p3 = p3->next;
		}
		while (p1)
		{
			p3->next = new ListNode(p1->val);
			p1 = p1->next;
			p3 = p3->next;
		}
		while (p2)
		{
			p3->next = new ListNode(p2->val);
			p2 = p2->next;
			p3 = p3->next;
		}

		return l3->next;
	}
};

int main()
{




	system("pause");
	return 0;
}