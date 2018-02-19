#include<iostream>
using namespace std;

template<class T>
class ListNode
{
public:
	T value;
	ListNode<T> *next;
	ListNode(T nodeValue) {
		value = nodeValue;
		next = nullptr;
	}	
};

template<class T>
class LinkedList
{
public:	
	int length = 0;
	ListNode<T> *head;
	LinkedList() { head = nullptr; }
	
	void appendNode(T);
	void insertNode(T);
	void deleteNode(T);
	int getLenght();
	void displayList();
};

template <class T>
void LinkedList<T>::appendNode(T newValue){
	ListNode<T> *newNode;
	ListNode<T> *Traversing;

	newNode = new ListNode<T>(newValue);	

	if (!head) {
		head = newNode;
	}
	else {
		Traversing = head;
		while (Traversing->next)
		{
			Traversing = Traversing->next;
		}
		Traversing->next = newNode;
	}
	length++;
	
}

template <class T>
int  LinkedList<T>::getLenght() {
	return length;
}

template <class T>
void LinkedList<T>::displayList(){
	ListNode<T> *traversing;

	traversing = head;
	while (traversing)
	{
		cout << traversing->value << endl;
		traversing = traversing->next;
	}
}

template <class T>
void LinkedList<T>::insertNode(T newValue) {
	ListNode<T> *newNode;
	ListNode<T> *traversing;
	ListNode<T> *previousNode = nullptr;

	newNode = new ListNode<T>(newValue);
	
	if (!head) {
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		traversing = head;
		previousNode = nullptr;
		while (traversing!=nullptr && traversing->value < newValue)
		{
			previousNode = traversing;
			traversing = traversing->next;
		}
		if (previousNode == nullptr) {
			head = newNode;
			newNode->next = traversing;
		}
		else
		{
			previousNode->next = newNode;
			newNode->next = traversing;
		}
	}
	length++;
}

template <class T>
void LinkedList<T>::deleteNode(T searchValue) {
	ListNode<T> *newNode;
	ListNode<T> *traversing;
	ListNode<T> *previousNode;

	if (!head) {
		return;
	}
	if (head->value == searchValue) {
		traversing = head->next;
		delete head;
		head = traversing;
	}
	else
	{
		traversing = head;
		while (traversing!= nullptr && traversing->value !=searchValue)
		{
			previousNode = traversing;
			traversing = traversing->next;
		}
		if (traversing) {
			previousNode->next = traversing->next;
			delete traversing;
		}
	}
	--length;
}

