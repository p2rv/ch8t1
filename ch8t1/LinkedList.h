#pragma once
#include <string>
namespace NNode {
	
	struct Node {
		std::string value;
		Node* prev;
		Node* next;
	};
}
namespace LinkedList
{
	struct LList {
	private:
		NNode::Node* current;
		NNode::Node* first;
		NNode::Node* last;
		int count;

	public:
		LList();
		void pushBack(std::string);
		std::string popBack();
		void sort();
		void set(std::string);
		std::string get();
		int length();
		bool next();
		bool prev();
		void begin();
		void end();
	};
}