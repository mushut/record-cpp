#include <iostream>
#include <string>

int main() {
	std::cout << "Record program" << std::endl;

	std::string var;

	while (true) {
		std::cout << "Menu:" << std::endl;
		std::cout << "quit: Quit the program" << std::endl;
		std::cin >> var;

		if (var == "quit") {
			break;
		}
	}

	return 0;
}
