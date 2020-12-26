#include "stdafx.h"
#include "lab.h"

void PlusesDelete(vector<int>& nums)
{
	nums.erase(remove_if(nums.begin(), nums.end(), IsPlus), nums.end());
}

bool IsPlus(const int& element)
{
	return (element > 0);
}

void DoTask8()
{
	vector<int> nums = { 1,-2,0,5,-8,10,-15 };
	cout << "Task 8"
		<< endl
		<< "Testing list: "
		<< endl;
	PrintVector(nums);
	cout << endl;
	PlusesDelete(nums);
	cout << "Got new list: " << endl;
	PrintVector(nums);
	return;
}