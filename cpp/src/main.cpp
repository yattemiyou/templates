#include <stdlib.h>

#include "Hello.h"
#include "Sample.h"

int main(int argc, char *argv[])
{
    system("gcc -v");

    Hello hello;

    hello.say();

    execute();

    return 0;
}
