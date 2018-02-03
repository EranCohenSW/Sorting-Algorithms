#include "../../stdafx.h"
#include "Insertion.h"


Insertion::Insertion(int arr[ARRAY_SIZE],string name): ISortAlg(arr,name)
{
}

void Insertion::Sort() {
	for (int i = 1; i < ARRAY_SIZE; i++) {
		for (int j = i-1; j >= 0 && arr[j]>arr[i]; j--,i--, comparison_count++) {
				swap_count++;
				Swap(i, j);
		}
	}

}


void Insertion::Print() {
	ISortAlg::Print();
}


Insertion::~Insertion()
{
}
