#include <iostream>

#ifdef NDEBUG
    #define ASSERT(expr) ((void)0)
#else
    #include <cassert>
    #define ASSERT(expr) assert(expr)
#endif

int main() {
    int x = 5;
    ASSERT(x == 5); // This assertion will pass
    std::cout << "Assertion passed!\n";
    ASSERT(x == 10); // This assertion will fail
    std::cout << "Assertion failed, but the program continues running!\n";
    return 0;
}

