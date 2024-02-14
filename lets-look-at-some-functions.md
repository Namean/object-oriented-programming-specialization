# Lets look at some functions

In this video we're going to talk about functions.

All c++ programs must have at least one function called main. If you don't put a main function in your program will not be buildable.

Engage with error message. The most common linker error is where your supoposed to provide some function or component.

```c++
#include <iostream>

int startHere()
{

}

```

If you compile and theres an error, the compiler will also throw in any warnings to help the developer out.

You can ask for warning or all warnings

`g++ -Wall --std=c++11 test.cpp`

```cpp

#include iostream

void printHello()
{
    std::cout << "Hello World!" << std::endl;
}

// Adding the special comment below
// will allow you to mouse over and
// see exactly how to use the function

/** compute the average of x and y */
float average (float x, float y)
{
    return (x+y) / 2;
}

int main()
{
    float z = (15, 1.5);
    std::cout << z << std::endl;
    printHello();
    return 0;
}

```

send some data to a function

```cpp

// promise to implement the function
// this is called a function prototype.
// you can separate the promise from the implementation.
void printHello();

```

Example linker error

```log
(base) desmond@linux-mint:~/Documents/src/repos/object-oriented-programming-specialization/src$ g++ --std=c++11 test.cpp
/usr/bin/ld: /tmp/ccsqAyoj.o: in function `main':
test.cpp:(.text+0xd): undefined reference to `printHello()'
/usr/bin/ld: test.cpp:(.text+0x24): undefined reference to `average(float, float)'
collect2: error: ld returned 1 exit status

```
