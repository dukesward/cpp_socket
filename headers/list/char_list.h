#ifndef _char_list_h
#define _char_list_h

template<typename T, int N>
class CharList
{
	private:
		CharList* next;
		char content[];
	public:
		CharList(T (&c)[N]);
		~CharList();
		void print();
		void add(char key[], char val[]);
};

#endif