/**
 * 11956
 * 구간합 구하기 4
5 3
5 4 3 2 1
1 3
2 4
5 5
*/

#include <iostream>
#include <vector>
int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int num,tcase;
    std::cin >> num >> tcase;

    std::vector<int> ivec;
    std::vector<int> dp(100000,0);;
    int temp;
    ivec.push_back(0);
    for(int i =0; i<  num; ++i)
    {
        std::cin >> temp;
        ivec.push_back(temp);
    }


    for(int i =1; i< num+1; ++i)
    {
        dp[i] = dp[i-1] + ivec[i];
    }

    int a,b;
    while(tcase--)
    {
        std::cin >> a >> b;
        std::cout << dp[b] - dp[a-1] << "\n";
    }

}