#include "foo.h"
#include <iostream>
#include "config.h"

int main()
{
    foo();
    std::cout << MY_CMAKE_CONSTANT << std::endl;

    return 0;
}