#include <iostream>
#include <queue>

// int board[502][502];
// int visit[502][502];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main()
{
    int inum;
    std::cin >> inum;

    for(int p =0; p< inum; ++p) {
        int n,m,b;
        std::cin >> n >> m >> b;
        
        int board[502][502] = {0,0};
        int visit[502][502] = {0,0};
        // for(int i =0; i< n; ++i) {
        //     for(int j =0; j<m; ++j) {
        //         board[i][j] = 0;
        //     }
        // }
        int a,c;
        for(int i =0; i< b; ++i){
            std::cin >> a >> c;
            board[a][c] = 1;
        }
        int cnt=0;
        std::queue<std::pair<int,int> > Q;
        for(int i =0; i<n; ++i) {
            for(int j = 0; j<m; ++j) {
                if(visit[i][j] == 1 || board[i][j] != 1)
                    continue;
                cnt++;
                std::queue<std::pair<int,int> > Q;
                Q.push(std::make_pair(i,j));
                visit[i][j] = 1;
                while(!Q.empty()) {
                    std::pair<int,int> cur = Q.front();
                    Q.pop();
                    for(int dir=0; dir< 4; ++dir) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if(nx <0 || nx >= n || ny < 0 || ny >= m)
                            continue;
                        if(visit[nx][ny] == 1 || board[nx][ny] != 1)
                            continue;
                        Q.push(std::make_pair(nx,ny));
                        visit[nx][ny] =1; 
                    }
                }
            }
        }
        std::cout << cnt << std::endl;
    }
}