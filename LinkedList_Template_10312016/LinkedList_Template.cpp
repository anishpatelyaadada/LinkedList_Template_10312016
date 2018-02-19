#include"LinkedList.h"
int main() {
	LinkedList<int> intList;
	
	cout << "list of content added.\n";
	intList.appendNode(10);
	intList.appendNode(20);
	intList.appendNode(30);	
	intList.displayList();
	cout << "Lenght = " << intList.getLenght() << endl;
	cout << "New element added to list.\n";
	intList.insertNode(15); // insetnode and rearrange them
	intList.displayList(); // diplay list again
	cout << "Lenght = " << intList.getLenght() << endl;
	cout << "Element delete from list.\n";
	intList.deleteNode(20); // delete node
	intList.displayList(); // display list
	cout << "Lenght = " << intList.getLenght() << endl;
	system("pause");
	return 0;
}