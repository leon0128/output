#include <iostream>
#include <vector>
#include <utility>
#include <deque>
#include <tuple>
#include <unordered_map>

#include "output.hpp"

int main(int argc, char **argv)
{
    std::array<int, 3> arr{1, 2, 3};
    std::deque<int> deq{1, 2, 3};
    std::pair<int, int> pair{1, 2};
    std::tuple<int, int, int> tuple{1, 2, 3};
    std::vector<int> vec{1, 2, 3};

    std::unordered_map<int, int> map{{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    std::cout << "arr: " << arr
        << "\ndeq: " << deq
        << "\npair: " << pair
        << "\ntuple: " << tuple
        << "\nvec: " << vec
        << "\nmap: " << map
        << std::endl;

    return 0;
}