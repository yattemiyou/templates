#include "Hello.h"

#include <iostream>

Hello::Hello()
{
    message = "Hello";
}

void Hello::say()
{
    std::cout << message << std::endl;
}
