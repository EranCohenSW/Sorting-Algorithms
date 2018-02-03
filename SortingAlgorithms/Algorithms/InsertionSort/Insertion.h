#include "../ISortAlg/ISortAlg.h"


class Insertion :
	public ISortAlg
{
public:
	Insertion(int arr[ARRAY_SIZE],string name);
	void Sort();
	void Print();
	~Insertion();
};

