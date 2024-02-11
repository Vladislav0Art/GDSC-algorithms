#include <iostream>
#include <fstream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    std::freopen("input.txt", "r", stdin); // read from file 'input.txt'
    std::freopen("output.txt", "w", stdout); // write into 'output.txt'

    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        int val; cin >> val;
        cout << "val" << i << " = " << val << "\n";
    }
}