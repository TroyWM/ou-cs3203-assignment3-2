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

std::vector<int> reverser(std::vector<int> list) {
	std::vector<int> output;
	for (int i = list.size() - 2; i >= 0; i--) {
		output.push_back(list[i]);
	}
	std::cout << "Reverser:";
	for (int i = 0; i < list.size() - 1; i++) {
		std::cout << output[i];
	}
	std::cout << "\n";
	return output;
}

int main() {
	std::vector<int> list;
	int input = -1;
	int mode = 0;
	int sum;
	//std::cin >> mode;
	std::cout << "Input numbers, 0 to finish: \n";
	while (input) {
		std::cin >> input;
		list.push_back(input);
	}
	sum = adder(list);
	std::cout << "Sum: ";
	std::cout << sum;
	std::cout << "\n";
	input = -1;
	int product = multer(list);
	std::cout << "Product: ";
	std::cout << product;
	std::cout << "\n";
	//std::cout << "Reverse: \n";
	std::vector<int> reverse = reverser(list);
	//switch (mode) {
	//case 1:
	//	output = adder(list);
	//	break;
	//case 2:
	//	output = multer(list);
	//}
	//std::cout << output;

	return 0;
}