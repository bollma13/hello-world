#include "12.2.h"
#include <vector>
#include <string>
#include <iostream>

int main(){
    std::vector<int> a = {{1}, {2}, {3}};
    std::vector<int> b = {{-1}, {8}, {-456}};
    for (auto i: MaxVector(a,b)){
        std::cout << i << std::endl;
    }
    return 0;
}    