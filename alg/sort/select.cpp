#include "util.h"
#include <iostream>
#include <vector>

void select_sort(std::vector<int>& vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[idx] > vec[j]) {
                idx = j;
            }
        }

        if (idx != i) {
            swap(vec, i, idx);
        }
    }
}

int main() {
    std::vector<int> vec = {3, 4, 1, 5, 2};
    std::cout << vec << std::endl;
    //    select_sort(vec);
    // bubble_sort(vec);
    // quick_sort(vec);
    heap_sort(vec);
    std::cout << vec << std::endl;

    // for (int i = 0; i < 10; i++) {
    // std::cout << i << ": " << binary_search(vec, i) << std::endl;
    // }
}
