#include "stdafx.h"
#include "lab.h"


void ReverseNums(list<int>& nums)
{

	if (nums.size() == 0)
		return;
	for (list<int>::iterator i = nums.begin(); i != nums.end(); ++i)
	{
		nums.insert(i, (*i * (-1)));
	}
	return;
}

void DoTask7()
{
	list<int> nums = {1,2,4,5,-8,10,-15};

	cout << "Task 7"
		<< endl
		<< "Testing list: "
		<< endl;
	PrintList(nums);
	cout << endl;
	ReverseNums(nums);
	cout << "Got new list: " << endl;
	PrintList(nums);
	return;
}