//#include"LinkedList.h"
//
//template <class T>
//void LinkedList<T>::appendNode(T newValue){
//	ListNode<T> *newNode;
//	ListNode<T> *Traversing;
//
//	newNode = new ListNode<T>(newValue);	
//
//	if (!head) {
//		head = newNode;
//	}
//	else {
//		Traversing = head;
//		while (Traversing->next)
//		{
//			Traversing = Traversing->next;
//		}
//		Traversing->next = newNode;
//	}
//}
//template <class T>
//void LinkedList<T>::displayList(){
//	ListNode<T> *traversing;
//
//	traversing = head;
//	while (traversing)
//	{
//		cout << traversing->value << endl;
//		traversing = traversing->next;
//	}
//}