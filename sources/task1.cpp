#include "stdafx.h"
#include "lab.h"



vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el)
{
	
	while (first != last)
	{
		if (*first == el)
			return first;
		
		++first;
	}
		
	return last;
}


void DoTask1()
{
	std::vector<int> thisVector = { 2,5,8,7,9,6,4,3 };

	
	int el;

	cout << "Task1.....\n";
	cout << "Have vector: \n";
	printVector(thisVector);
	cout << "Input element to find: \n";
	cin >> el;

	cout << "Finding element...\n";
	vector<int>::iterator iterator = Find(thisVector.begin(), thisVector.end(), el);
	if (iterator != thisVector.end())
		cout << "Found element: " << *iterator << endl;
	else
		cout << "There is no such element\n";
}