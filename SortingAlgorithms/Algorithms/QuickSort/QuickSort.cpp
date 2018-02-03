#include "../../stdafx.h"
#include "QuickSort.h"


QuickSort::QuickSort(int arr[ARRAY_SIZE],string name):ISortAlg(arr,name)
{
}

void QuickSort::Sort() {
	RecursionSort(0,ARRAY_SIZE-1);
}
void QuickSort::RecursionSort(int left, int right) {
	int i = left, j = right;
	int pivot = arr[(left + right) / 2];

	/* partition */

	while (i <= j) {
		comparison_count++;
		while (arr[i] < pivot) {
			comparison_count++;
			i++;
		}
		while (arr[j] > pivot) {
			comparison_count++;
			j--;
		}
		if (i <= j) {
			comparison_count++;
			Swap(i, j);
			swap_count++;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j) {
		comparison_count++;
		RecursionSort( left, j);
	}
	if (i < right){
		comparison_count++;
		RecursionSort(i, right);
	}
}

void QuickSort::Print() {
	ISortAlg::Print();
}

QuickSort::~QuickSort()
{
}
