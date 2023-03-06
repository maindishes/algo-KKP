/**
 * 토마토
 * 2023-03.04 /20:41
6 4
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 1

정수 1은 익은 토마토, 
정수 0은 익지 않은 토마토, 
정수 -1은 토마토가 들어있지 않은 칸을 나타낸다.
1은 0을 변화 시킨다.
*/

// 방문안한곳 기준이 아니라 1로 바뀐곳을 방문하면 안되는것. (cur로 써?)
// 다 익은것을 어떻게 체크해서 계속 돌려줄까? 
#include <iostream>
#include <queue>
#include <vector>


int main() {
    int n,m;
    std::cin >> n >> m;
    int box[1001][1001] = {0,0};
    int dx[4] = {0,1,-1,0};
    int dy[4] = {1,0,0,-1};
    // std::vector<int> boxv()
    int visit[1001][1001] = { 0,0};
    int num_temp;
    for(int i =0; i<n; ++i) {
        for(int j=0; j<m; ++j)
        {
            std::cin >> num_temp;
            box[i][j] = num_temp;
        }
    }
    int cnt=0;
    std::queue<std::pair<int,int> > Q;
    for(int i =0; i<n; ++i) {
        // if(visit[i][0] == 1 || box[i])
        for(int j=0; j<m; ++j)
        {
            if (box[i][j] == -1 || box[i][j] == 0)
                continue;
            Q.push(std::make_pair(i,j));
            while(!Q.empty())
            {
                std::pair<int, int> cur = Q.front();
                int curx = cur.first;
                int cury = cur.second;
                Q.pop();
                // 이 pop하는거 생각 좀 더 해보자
                ++cnt;
                for( int idx =0; idx<4; ++idx)
                {
                    int nx = cur.first + dx[idx];
                    int ny = cur.second + dy[idx];
                    if( nx < 0 || nx >= n || ny <0 || ny >=m)
                        continue;
                    if( box[nx][ny] == -1 )
                        continue;
                    if(box[curx][cury] == 1)
                    {
                        box[nx][ny] = 1;
                        Q.push(std::make_pair(nx,ny));
                    }
                    visit[nx][ny] = 1;
                }
            }
        }
    }
    std::cout << cnt << std::endl;

}