#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string a("199 2 3");
    std::istringstream myStream(a);
    int n;int m;
    myStream >> n;
    myStream >> m;
    std::cout << n << "\n";
    std::cout << m << "\n";
}