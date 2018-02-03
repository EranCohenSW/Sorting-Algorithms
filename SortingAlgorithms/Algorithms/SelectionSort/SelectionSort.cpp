#include "../../stdafx.h"
#include "SelectionSort.h"

SelectionSort::SelectionSort(int arr[ARRAY_SIZE],string name):ISortAlg(arr,name)
{
}

void SelectionSort::Sort() {
	int min, min_index;
	for (int i = 0; i < ARRAY_SIZE - 1; i++) {
		min = arr[i], min_index = i;
		for (int j = i + 1; j < ARRAY_SIZE; j++) {
			comparison_count++;
			if (arr[j] < min) {
				min_index = j;
				min = arr[j];
			}
			}
		if (i != min_index) {
			Swap(i, min_index);
			swap_count++;
		}
		}
	}



void SelectionSort::Print() {
	ISortAlg::Print();
}

SelectionSort::~SelectionSort()
{
}
