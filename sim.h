#ifndef SIM_H
#define SIM_H


#include <iostream>
#include <bitset>
#include <bit>
#include <string>

namespace sim {

	inline void printbit_number(int a) {
		std::bitset<8> bits(a);
		std::cout << bits << " " << a << "\n";
	}

	inline void printbit_only_bin(int b) {
		std::bitset<8> bits(b);
		std::cout << bits_2 << "\n";
	}

	inline void printbit_only_number(int c) {
		std::bitset<8> bits(c);
		std::cout << c << "\n";
	}

	inline void printbit_text_binary(const std::string& text) {
		for (char c : text) {
			std::bitset<8> binary(c);
			std::cout << binary << " ";
		}
	}
}

#endif
