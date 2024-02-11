#include <iostream>
#include <fstream>


int main() {
    std::ifstream input("input.txt");
    std::ofstream output("output.txt");

    if (input.is_open()) {
        int n; input >> n;
        // or: std::getline(input, str)
        for (int i = 0; i < n; ++i) {
            int val; input >> val;
            output << "val" << i << " = " << val << "\n";
        }
    }

    input.close();
    output.close();
}