#include "../../stdafx.h"
#include "MergeSort.h"

MergeSort::MergeSort(int arr[ARRAY_SIZE],string name):ISortAlg(arr,name)
{
}

void MergeSort::Merge(int low, int high, int mid){
	int i, j, k;
	int* temp = new int[high - low + 1];
	i = low;
	k = 0;
	j = mid + 1;

	while (i <= mid && j <= high){
		comparison_count++;
		if (arr[i] < arr[j]){
			comparison_count++;
			temp[k] = arr[i];
			k++;
			i++;
		}
		else{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= mid){
		comparison_count++;
		temp[k] = arr[i];
		k++;
		i++;
	}

	while (j <= high){
		comparison_count++;
		temp[k] = arr[j];
		k++;
		j++;
	}

	for (i = low; i <= high; i++){
		swap_count++;//not really a swap
		arr[i] = temp[i - low];
	}
	delete[] temp;
}

void MergeSort::Sort() {
	MrgSort(0, ARRAY_SIZE - 1);
}
void MergeSort::MrgSort(int low, int high)
{
	int mid;
	if (low < high){
		comparison_count++;
		mid = (low + high) / 2;
		MrgSort(low, mid);
		MrgSort(mid + 1, high);
		Merge(low, high, mid);
	}
}

MergeSort::~MergeSort()
{
}
