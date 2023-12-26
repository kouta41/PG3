#include <stdio.h>
#include <list>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>


int main() {

	std::fstream file("PG3_05_02.txt");

	std::sort(file.beg, file.end);

	if (file.is_open()) {
		std::string line;
		while (getline(file, line, ',')) {
			std::cout << line << std::endl;
		}
		file.close();
	}


	return 0;
}