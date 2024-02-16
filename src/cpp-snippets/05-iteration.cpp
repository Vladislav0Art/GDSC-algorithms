#include <iostream>
#include <cassert>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <vector>
#include <list>

using namespace std;


int main() {
    /*
    begin()     end()
      ↓          ↓
     [1  2  3  4  ] -> half-intervals: [begin, end)
    */

   // works for any STL containers that support traversal
    vector<int> vec = {1, 2, 3, 4};
    assert(*(vec.begin()) == 1);

    auto end = vec.end();
    // *end - UB (undefined behaviour)!
    --end;
    assert(*end == 4);

    // See: https://en.cppreference.com/w/cpp/iterator/begin
    assert(std::begin(vec) == vec.begin());
    assert(std::end(vec) == vec.end());

    // std::begin() and std::end() will work on plain arrays
    int arr[] = {10, 20, 30};
    assert(std::begin(arr) == arr /*array-to-pointer decay*/);
    assert(*arr == 10);
    assert(*std::begin(arr) == 10);
    assert(*(std::end(arr) - 1) == 30);


    // iteration via indexes
    std::cout << "iteration via indexes (vec): ";
    for (std::size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // Note: no indicies for std::set, std::map, std::list and some other STL containers

    // iteration via iterators (iterator ~ pointer to the element)
    std::cout << "iteration via iterators (vector): ";
    for (/* or 'auto' */ std::vector<int>::iterator itr = std::begin(vec); itr != std::end(vec); ++itr) {
        std::cout << (*itr) << " ";
    }
    std::cout << std::endl;

    // set/unordered_set
    std::cout << "iteration via iterators (set): ";
    std::set<int> values = {3, 2, 4, 5, 5, 1, 1};

    for (std::set<int>::iterator itr = values.begin(); itr != values.end(); ++itr) {
        std::cout << (*itr) << " ";
    }
    std::cout << std::endl;

    // map/unordered_map
    std::cout << "iteration via iterators (map): ";
    std::map<int, std::string> map = {{1, "str1"}, {2, "str2"}, {3, "str3"}};

    // map is a set of (key, value) pairs
    for (auto itr = std::begin(map); itr != std::end(map); ++itr) {
        std::pair<int, std::string> pair = *itr;
        std::cout << "{" << pair.first << "->" << pair.second << "} ";
    }
    std::cout << std::endl;


    // C++17

    // range-based for-loop
    // See: https://cppinsights.io/s/dea02eea
    std::cout << "range-based for (vec): ";
    for (/*const*/ int/*&*/ value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    std::cout << "range-based for (set): ";
    for (const auto& value : values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    std::cout << "range-based for (map): ";
    // or 'for (const std::pair<int, std::string>& p : map)'
    for (const auto& [key, value] /*structured binding*/ : map) {
        std::cout << "{" << key << "->" << value << "} ";
    }
    std::cout << std::endl;
}