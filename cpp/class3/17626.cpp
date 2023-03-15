/**
 * Four Squeares
 * 2023 3 12
25
*/


#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    int n; 
    std::cin >> n;  
    std::array<int, 50001> cache;
    cache.fill(99999);
    cache[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            cache[i] = std::min(cache[i], cache[i - j * j] + 1);
        }
    }
    
    std::cout << cache[n];
    return 0;
}