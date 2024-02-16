#include <cassert>


// function declaration
int func2();

// function definition
int func1(int a, int, int /*unnamed parameters*/) {
    return 2 * a + func2();
}

int func2() {
    return 10;
}

int func3(int a = 10 /*default values*/, double = 20.2) {
    return a;
}


int main() {
    // if-statement
    if (2 + 2 == 4) {}
    else if (3 + 2 == 5) {}
    else {}

    // loops
    while(false) {}

    do {} while(false);

    for (int i = 0; i < 10; ++i) {}

    // switch-case
    char ch = 'a';
    switch (/*expression*/ ch) {
        case 'a': {
            // ...
            break;
        }
        case 'b': {
            // ...
            break;
        }
        default: {
            // ...
            break;
        }
    }


    int a = 10;
    int& b = a; // taking a reference
    int* c = &a; // taking a pointer

    b = 12;
    assert(a == 12);

    *c = 22;
    assert(a == 22);
    assert(b == 22);

    // pointers to function
    int (*func1_ptr)(int, int, int) = func1;
    int (*func2_ptr)() = func2;

    assert(func1_ptr(10, 20, 30) == func1(10, 20, 30));
    assert(func2_ptr() == func2());

    int (*func3_ptr)(int, double) = func3;

    func3(); // OK: all default
    // func3_ptr(); // CE: too few args to function

    assert(func3_ptr(20, 32.3) == func3(20, 32.3));

    return 0;
}