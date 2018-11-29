#include <iostream>
#include "SortManager.h"

using namespace std;
using namespace mySort;

int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int arr2[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8, 9, 3, 4, 1, 2, 5 };
	int lenth = sizeof(arr2) / 4;
	SortManager* mySort = SortManager::getSingleSortManager();

	//mySort->bublleSort(arr2, lenth);
	//mySort->insertSort(arr2, lenth);
	mySort->choseSort(arr2, lenth);

	mySort->printData(arr2, lenth);

	system("pause");
	return 0;
}
