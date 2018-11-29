//---------------------------------------------------------------
//SortManager.h            by dxy. 2018.11.1
//---------------------------------------------------------------
#pragma once

#ifndef SORTMANAGER_H_
#define SORTMANAGER_H_

//---------------------------------------------------------------
namespace mySort
{
	//---------------------------------------------------------------
	class SortManager
	{
	public:
		static SortManager* getSingleSortManager();
		void destroyInstance();
		void bublleSort(int* a, int lenth);
		void insertSort(int* a, int lenth);
		void choseSort(int* a, int lenth);
		void printData(int* a, int lenth);
	private:
		SortManager();
		SortManager(SortManager&);
		void swapInt(int* a, int* b);
	private:
		static SortManager* ms_sortManager;
	};
	//---------------------------------------------------------------
}

//---------------------------------------------------------------

#endif //SORTMANAGER_H_