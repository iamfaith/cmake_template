#include "func.h"
#include <stdio.h>
#include <assert.h>
int main() {

    printf("test case1: %d\n", func());
    assert(func() == 30);
    return 0;
}