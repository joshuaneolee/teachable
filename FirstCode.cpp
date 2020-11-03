#include <iostream>

int main() {
	std::string names [5] { "Lee", "Joshua", "Neo", "Ayson", "manud"};
//josh
	for (auto name : names) {
		std::cout << name << std::endl;
	}
}