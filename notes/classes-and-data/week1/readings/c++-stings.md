# C++ Strings

## "C++ Strings: Using char array and string object"

A string is a collection fo characters. There are `two` types of string commly used in c++:

String that are objects of the string class (The Standard C++ Library String Class)

- C-string (C-style Strings)

### C-strings

In C programming, the collection of hcaracters is stored in the form of arrays. This is also supported in C++

C-strings are arrays of type `char` terminated with a null characters, `\0` (ASCII value of null character is 0.)

### How to define a C-string?

```c

char str[] = "C++";

```

In the above code, str is a string and it holds 4 characters.

Although `C++` has three character, the null character \0 is added to the ned of the string automatically.

### Alternative ways of defining a string

```C

char str[4] = "C++";
char str[] = {'C', '+', '+', '\0'};
char str[4] = {'C', '+', '+', '\0'};
```

Like arays, its not neccessary to use all the space allocated for the string. For example

`char str[100] = "C++"`

Example 1: C++ String to Read a Word

C++ program to display a string entered by user.

```cpp
#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entred: " << str << std::endl;

    std::cout << "\nEnter another string: ";
    std::cin >> str;
    std::cout << "You entered: " << str << std::endl;

    return 0;
}
```
