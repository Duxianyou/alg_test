#include <stdio.h>

// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- O(n^2)
// ����ʱ�临�Ӷ� ---- O(nlogn)
// ƽ��ʱ�临�Ӷ� ---- O(n^2)
// ���踨���ռ� ------ O(1)
// �ȶ��� ------------ �ȶ�

void InsertionSortDichotomy(int iArray[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int getA = iArray[i];
		int left = 0;
		int right = i - 1;

		while (left <= right)
		{
			int mid = (left + right) / 2;

			if (iArray[mid] > getA)
				right = mid - 1;
			else
				left = mid + 1;
		}

		for (int j = i - 1; j >= left; j--)
		{
			iArray[j + 1] = iArray[j];
		}
		iArray[left] = getA;
	}
}


int main()
{
	int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };// ��С������ֲ�������
	int n = sizeof(A) / sizeof(int);
	InsertionSortDichotomy(A, n);
	printf("���ֲ�����������");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}