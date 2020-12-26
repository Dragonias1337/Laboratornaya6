#include "stdafx.h"
#include "lab.h"


map<string, int> WordsMapCounter(const string& str)
{
	string thisStr = str;

	map<string, int> outputMap;

	char temp[4] = ",. ";
	
	int pos=0;

	while (thisStr.size() > 0)
	{
		pos = thisStr.find_first_not_of(temp, 0);
		if (pos == -1)
			break;
		thisStr.erase(0, pos);
		pos = thisStr.find_first_of(temp, 0);
		string word = thisStr.substr(0, pos);
		InsertWord(outputMap, word);
		thisStr.erase(0, pos);

	}
	return outputMap;
}

void PrintMap(map<string, int> wordMap)
{
	map<string, int>::iterator it = wordMap.begin();

	for (it; it != wordMap.end(); ++it)
	{
		cout << "Word [" << it->first << "]" << endl;
		cout << "Count = [" << it->second << "]" << endl << endl;
	}
	return;
}

void InsertWord(map<string, int> &wordMap, string word)
{

	if (wordMap.find(word) != wordMap.end())
	{
		wordMap[word]++;
	}
	else
		wordMap.insert(make_pair(word, 1));
}


void DoTask4()
{

	map<string, int> words;


	string str(".This  is.,testing sample,,,of. string...yep,yep  it.is..,,.");
	cout << "Task 4"
		<< endl
		<< "Testing sentence: "
		<< endl
		<< str
		<< endl;

	words = WordsMapCounter(str);
	PrintMap(words);

	return;
}