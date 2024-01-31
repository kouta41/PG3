#include <iostream>
#include <string>
#include <chrono>

int main() {

	std::string a(100000, 'a');
	std::string copy{};
	std::string move{};

	// コピー
	auto copyStart = std::chrono::system_clock::now();
	copy = a;
	auto copyEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro> elapsed1 = copyEnd - copyStart;

	// 移動
	auto moveStart = std::chrono::system_clock::now();
	move = std::move(a);
	auto moveEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro> elapsed2 = moveEnd - moveStart;

	// 経過時間を表示
	std::cout << elapsed1.count() << "μs" << std::endl;
	std::cout << elapsed2.count() << "μs" << std::endl;

	return 0;
}