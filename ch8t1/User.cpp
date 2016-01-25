#include <iostream>
#include "LinkedList.h"

int main()
{
	using namespace LinkedList;

	LList* mylist =new LList();
	mylist->set("first node");
	for (int i = 0; i < 10; i++)
		mylist->pushBack("str - "+std::to_string(9-i));
	mylist->sort();
	while(mylist->next()){

		std::cout << mylist->get().c_str() << '\n';
	}
	std::cin.get();
	return 0;
}