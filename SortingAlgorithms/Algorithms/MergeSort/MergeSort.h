#pragma once
#include "../ISortAlg/ISortAlg.h"

class MergeSort :
	public ISortAlg
{
public:
	MergeSort(int arr[ARRAY_SIZE],string name);
	void Sort();
	void MrgSort(int low, int high);
	void Merge(int low, int high, int mid);
	~MergeSort();
};

