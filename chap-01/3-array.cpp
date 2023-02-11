#include <iostream>
#include <vector>

int main()
{
    std::vector<int> array;

for (int i = 0; i < 10; ++i)
{
    array.emplace_back(i+1);
}

for (int value : array)
{
    std::cout << value << std::endl;
}
    std::string a;
    std::cout << a << std::endl;
    return 0;
}
