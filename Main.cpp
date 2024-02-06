#include <iostream>
using namespace std;
int main() {
	//New Array
	string foods[5] = { "bread", "cake", "grapes", "mangos", " " };
	//1. Add milk to end of the array (Extend Array by " ")
	foods[4] = "milk";

	//print whole list 
	for (int i = 0; i < 5; i++) {
		cout << foods[i] << " ";
	}
	cout << endl;
	//2. Replace bread with potatoes
	foods[0] = "potatoes";
	//3. Print 3rd item
	cout << foods[2] << endl;
	//4. Use for lop and if statement to check if "strawberries" is in the list.
	for (int i = 0; i < 5; i++) {
		if (foods[i] == "potatoes")
			cout << "found the potatoes!" << endl;
	}
}
