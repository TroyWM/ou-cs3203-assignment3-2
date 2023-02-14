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

int multer(std::vector<int> list) {
	int output = 1;
	for (int i = 0; i < list.size()-1; i++) {//sizeof returns the memory size. -1 so we don't mult by zero.
		output *= list[i];
	}
	return output;
}

int main() {
	std::vector<int> list;
	int input = -1;
	int mode = 0;
	std::cout << "Add(1) or Mult(2): ";
	std::cin >> mode;

	std::cout << "Numbers please: /n";
	while (input) {
		std::cin >> input;
		list.push_back(input);
	}
	int output;
	switch (mode) {
	case 1:
		output = adder(list);
		break;
	case 2:
		output = multer(list);
	}

	std::cout << output;
	return 0;
}