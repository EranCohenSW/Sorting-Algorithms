#include "../ISortAlg/ISortAlg.h"

class HeapSort :
	public ISortAlg
{
public:
	HeapSort(int arr[ARRAY_SIZE],string name);
	void Sort();
	void Heapify(int n, int i);
	void Print();
	~HeapSort();
};

