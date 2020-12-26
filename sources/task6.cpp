#include "stdafx.h"
#include "lab.h"


int DiffWordsCounter(const string& str)
{
	int counter;

	set<string> uniqueWords;

	string thisStr = str;

	char temp[4] = ",. ";

	int pos = 0;

	while (thisStr.size() > 0)
	{
		pos = thisStr.find_first_not_of(temp, 0);
		if (pos == -1)
			break;
		thisStr.erase(0, pos);
		pos = thisStr.find_first_of(temp, 0);
		string word = thisStr.substr(0, pos);
		uniqueWords.insert(word);
		thisStr.erase(0, pos);

	}
	counter = uniqueWords.size();
	return counter;
}


void DoTask6()
{
	string str(".This  is.,testing sample,,, of. string...yep,yep  it.is..,,.");
	cout << "Task 6"
		<< endl
		<< "Testing sentence: "
		<< endl
		<< str
		<< endl;

	int uniqueWordsCounter = DiffWordsCounter(str);
	cout << "Unique words count: " << uniqueWordsCounter << endl;
	return;
}