#include "stdafx.h"
#include "lab.h"


vector<string> UniqueWords(const string& str)
{
	vector<string> wordsVector;
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

	for (const auto& it : uniqueWords)
	{
		wordsVector.push_back(it);
	}

	return wordsVector;
}

void DoTask5()
{
	string str(".This  is.,testing sample,,, of. string...yep,yep  it.is..,,.");
	
	
	cout << "Task 5"
		<< endl
		<< "Testing sentence: "
		<< endl
		<< str
		<< endl;

	vector<string> wordsList = UniqueWords(str);
	cout << "Unique words vector: " << endl;

	PrintVector(wordsList);
	return;
}