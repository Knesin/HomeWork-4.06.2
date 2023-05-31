#include <iostream>
#include <set>

int main()
{
    int count;
    std::cout << "[IN]: " << std::endl;
    std::cin >> count;
    std::set<int> si;
    for (int i = 0; i < count; ++i) {
        int in_i;
        std::cin >> in_i;
        si.insert(in_i);
    }
    std::cout << "[OUT]: " << std::endl;
    for (auto i = si.rbegin(), si_rend = si.rend(); i != si_rend; ++i) {
        std::cout << *i <<std::endl;
    }
}
