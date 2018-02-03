#pragma once
#define ARRAY_SIZE 20

using namespace std;

class ISortAlg
{
public:
	int arr[ARRAY_SIZE];
	string name;
	int swap_count = 0;
	int comparison_count = 0;

	ISortAlg(int arr[ARRAY_SIZE],string name);
	virtual void Sort() {};
	void Swap(int,int);
	virtual void Print();
	void PrintStats();
	string getName(){return name;}
	~ISortAlg();

};

