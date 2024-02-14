// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; ++i)
        g1.push_back(i);

    std::cout << "Output of being and end";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        std::cout << *i << " ";
}