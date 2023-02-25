/**
 * 단지번호 붙이기
 * 2667
 * 2023 2 25
입력
7
0110100
0110101
1110101
0000111
0100000
0111110
0111000
*/

#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
int main()
{
    int inum;
    std::cin >> inum;
    std::vector<std::vector<int> > ivec(inum+1);
    std::string temp;
    for(int i =0; i< inum; ++i)
    {
        std::cin >> temp;
        for(int k = 0; k< temp.length(); ++k)
        {
            // const char s = temp[k];
            ivec[i].push_back(int(temp[k]) - '0');
        }
    }
    std::queue<std::pair<int,int> > Q;
    std::vector<int> v(inum,0);
    std::vector<std::vector<int> > V(inum,v);
    // Q.push(std::make_pair(0,0));
    // V[0][0] =1;
    int dx[4] = {0,1,-1,0};
    int dy[4] = {1,0,0,-1};
    std::vector<int> an;
    int start=0;
    for(int i =0; i<inum; ++i)
    {
        for(int j =0; j<inum; ++j)
        {
            if(V[i][j] == 1 || ivec[i][j] == 0)
                continue;
            ++start;
            Q.push(std::make_pair(i,j));
            V[i][j] =1;
            int cnt=0;
            while(!Q.empty())
            {
                std::pair<int,int> cur = Q.front();
                // std::cout << cur.first << " : " << cur.second << std::endl;
                Q.pop();
                ++cnt;
                for(int idx = 0; idx< 4; ++idx)
                {
                    int nx = cur.first + dx[idx];
                    int ny = cur.second + dy[idx];
                    if(nx < 0 || nx >= inum || ny <0 || ny >= inum)
                        continue;
                    if(V[nx][ny] == 1 || ivec[nx][ny] == 0 )
                        continue;
                    Q.push(std::make_pair(nx,ny));
                    V[nx][ny] = 1;
                }
            }
            an.push_back(cnt);
        }
    }
    std::cout << start <<  "\n";
    sort(an.begin(),an.end());
    for(int o =0; o<an.size(); ++o)
    {
        std::cout << an[o] << "\n";
    }
}