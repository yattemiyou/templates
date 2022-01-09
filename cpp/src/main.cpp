#include <stdlib.h>

#include "Hello.h"

int main(int argc, char *argv[])
{
    system("gcc -v");

    Hello hello;

    hello.say();

    return 0;
}
