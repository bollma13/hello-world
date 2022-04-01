#include <string>
#include <iostream>
using namespace std;




int main(){
    vector<int> a = {{1}, {2}, {3}};
    vector<int> b = {{-1}, {8}, {-456}};
    for (auto i: MaxVector(a,b)){
        cout << i << endl;
    }
    return 0;
}    