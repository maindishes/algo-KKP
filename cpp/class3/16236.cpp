/**
 * ㅇㅏ기 상어
 * 2023 3 10
3
3 2 1
0 0 0
0 9 0
*/

#include <iostream>
#include <queue>
#include <vector>

// int box[20][20];


int main() {
    int inum;
    std::cin >> inum;

    int dx[4] = { 0,-1,1,0};
    int dy[4] = {1,0,0,-1};
    int box[20][20] = {0,0};
    int visit[20][20] = {0,0};
    int vvist[20][20] = {0,0};
    int temp;
    std::queue<std::pair<int,int> > Q;

    for (int i=0; i< inum; ++i)
    {
        for(int j=0; j< inum; ++j) {
            std::cin >> temp;
            box[i][j] = temp;
            if (temp == 9)
            {
                visit[i][j] = -1;
                Q.push(std::make_pair(i,j));
            }
            if (temp == 0)
                visit[i][j] = -1;
        }
    }
    int shark = 1;
    // Q.push(std::make_pair(0,0));
    // visit[0][0] = 1;
    int target =1;

    while(!Q.empty())
    {
        std::pair<int,int> cur = Q.front();
        Q.pop();
        for(int idx =0; idx< 4; ++idx){
            int nx = cur.first + dx[idx];
            int ny = cur.second + dy[idx];
            if(nx <0 || nx >= inum || ny <0 || ny >= inum)
                continue;
            if(visit[nx][ny] == -1)
                continue;
            // if(shark >= box[nx][ny])
            // if(box[nx][ny])
            Q.push(std::make_pair(nx,ny));
            visit[nx][ny] = visit[cur.first][cur.second] + 1;
            // 이렇게 다 탐색 하고 나서 확인 가능하잖아 .그 먹이를 먹을수 있는지 없는지. 
        }
    }

    for (int i=0; i< inum; ++i)
    {
        for(int j=0; j< inum; ++j) 
            std::cout << visit[i][j] << " ";
        std::cout << "\n";
    }
    std::cout << std::endl;
    // visit 으로 반복문 돌면 안 된다.
    // 처음 시작점 9 인 위치를 넣고  BFS탐색 하면서 다음 점을 넣고 
    // 넣는 조건은 나보다 작거나 같은 경우. 그 점의 위치가.
    // 해서 최종 다 방문 하면 끝




}