#include <stdlib.h>
#include <iostream>

#include "Hello.h"

int main(int argc, char *argv[])
{
    std::cout << system("gcc -v") << std::endl;

    Hello hello;

    hello.say();

    return 0;
}
