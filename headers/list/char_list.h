#ifndef _char_list_h
#define _char_list_h

class CharList
{
	private:
		CharList* next;
		char content[16];
	public:
		CharList(char c[]);
		~CharList();
		void print();
		void add(char key[], char val[]);
};

#endif