#include "../ISortAlg/ISortAlg.h"


class BubbleSort :	public ISortAlg
{
public:
	BubbleSort(int arr[ARRAY_SIZE],string name);
	void Sort();
	void Print();
	~BubbleSort();
};

