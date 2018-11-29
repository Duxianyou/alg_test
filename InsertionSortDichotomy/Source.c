#include <stdio.h>

// 分类 -------------- 内部比较排序
// 数据结构 ---------- 数组
// 最差时间复杂度 ---- O(n^2)
// 最优时间复杂度 ---- O(nlogn)
// 平均时间复杂度 ---- O(n^2)
// 所需辅助空间 ------ O(1)
// 稳定性 ------------ 稳定

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
	int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };// 从小到大二分插入排序
	int n = sizeof(A) / sizeof(int);
	InsertionSortDichotomy(A, n);
	printf("二分插入排序结果：");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}