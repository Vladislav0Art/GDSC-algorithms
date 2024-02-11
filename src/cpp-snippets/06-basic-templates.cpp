#include <iostream>
#include <vector>


template<typename /*class*/ T>
T max(T a, T b) {
    return a < b ? b : a;
}


template<typename T>
void print(const T& value) {
    std::cout << value << " ";
}


template<typename T>
class Stack {
public:
    T& top() {
        return m_values.back();
    }

    void push(T value) {
        m_values.push_back(value);
    }

    void pop() {
        m_values.pop_back();
    }

    // support for std::begin/std::end
    typedef typename std::vector<T>::iterator iterator;

    iterator begin() {
        return m_values.begin();
    }

    iterator end() {
        return m_values.end();
    }

private:
    std::vector<T> m_values;
};


template<typename Container, typename Callback>
void traverse(Container& container, Callback cb) {
    for (auto itr = std::begin(container); itr != std::end(container); ++itr) {
        cb(*itr);
    }
}


int main() {
    Stack<int> stack;

    for (int i = 0; i < 10; ++i) {
        stack.push(max(i, 5));
    }

    traverse(stack, print<int>);

    std::cout << "\n";

    traverse(stack, [](int value) {
        std::cout << 2 * value << " ";
    });
}