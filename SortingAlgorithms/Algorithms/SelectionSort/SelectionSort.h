#include "../ISortAlg/ISortAlg.h"

class SelectionSort :
	public ISortAlg
{
public:
	SelectionSort(int arr[ARRAY_SIZE],string name);
	void Sort();
	void Print();
	~SelectionSort();
};

