#include <stdio.h>  

// 分类 -------------- 内部比较排序
// 数据结构 ---------- 数组
// 最差时间复杂度 ---- 根据步长序列的不同而不同。已知最好的为O(n(logn)^2)
// 最优时间复杂度 ---- O(n)
// 平均时间复杂度 ---- 根据步长序列的不同而不同。
// 所需辅助空间 ------ O(1)
// 稳定性 ------------ 不稳定

void ShellSort(int A[], int n)
{
	int h = 0;
	while (h <= n)                          // 生成初始增量
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
		h = (h - 1) / 3;                    // 递减增量
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
	int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };// 从小到大希尔排序
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