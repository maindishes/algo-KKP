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

// barkindog 참고 . 
// 일단 나는 이중 포문으로 모든 점을 시작점이라 생각하고 1일경우에만 뭘 하려고 했는데
// 바킹독은 시작점만 큐에 넣어주고 while문을 따로 돌린다.
// 근데 나는 내 생각한 방식이 약간 비효율적이지만 맞다고 생각했는데
// 이렇게 되면 익은 토마토가 여러개일 경우 하나의 시작점을 기준으로 탐색을 하게 된다. 
// 동시에 익어가는 과정이 진행 되어야하는데
#include <iostream>
#include <queue>
#include <vector>


int main() {
    int n,m;
    std::cin >> m >> n;
    // 안해도 0으로 초기화 됨 전역으로 했을때만 그렇나?
    int box[1001][1001] = {0,0}; 
    int dx[4] = {0,1,-1,0};
    int dy[4] = {1,0,0,-1};
    // std::vector<int> boxv()
    int visit[1001][1001] = { 0,0};
    std::queue<std::pair<int,int> > Q;
    for(int i =0; i<n; ++i) {
        for(int j=0; j<m; ++j)
        {
            std::cin >> box[i][j];
            if(box[i][j] == 1)
                Q.push(std::make_pair(i,j));
            if(box[i][j] == 0)
                visit[i][j] = -1;
            // box[i][j] = num_temp;
        }
    }
    int cnt=0;
    // for(int i =0; i<n; ++i) {
    //     // if(visit[i][0] == 1 || box[i])
    //     for(int j=0; j<m; ++j)
    //     {
    //         if (box[i][j] == -1 || box[i][j] == 0)
    //             continue;
    //         Q.push(std::make_pair(i,j));
    while(!Q.empty())
    {
        std::pair<int, int> cur = Q.front();
        int curx = cur.first;
        int cury = cur.second;
        // std::cout << "T : " << curx <<  " | " << cury << "\n";
        Q.pop();
        // 이 pop하는거 생각 좀 더 해보자
        ++cnt;
        for( int idx =0; idx<4; ++idx)
        {
            int nx = cur.first + dx[idx];
            int ny = cur.second + dy[idx];
            if( nx < 0 || nx >= n || ny <0 || ny >=m)
                continue;
            if(visit[nx][ny] >= 0 )
                continue;
            // if(box[cur.first][cur.second] == 1)
            // {
            //     box[nx][ny] = 1;
            //     Q.push(std::make_pair(nx,ny));
            // }
            Q.push(std::make_pair(nx,ny));
            visit[nx][ny] = visit[cur.first][cur.second] + 1;
        }
    }


    int ans = 0;
    for(int i =0; i<n; ++i)
    {
        for(int j=0; j<m; ++j) {
            // std::cout << visit[i][j] << " ";
            if (visit[i][j] == -1)
            {
                ans = -1;
                std::cout << ans << "\n";
                return 0;
            }
            else {
                ans = std::max(ans,visit[i][j]);
            }
        }
        // std::cout << "\n";
    }
    std::cout << ans << std::endl;
}