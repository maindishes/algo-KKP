/**
 * 파도반 수열
 * 2023 3 12
2
6
12
*/

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int  temp;
    unsigned long long box[101];
    box[1] = 1;
    box[2] =  1;
    box[3] = 1;
    box[4]  = 2;
    // box[5] = 2;
    for(int  i= 5; i<100+1;++i)
    {
        box[i] = box[i-2] + box[i-3];
    }
    while( n--)
    {
        std::cin >> temp;
        std::cout << box[temp] << std::endl;
    }
}