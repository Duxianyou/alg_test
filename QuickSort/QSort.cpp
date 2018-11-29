#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

void QSort(int a[], int lenth)
{
	int index = 0;
	int begin = 1, end = lenth - 1;

	if (lenth < 2)
		return;

	while (begin <= end)
	{
		if (index < end)
		{
			while (a[index] < a[end])
			{
				end--;
			}
			if (a[index] >= a[end])
			{
				swap(a[index], a[end]);
				index = end;
				end--;
			}
		}
		if (index > begin)
		{
			while (a[index] > a[begin])
			{
				begin++;
			}
			if (a[index] < a[begin])
			{
				swap(a[index], a[begin]);
				index = begin;
				begin++;
			}
		}

	}

	QSort(a, index);
	QSort((a + index + 1), (lenth - index - 1));
}


int main()
{
	//int array[] = {2, 8, 1, 5, 7, 10, 9, 0, 4, 11};
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int array[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int lenth = 10;

	QSort(array, lenth);

	for (int i = 0; i < lenth; i++)
	{
		cout << array[i] << endl;
	}

	system("pause");
	return 0;
}