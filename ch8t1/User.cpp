#include <iostream>
#include "LinkedList.h"

int main()
{
	using namespace LinkedList;

	LList* mylist =new LList();
	mylist->set("first node");
	for (int i = 0; i < 100; i++)
		mylist->pushBack("str - "+std::to_string(i));
	for (int i = 0; i < 105; i++){

		std::cout << mylist->popBack().c_str() << '\n';
	}
	std::cin.get();
	return 0;
}