#include <stdio.h>  

// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- ���ݲ������еĲ�ͬ����ͬ����֪��õ�ΪO(n(logn)^2)
// ����ʱ�临�Ӷ� ---- O(n)
// ƽ��ʱ�临�Ӷ� ---- ���ݲ������еĲ�ͬ����ͬ��
// ���踨���ռ� ------ O(1)
// �ȶ��� ------------ ���ȶ�

void ShellSort(int A[], int n)
{
	int h = 0;
	while (h <= n)                          // ���ɳ�ʼ����
	{
		h = 3 * h + 1;
	}
	while (h >= 1)
	{
		for (int i = h; i < n; i++)
		{
			int j = i - h;
			int get = A[i];
			while (j >= 0 && A[j] > get)
			{
				A[j + h] = A[j];
				j = j - h;
			}
			A[j + h] = get;
		}
		h = (h - 1) / 3;                    // �ݼ�����
	}
}



void ShellSort2(int iArray[], int n)
{
	int iGap = 3;
	int h = 1;

	while (h <= n)
	{
		h = h * 3 + 1;
	}

	while (h > 0)
	{
		for (int i = h; i < n; i++)
		{
			int j = i - h;
			int iGet = iArray[i];

			while (j >= 0 && iArray[j] > iGet)
			{
				iArray[j + h] = iArray[j];
				j -= h;
			}
			iArray[j + h] = iGet;
		}
		h = (h - 1) / 3;
	}
}


int main()
{
	int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8, 9};// ��С����ϣ������
	int n = sizeof(A) / sizeof(int);
	ShellSort2(A, n);
	printf("The shell sort result is ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}