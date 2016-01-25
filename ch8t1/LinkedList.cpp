#include "LinkedList.h"
#include <iostream>

namespace LinkedList {
	
	LList::LList() {
		current = new NNode::Node();
		first = last = current;
		count = 0;
	}

	void LList::pushBack(std::string strValue) {
		try {
			NNode::Node* preLast = last;
			last = new NNode::Node();
			last->value = strValue;
			last->prev = preLast;
			preLast->next = last;
			count++;
		}
		catch(std::bad_alloc& ba){
		std::cerr << "bad_alloc caught: " << ba.what() << std::endl;
		}
	}
	std::string LList::popBack() {
		NNode::Node* preLast;
		if (last->prev) {
			preLast = last->prev;
			preLast->next = NULL;
			last->prev = NULL;
			delete(last);
			last = preLast;
			count--;
		}
		return last->value;
	}
	void LList::set(std::string strValue) {
		current->value = strValue;
	}

	std::string LList::get() {
		return current->value;
	}

	bool LList::next() {
		if (current->next) {
			current = current->next;
			return true;
		}
		else
			return false;
	}

	bool LList::prev() {
		if (current->prev) {
			current = current->prev;
			return true;
		}
		else
			return false;
	}

	void LList::begin() {
		current = first;
	}

	void LList::end() {
		current = last;
	}
	int LList::length() {
		return count;
	}
	void LList::sort() {
		for (NNode::Node* i = first; i->next != 0; i=i->next) {
			for (NNode::Node* j = i; j->next != 0; j = j->next) {
				if (i->value < j->value) {
					std::string tmp = i->value;
					i->value = j->value;
					j->value = tmp;
				}
			}
		}
	}
}