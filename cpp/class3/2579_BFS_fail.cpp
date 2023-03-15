/**
 * 계단 오르기
 * 2023 3 12
6
10
20
15
25
10
20
*/

// BFS 가능 할거 같은데 ?

#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

int dx[2] = {1,2};
int main()  {
    int inum;
    std::cin >> inum;
    std::vector<int> ivec;
    ivec.push_back(0);
    int temp;
    std::vector<int> visit(inum+1,0);
    std::queue<int> Q;
    int tt = inum;
    while(tt--)
    {
        std::cin >> temp;
        ivec.push_back(temp);
    }
    // sort(ivec.begin(),ivec.end());
    // std::cout << *(ivec.end()-1) << std::endl;
    Q.push(0);
    // for(int idx =0; idx < inum+1; ++idx)
    // {
    //     if(visit[idx] == 1)
    //         continue;
        // Q.push(idx);
    
    int sum = 0;
    while(!Q.empty())
    {
        int cur = Q.front();
        sum += cur;
        Q.pop();
        for(int c = 0;  c<inum+1; ++c)
        {
            std::cout<<visit[c] << " ";
        }
        std::cout << std::endl;
        // std::cout << "cur : " << cur << std::endl;
        if (cur == inum)
            break;
        for(int i =0; i<2; ++i)
        {
            int next= cur + dx[i];
            std::cout << "next : " << next << std::endl;
            if(next > inum)
                continue;
            Q.push(next);
            visit[next] += ivec[cur];
        }
    // }
    }
    std::cout << "sum : " << sum << std::endl;
}