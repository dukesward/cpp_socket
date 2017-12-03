#include "hello.cpp"
#include "socket.cpp"

int main(int argc, char *argv[]) {
	Hello(2).Print();
	Test t;
	t.Print(5);
	return 0;
}
