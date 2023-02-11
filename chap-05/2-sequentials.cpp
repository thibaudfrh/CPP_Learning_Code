#include <list>
#include <string>
#include <iostream>
#include <array>
#include <stack>
#include <vector>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    std::array<std::string, Fruit_Count> fruit_names;
    fruit_names[Apricot] = "apricot";
    fruit_names[Cherry] = "cherry";
    fruit_names[Mango] = "mango";
    fruit_names[Raspberry] = "raspberry";
    // Implement array tests here.
}

void try_lists()
{
    std::list<int> l1 { 1,2,3};
    std::list<int> l2 {4,5};
    std::list<int> l3 {6};
    std::list<int> l4 {7,8,9};

    l1.merge(l2);
    l1.sort();
    l3.merge(l4);
    l3.sort();
    auto mid = l1.begin();
    std::advance(mid, l1.size()/2);
    l1.splice(mid, l3);
    for(auto value : l1){
        std::cout << value << std::endl;
    }
}

void try_stacks()
{
    std::stack<int, std::vector<int>> s1;
    s1.emplace(0);
    s1.emplace(1);
    s1.emplace(2);

    std::vector<int> v {0,1,2};
    std::stack<int, std::vector<int>> s2 {v};
    // Implement stack tests here.
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}