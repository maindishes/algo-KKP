#include <iostream>
#include <queue>

int board[502][502];
int visit[502][502];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main()
{
    int n,m;
    std::cin >> n >> m;
    int temp;
    int mx=0;
    for(int i =0; i< n; ++i) {
        for(int j =0; j<m; ++j) {
            std::cin >> temp;
            board[i][j] = temp;
        }
    }
    int cnt=0;
    std::queue<std::pair<int,int> > Q;
    for(int i =0; i<n; ++i) {
        for(int j = 0; j<m; ++j) {
            if(visit[i][j] == 1 || board[i][j] != 1)
                continue;
            ++cnt;
            int area = 0;
            visit[i][j] = 1;
            Q.push(std::make_pair(i,j));
            while(!Q.empty())
            {
                std::pair<int,int> cur = Q.front();
                Q.pop();
                ++area;
                for(int dir =0; dir < 4; ++dir) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];

                    if(nx < 0 || nx >= n || ny <0 || ny >= m)
                        continue;
                    if(visit[nx][ny] ==1 || board[nx][ny] != 1)
                        continue;
                    Q.push(std::make_pair(nx,ny));
                    visit[nx][ny] = 1;
                }
                // std::cout << area << std::endl;
            }
            mx = std::max(mx,area);
        }
    }
    std::cout << cnt << "\n" << mx << std::endl;
}