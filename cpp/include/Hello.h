#ifndef HELLO_H
#define HELLO_H

#include <string>

class Hello
{
public:
    Hello();

    void say();

private:
    std::string message;
};
#endif
