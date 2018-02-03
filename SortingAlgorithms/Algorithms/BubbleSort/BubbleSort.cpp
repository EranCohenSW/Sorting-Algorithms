#include "../../stdafx.h"
#include "BubbleSort.h"

BubbleSort::BubbleSort(int arr[ARRAY_SIZE],string name):ISortAlg(arr,name)
{}


BubbleSort::~BubbleSort()
{
}

void BubbleSort::Sort() {
	for (int i = 0; i < ARRAY_SIZE - 1; i++) {
		for (int j = i + 1; j < ARRAY_SIZE; j ++) {
			comparison_count++;
			if (arr[i] > arr[j]) {
				swap_count++;
				Swap(i, j);
			}
		}
	}

}


void BubbleSort::Print() {
	ISortAlg::Print();
}



