#include "stdafx.h"
#include "lab.h"

int wordsCounter(const string& str)
{
	int counter = 0;
	int i;

	if ((str[0] == ' ') || (str[0] == ',') || (str[0] == '.'))
		i = 1;
	else
		i = 0;

	for (i; i < str.size(); i++)
	{
		
		if ((str[i] == ' ') && ((str[i + 1] == ' ') || (str[i + 1] == ',') || (str[i + 1] == '.')))
			continue;
		if ((str[i] == '.') && ((str[i + 1] == ' ') || (str[i + 1] == ',') || (str[i + 1] == '.')))
			continue;
		if ((str[i] == ',') && ((str[i + 1] == ' ') || (str[i + 1] == ',') || (str[i + 1] == ',')))
			continue;
		
		if( (str[i] == ' ') || (str[i] == '.') || (str[i] == ','))
			counter++;
	}
	
	counter++;

	return counter;
}

void DoTask3()
{
	 str(".This  is.,testing sample,,,of. string");
	cout << "Task 3"
		<< endl
		<< "Testing sentence: "
		<< endl
		<< str
		<< endl;

	cout << "There is " << wordsCounter(str) << " of words in this sentence";
}