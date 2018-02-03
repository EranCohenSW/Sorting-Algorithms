#include "stdafx.h"
#include "Algorithms\ISortAlg\ISortAlg.h"
#include "Algorithms\BubbleSort\BubbleSort.h"
#include "Algorithms\HeapSort\HeapSort.h"
#include "Algorithms\InsertionSort\Insertion.h"
#include "Algorithms\MergeSort\MergeSort.h"
#include "Algorithms\QuickSort\QuickSort.h"
#include "Algorithms\SelectionSort\SelectionSort.h"
#include "Algorithms\MergeSort\MergeSort.h"

#define _CRT_SECURE_NO_WARNINGS
#define ARRAY_SIZE 20
#define NUMBER_OF_ALGS 6
using namespace std;



int main()
{
	srand(time(NULL));	/*Initialize random*/

	int arr[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++) {
		arr[i] = rand() % ARRAY_SIZE + 1;
	}

	BubbleSort b = BubbleSort(arr,"Bubble");
	Insertion i = Insertion(arr,"Isertion");
	SelectionSort s = SelectionSort(arr,"Selection");
	HeapSort h = HeapSort(arr,"Heap");
	QuickSort q = QuickSort(arr,"Quick");
	MergeSort m = MergeSort(arr,"Merge");

	ISortAlg* bubble = &b;
	ISortAlg* insertion = &i;
	ISortAlg* selection = &s;
	ISortAlg* heap = &h;
	ISortAlg* quick = &q;
	ISortAlg* merge = &m;

	ISortAlg** sArr = new ISortAlg*[NUMBER_OF_ALGS];
	sArr[0] = bubble;
	sArr[1] = insertion;
	sArr[2] = selection;
	sArr[3] = heap;
	sArr[4] = quick;
	sArr[5] = merge;

	for (int i = 0; i < NUMBER_OF_ALGS; i++)
	{
		cout <<"***********************" <<sArr[i]->getName()<<" Sort: ***********************" << endl;
		cout << "Before:\t";
		sArr[i]->Print();
		sArr[i]->Sort();
		cout << "After:\t";
		sArr[i]->Print();
		sArr[i]->PrintStats();
	}
	
	delete[] sArr;

	system("pause");

	return 0;
}
