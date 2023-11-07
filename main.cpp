#include <stdio.h>
#include <windows.h>
#include "Cry.h"
#include "Cat.h"
#include "Dog.h"


int main() {
	Cry* cry[4];

	//生成フェーズ
	for (int i = 0; i < 4; i++) {
		if (i < 3) {
			cry[i] = new Dog;
		}
		else {
			cry[i] = new Cat;
		}
	}

	//動くフェーズ
	for (int i = 0; i < 4; i++){
		cry[i]->Move();
	}

	//破棄フェーズ
	for (int i = 0; i < 4; i++) {
		delete cry[i];
	}
}