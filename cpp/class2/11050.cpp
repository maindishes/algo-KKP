// 5 2

#include <iostream>

int main() {
    int a,b;
    std::cin >> a >> b;

    long long inum=1;
    long long inum2=1;
    int temp = b;
    for(int i=0; i<temp; ++i){
        inum *= a;
        --a;
        inum2 *= b;
        --b;
    }

    std::cout << inum/inum2 << std::endl;
}