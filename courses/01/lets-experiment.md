# Let's Experiment with std::cout and std::cin

`std::cin` and `std::out` are how we get input in and out of our programs in C++.

```c++

int main()
{
    int x;
    std::cin >> x;

    std::cout << "You typed:  " << x << std::endl;
    std::cout << "Hello " << std::endl;


    return 0;
}

```

std is a `namespace` which is ready made container with functions and classes. When using components from standard library, and typically the standard library is cross platform. It should operate the same way on different platforms.

`g++ --std=c++11 test.cpp` which allows features of at least c++. Think of data as flowing or streaming across those arrows

I encourage you to play with programs and trying things out and see what happens with different input. Try and break your programs. Later we'll explicitly handling input by adding extra code to make the code, extra robust. using
exception handling and boolean logic to check for the correct range and thing like that.

## About the end of line character

tldr: use std::endl its cross platform

In fact, the end of line character '\n' will be converted into the appropriate characters to end a line on a specific platform. See this reference:

https://en.cppreference.com/w/cpp/io/c/FILE

<blockquote>
    "Binary and text modes

A text stream is an ordered sequence of characters composed into lines (zero or more characters plus a terminating '\n'). Whether the last line requires a terminating '\n' is implementation-defined. Characters may have to be added, altered, or deleted on input and output to conform to the conventions for representing text in the OS (in particular, C streams on Windows OS convert \n to \r\n on output, and convert \r\n to \n on input)"

</blockquote>

## End of week 1

Congratulations you have reached the end of the first week of the course. By now, you should have written and run your first program and you should have a basic menu system working.

Next week we will look into refactoring the menu system using functions.

## Background: text-based simulations

mutt
tree
g++

## What is refactoring

The code looks very repetitive, is there a more compact way to represent this code, and we're mixing concernse which

- Code which prints out the menu
- code which receives user input
- code that processes user input

There are distrinct pieces of code. Refactoring is about taking different bits of code and turinging them into sort of modules. Making the code more modular, and what each part of the code is doing. where going to cover techniques on how to make our code more modular and clear.

The code has many function wher each fucntion has a clear, singular purpose.

Things refactoring mitigates

the code is too repetitive
The code has a large block which does lots of different things - suer input, printing out, etc.

## What is refactoring? Quiz

## Write a print menu function and a processOption function

Now we know abit about refactoring, we'll try and refactor our code.
