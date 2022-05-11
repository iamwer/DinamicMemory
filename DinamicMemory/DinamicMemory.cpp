#include <iostream>

int main()
{
	int* pointer = new int;
	*pointer = 300;
	std::cout << *pointer;
	delete pointer;
	return 0;
}