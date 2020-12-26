#include "stdafx.h"
#include "lab.h"

void Sort(list<int>& nums)
{
	nums.sort(greater<int>());
	return;
}

void DoTask9()
{

	list<int> nums = { 1,-2,0,5,-8,10,-15 };

	cout << "Task 9"
		<< endl
		<< "Testing list: "
		<< endl;
	PrintList(nums);

	cout << endl;

	Sort(nums);

	cout << "Got new list: " << endl;
	PrintList(nums);
	return;
}