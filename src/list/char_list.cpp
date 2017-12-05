#include "char_list.h"
#include <iostream>

using namespace std;

CharList::CharList(char c[])
{
	for(int i=0; c[i] != "\0"; i++)
	{
		
	}
}

CharList::~CharList()
{

}

void CharList::print()
{
	for(char c:content)
	{
		cout << c << endl;
	}
}

void add(char key[], char val[])
{

}