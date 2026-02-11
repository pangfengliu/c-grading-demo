#include <assert.h>
#include "factorial.c"

int main() {
    assert(factorial(0) == 1);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);
    assert(factorial(-1) == -1);
    return 0;
}
