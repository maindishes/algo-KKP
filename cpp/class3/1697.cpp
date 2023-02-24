/*
* 숨바꼭질
* 1697
* 2023 2 24
5 17
*/

#include <queue>
#include <iostream>
#include <vector>

// int box[100001];
int visit[100001] = {0};
int main()
{
    int start,target;
    std::cin >> start >> target;
    // if (start > target)
    //     std::swap(start,target);
    // box[target] = 1;
    std::queue<int> Q;
    int bx[3] = {-1,1,0};
    Q.push(start);
    visit[start] = 0;
    // if (start == target)
    // {
    //     std::cout << 0 << std::endl;
    //     return 0;    
    // }
    while(!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        if (cur == target)
            break;
        for(int i =0; i<3; ++i)
        {
            int nx = cur + bx[i];
            if (i == 2)
                nx = cur*2;
            if (0 <= nx && nx < 100001 && visit[nx] == 0) {
                visit[nx] = visit[cur] + 1;
                Q.push(nx);
            }
            // Q.push(nx);
            // visit[nx] = visit[cur] + 1;
        }
    }
    
    std::cout << visit[target] << std::endl;


}

