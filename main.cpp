//Troy Miller - Software Engineering assignment 3

#include <iostream>
#include <vector>

int adder(std::vector<int> list) {
	int output = 0;
	for (int i = 0; i < list.size(); i++) {//sizeof returns the memory size. 
		output += list[i];
	}
	return output;
}

int main() {
	std::vector<int> list;
	std::cout << "Add em up, zero to end: ";
	int input = -1;
	while (input) {
		std::cin >> input;
		list.push_back(input);
	}
	int output = adder(list);
	std::cout << output;
	return 0;
}