#include <stdio.h>
#include <list>
#include <iostream>

int main() {

	std::list<const char*> YamanoteLine;
	std::list<const char*>::iterator list;

	YamanoteLine = { "Tokyo", "Yurakucho", "Shimbashi", "Hamamatucho", "Tamachi", "Shinagawa", "Osaki", "Gotanda",
		"Meguro", "Ebisu", "Shibuya", "Harajuku", "Yoyogi", "Shinjuku", "Shin-Okubo", "Takadanobaba", "Mejiro", "Ikebukuro", "Otsuka",
		"Sugamo", "Komagome", "Tabata", "Nippori", "Uguisudani", "Ueno", "Okachimachi", "Akihabara", "Kanda"
	};

	std::cout << "1970年" << std::endl;
	for (list = YamanoteLine.begin(); list != YamanoteLine.end(); ++list) {
		std::cout << *list << std::endl;
	}
	std::cout << std::endl;

	std::cout << "2019年" << std::endl;
	for (list = YamanoteLine.begin(); list != YamanoteLine.end(); ++list) {
		if (*list == "Nippori") {
			list = YamanoteLine.insert(list, "Nishi-Nippori");
			std::cout << *list << std::endl;
			++list;
		}
		std::cout << *list << std::endl;
	}
	std::cout << std::endl;

	std::cout << "2022年" << std::endl;
	for (list = YamanoteLine.begin(); list != YamanoteLine.end(); ++list) {
		if (*list == "Shinagawa") {
			list = YamanoteLine.insert(list, "Takanawa Gateway");
			std::cout << *list << std::endl;
			++list;
		}
		std::cout << *list << std::endl;
	}

	return 0;

}