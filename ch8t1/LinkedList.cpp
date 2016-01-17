#include <string>
#include "LinkedList.h"

using std::string;
namespace LinkedList {
	struct LList
	{
		string value;
		LList* prev;
		LList* next;
	};
	LList* create() {
		LList newNode;
		return &newNode;
	}
	LList* create(string value) {
		LList newNode;
		newNode.value = value;
		return &newNode;
	}


}