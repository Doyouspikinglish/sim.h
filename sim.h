#include <iostream>
#include <bitset>
#include <bit>

namespace sim {

	void printbit$number(int a) {
		std::bitset<8> bits(a);
		std::cout << bits << " " << a << "\n";
	}

	void printbit_only$bin(int b) {
		std::bitset<8> bits_2(b);
		std::cout << bits_2 << "\n";
	}

	void printbit_only$number(int c) {
		std::bitset<8> bits_3(c);
		std::cout << c << "\n";
	}

	void printbit_text$binary(const std::string& text) {
		for (char c : text) {
			std::bitset<8> binary(c);
			std::cout << binary << " ";
		}
	}
}
