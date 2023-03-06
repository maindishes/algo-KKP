/**
 * 곱셈
 * 2023-03-04 / 17:54
input:
10 11 12
*/

#include <iostream>
using ll = long long ;
ll pow(ll a, ll b, ll c)
{
    if(b == 1)
        return a % c;
    ll val = pow(a, b/2, c);
    val = val * val % c;
    if( b % 2 == 0)
        return val;
    return val * a % c;
}

int main() {
    int a,b,c;
    std::cin >> a >> b >> c;
    std::cout << pow(a,b,c) << std::endl;

}
