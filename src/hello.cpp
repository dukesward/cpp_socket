#include "hello.h"
#include <iostream>

Hello::Hello(int n) :num{n} 
{
	std::cout << "hello " << n << std::endl; 
}

void Hello::Print() 
{
	//std::cout << __cplusplus << std::endl;
}
