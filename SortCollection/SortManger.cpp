//---------------------------------------------------------------
//SortManager.cpp           by dxy. 2018.11.1
//---------------------------------------------------------------
#include <iostream>
#include "SortManager.h"

using namespace std;
using namespace mySort;

//---------------------------------------------------------------
SortManager* SortManager::ms_sortManager = nullptr;

//---------------------------------------------------------------
SortManager* SortManager::getSingleSortManager()
{
	if (!ms_sortManager)
	{
		ms_sortManager = new SortManager();
	}
	return ms_sortManager;
}

//---------------------------------------------------------------
SortManager::SortManager()
{
	//
}

//---------------------------------------------------------------
SortManager::SortManager(SortManager&)
{
	//
}

//---------------------------------------------------------------
void SortManager::destroyInstance()
{
	if (ms_sortManager)
	{
		delete(ms_sortManager);
	}
	ms_sortManager = nullptr;
}

//---------------------------------------------------------------
void SortManager::bublleSort(int* a, int lenth)
{
	for (int i = lenth - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j+1])
			{
				swapInt(&a[j], &a[j + 1]);
			}
		}
	}

}

//---------------------------------------------------------------
void SortManager::swapInt(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

//---------------------------------------------------------------
void SortManager::printData(int* a, int lenth)
{
	for (int i = 0; i < lenth; i++)
	{
		cout << a[i] << endl;
	}
}

//---------------------------------------------------------------
void SortManager::insertSort(int* a, int lenth)
{
	for (int i = 1; i < lenth; i++)
	{
		int temp = a[i];
		int j;
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > temp)
			{
				a[j + 1] = a[j];
			}
			else
			{
				break;
			}
		}
		a[j + 1] = temp;
	}
}


//---------------------------------------------------------------
void SortManager::choseSort(int* a, int lenth)
{
	for (int i = 0; i < lenth; i++)
	{
		int temp = i;
		for (int j = i + 1; j < lenth; j++)
		{
			if (a[temp] > a[j])
				temp = j;
		}
		if (i != temp)
			swapInt(&a[i], &a[temp]);
	}
}

//---------------------------------------------------------------