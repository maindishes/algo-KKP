/**
 * 2xn 타일링 2
 * 2023 3 12
2
*/


#include<iostream>

int main() {
    int inum;
    std::cin >> inum;

    int n = 10007;
    unsigned long long box[10001];
    box[1] = 1;
    box[2] = 3;
    for(int i =3; i< inum+1; ++i)
    {
        ///( a + b) % c = ( ( a % c ) + ( b % c ) ).
        box[i] = (box[i-1] + 2*box[i-2]) %n ;
        // std::cout <<  box[i] << std::endl;
    }
    std::cout << box[inum]  << std::endl;
}