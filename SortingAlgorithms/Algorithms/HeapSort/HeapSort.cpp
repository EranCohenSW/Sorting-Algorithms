#include "../../stdafx.h"
#include "HeapSort.h"


HeapSort::HeapSort(int arr[ARRAY_SIZE],string name):ISortAlg(arr,name)
{
}

void HeapSort::Sort(){
	// Building the heap
	for (int i = ARRAY_SIZE / 2 - 1; i >= 0; i--)
		Heapify( ARRAY_SIZE, i);

	// One by one extract an element from heap
	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		// Swap root to end of sorted part
		swap_count++;
		Swap(0, i);

		// Heapify the new tree
		Heapify(i, 0);
	}


}


void HeapSort::Heapify(int n, int i)
{
	int max = i;  // root as i
	int l = 2 * i + 1;  // left = 2*i + 1
	int r = 2 * i + 2;  // right = 2*i + 2

	// If left child is bigger than root
	comparison_count++;
	if (l < n && arr[l] > arr[max])
		max = l;

	// If right child is larger than largest so far
	comparison_count++;
	if (r < n && arr[r] > arr[max])
		max = r;

	// If largest is not root
	comparison_count++;
	if (max != i)
	{
		swap_count++;
		Swap(i, max);

		// Recursively heapify sub-tree
		Heapify(n, max);
	}
}


void HeapSort::Print() {
	ISortAlg::Print();
}

HeapSort::~HeapSort()
{
}
