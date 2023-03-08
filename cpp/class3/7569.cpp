/**
 * 토마토 2
 * 2023-03.07 / 13:41
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
// tuple 왜 안 써짐?
#include <iostream>
#include <queue>
#include <vector>
// #include <tuple>
// #include <bits/stdc++.h>
class coord {
public:
  int x, y, z;
  coord(int x_val = 0, int y_val = 0, int z_val = 0) : x(x_val), y(y_val), z(z_val) {}
};

int main() {
    int m,n,h;
    std::cin >> m >> n >> h;
    // 안해도 0으로 초기화 됨 전역으로 했을때만 그렇나?
    // 총 6 개로 하는게 낫나 ? 
    int dx[6] = {0,1,-1,0,0,0};
    int dy[6] = {1,0,0,0,-1,0};
    int dz[6] = {0,0,0,-1,0,1};
    // // std::vector<int> boxv()
    int box[101][101][101] = {0,0,0}; 
    int visit[101][101][101] = {0,0,0};
    // // typedef tuple<int,int,int> T;
    coord coor;
    std::queue<coord> Q;
    for(int i =0; i<h; ++i) {
        for(int j=0; j<n; ++j)
        {
            for( int k=0; k<m; ++k) {
                std::cin >> box[j][k][i];
                if(box[j][k][i] == 1)
                {
                    coor.x = j;
                    coor.y = k;
                    coor.z = i;
                    Q.push(coor);
                }
                if(box[j][k][i] == 0)
                    visit[j][k][i] = -1;
                // box[i][j] = num_temp;
            }
        }
    }
    int cnt=0;
    while(!Q.empty())
    {
        coord cur = Q.front();
        int curx,cury,curz;
        curx = cur.x;
        cury = cur.y;
        curz = cur.z;

        // std::cout << "T : " << curx <<  " | " << cury << "\n";
        Q.pop();
        // 이 pop하는거 생각 좀 더 해보자
        ++cnt;
        for( int idx =0; idx<6; ++idx)
        {
            int nx = curx + dx[idx];
            int ny = cury + dy[idx];
            int nz = curz + dz[idx];
            if( nx < 0 || nx >= n || ny <0 || ny >=m || nz < 0 || nz >= h)
                continue;
            if(visit[nx][ny][nz] >= 0 )
                continue;
            coord next;
            next.x = nx;
            next.y = ny;
            next.z = nz;
            Q.push(next);
            visit[nx][ny][nz] = visit[curx][cury][curz] + 1;
        }
    }


    int ans = 0;
    for(int i =0; i<h; ++i)
    {
        for(int j=0; j<n; ++j) {
            for (int k =0; k<m; ++k) {
                // std::cout << visit[j][k][i] << " ";
                if (visit[j][k][i] == -1)
                {
                    ans = -1;
                    std::cout << ans << "\n";
                    return 0;
                }
                else {
                    ans = std::max(ans,visit[j][k][i]);
                }
            }
        }
        // std::cout << "\n";
    }
    std::cout << ans << std::endl;
}