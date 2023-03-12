/**
 * 1로 만들기
 * 1463
입력:
10 
- 
3
*/
#include <iostream>
#include <vector>
#include <queue>
// 10 -> 9 -> 3 -> 1
// 14 -> 13 -> 12 -> 4 -> 2 -> 1
// 14 -> 7 -> 6 -> 2 -> 1
// 13 -> 12 -> 4 -> 2 -> 1
// 15 -> 14 -> 7 > 6 > 2 > 1
// 15 > 5 > 4 > 2 > 1
// 15 > 5 > 4 > 3 > 1
// d[12] = d[12/3] + 1 > 4 ->  2 -> 1   셋중 최솟값 
// d[12] = d[12/2] + 1 > 6 
// d[12] = d[12-1] + 1 > 11 
// 마지막은 3  -> 1 , 2 -> 1  즉 3, 2 면 +1 만 하면됨

int main(){
    int inum;
    std::cin >> inum;
    std::vector<int> ivec(inum+1);
    std::queue<int> Q;
    // ivec[0] = 1;
    int temp = inum;
    // for(int i =2; i<inum+1; ++i)
    // {
    //     ivec[i] = ivec[i-1] + 1; 
    // }
    Q.push(inum);
    while(!Q.empty())
    {
        
        int cur = Q.front();
        // std::cout << "cur : " << cur << std::endl;
        Q.pop();
        if(cur == 1)
            break;
        if(cur%3 == 0 && ivec[cur/3] == 0)
        {
            Q.push(cur/3);
            ivec[cur/3] = ivec[cur] + 1;
        }
        if(cur%2 == 0 && ivec[cur/2] == 0)
        {
            Q.push(cur/2);
            ivec[cur/2] = ivec[cur] + 1;
        }
        if(ivec[cur-1] == 0)
        {
            Q.push(cur -1);
            ivec[cur-1] = ivec[cur] + 1;
        }
    }
    std::cout << ivec[1] << std::endl;
}