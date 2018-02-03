#include "../../stdafx.h"
#include "ISortAlg.h"

ISortAlg::ISortAlg(int shuffled[ARRAY_SIZE],string name)
{
	this->name = name;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		arr[i] = shuffled[i];
	}
}

void ISortAlg::Swap(int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void ISortAlg::Print() {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ISortAlg::PrintStats() {
	cout << "Comparisons: " << comparison_count << "\tSwaps: " << swap_count << "\n\n\n\n";
}
ISortAlg::~ISortAlg()
{
}
