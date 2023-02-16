#include <queue>
#include <iostream>

int board[502][502] = {{1,1,1,0,1,0,0,0,0,0},
{1,0,0,0,1,0,0,0,0,0},
{1,1,1,0,1,0,0,0,0,0},
{1,1,0,0,1,0,0,0,0,0},
{0,1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0} }; 

bool visit[502][502];

int n = 7;
int m = 10;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main()
{
    std::queue<std::pair<int,int> > Q;
    visit[0][0] = 1;
    Q.push(std::make_pair(0,0));

    while(!Q.empty())
    {
        std::pair<int,int> cur = Q.front();
        Q.pop();
        for(int i =0; i<4; ++i) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i]; 

            if(nx < 0 || nx >= n || ny <0 || ny >= m)
                continue;
            if(visit[nx][ny] == 1 ||board[nx][ny] == 0 )
                continue;
            Q.push(std::make_pair(nx,ny));
            visit[nx][ny] = 1;
        }

    }
}