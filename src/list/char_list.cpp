#include "char_list.h"
#include <iostream>

using namespace std;

template<typename T, int N>
CharList<T,N>::CharList(T (&c)[N])
{
	cout << N << endl;
}

template<typename T, int N>
CharList<T,N>::~CharList()
{

}

template<typename T, int N>
void CharList<T,N>::print()
{
	for(char c:content)
	{
		cout << c << endl;
	}
}

template<typename T, int N>
void CharList<T,N>::add(char key[], char val[])
{

}