#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main()
{
    // std::vector<int> array(4, 0);
    // for(auto value : array){
    //     std::cout << value << std::endl;
    // }

//     int array[] = { 0, 1, 2, 3, 4, 5 };
//     std::vector<int> part(&array[2], &array[5]);
//     for (const auto v: part)
// {
//     std::cout << v << std::endl;
// }

// std::vector<int> full(array, array + 6);
// for (int left = 0, right = full.size() -1; left < right; ++left, --right)
// {
//     std::swap(full[left], full[right]);
// }

// for (const auto v: full)
// {
//     std::cout << v << std::endl;
// }

// for (auto it = full.begin(); it != full.end(); it +=2){
//     it = full.insert(it, *it);
// }
// //full.erase(full.begin() + 2, full.begin() + 7);

// const auto it = std::find(full.begin(), full.end(), 5);
// if (it != full.end())
// {
//     full.erase(it);
// }

// for (const auto v: full)
// {
//     std::cout << v << std::endl;
// }

std::vector<int> v;

v.assign(5, 2);
v.assign({ 0, 2, 32, -4, 3 });


for (const auto val: v)
{
    std::cout << val << std::endl;
}

v.clear();
    return 0;


}