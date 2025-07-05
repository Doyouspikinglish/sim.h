#ifndef SIM_H
#define SIM_H

#include <iostream>
#include <bitset>
#include <string>

namespace sim {

    // Prints the 8-bit binary representation and the number
    inline void printbit_number(int a) {
        std::bitset<8> bits(a);
        std::cout << bits << " " << a << "\n";
    }

    // Prints only the 8-bit binary representation
    inline void printbit_only_bin(int b) {
        std::bitset<8> bits(b);
        std::cout << bits << "\n";
    }

    // Prints each character in the string as an 8-bit binary
    inline void printbit_text_binary(const std::string& text) {
        for (char c : text) {
            std::bitset<8> binary(c);
            std::cout << binary << " ";
        }
        std::cout << "\n";
    }
}

#endif
