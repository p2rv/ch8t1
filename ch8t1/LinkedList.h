#pragma once

namespace LinkedList
{
	struct LList;
	LList* create();
	LList* create(std::string);
	void push_back(LList*,std::string);
	void pop_back(LList*);
	void erase(LList*);
	int size(LList*);
	void sort(LList*);
}