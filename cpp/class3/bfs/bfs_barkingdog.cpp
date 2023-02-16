#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
// std::vector<int> t1 = {1,1,1,0,1,0,0,0,0,0};
// std::vector<std::vector<int> > board{
//     {1,1,1,0,1,0,0,0,0,0},
//     {1,0,0,0,1,0,0,0,0,0},
//     {1,1,1,0,1,0,0,0,0,0},
//     {1,1,0,0,1,0,0,0,0,0},
//     {0,1,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0}};
int board[502][502] = {{1,1,1,0,1,0,0,0,0,0},
{1,0,0,0,1,0,0,0,0,0},
{1,1,1,0,1,0,0,0,0,0},
{1,1,0,0,1,0,0,0,0,0},
{0,1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0} }; 

bool visit[502][502];
int n = 7, m = 10;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};



int main(void)
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::queue<std::pair<int, int> > Q;
    visit[0][0] = 1;
    Q.push(std::make_pair(0,0));
    while(!Q.empty())
    {
        std::pair<int,int> cur = Q.front();
        Q.pop();
        std::cout << '(' << cur.first << ", " << cur.second << ") -> ";
        for(int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if(visit[nx][ny] == 1|| board[nx][ny] != 1)
                continue;
            visit[nx][ny] = 1;
            Q.push(std::make_pair(nx,ny));
        }
    }
}

// int n = 7, m = 10;
// int dx[4] = {-1,0,1,0};
// int dy[4] = {0,-1,0,1};
// int main() {
//     std::queue<std::pair<int, int> > Q;
//     visit[0][0] = 1;

//     Q.push({0,0});
//     while(!Q.empty())
//     {
//         std::pair<int,int> cur = Q.front();
//         Q.pop();
//         for(int i =0; i< 4; ++i)
//         {
//             int nx = cur.first + dx[i];
//             int ny = cur.second + d
//         }
//     }

// }