#include <iostream>

using namespace std;

template<typename T>
class Pair
{
    public:
        Pair(T f, T s) {
            first = f;
            second = s;
        }
    
        T first;
        T second;
};

int main() {
    Pair<int> p1(1,1);
    cout << p1.first << " " << p1.second << endl;
}
