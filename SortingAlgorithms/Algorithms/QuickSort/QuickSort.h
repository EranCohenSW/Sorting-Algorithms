#include "../ISortAlg/ISortAlg.h"

class QuickSort :
	public ISortAlg
{
public:
	QuickSort(int arr[ARRAY_SIZE],string name);
	void Sort();
	void RecursionSort(int left, int right);
	void Print();
	~QuickSort();
};


