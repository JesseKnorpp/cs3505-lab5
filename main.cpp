#include <iostream>
#include <string>

std::string greeting(const std::string &name)
{
    return "Hello, " + name + "!";
}

int main()
{
    std::cout << greeting("Git user") << '\n';
    std::cout << "Testing git" << "Testing again" << std::endl;
    int i = 10;
    int y = 2;
    int j = 10;

    return 0;
}
