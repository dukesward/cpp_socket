#include "hello.cpp"
#include "socket.cpp"
#include "char_list.cpp"

int main(int argc, char *argv[]) {
	char c[] = {"hello"};
	const int N = sizeof(c)/sizeof(c[0]);
	CharList<char, N> list(c);
	return 0;
}
