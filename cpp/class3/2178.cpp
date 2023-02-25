/**
 * 미로탐색
 * 2023 2 25
4 6
101111
101010
101011
111011
*/


#include <iostream>
#include <vector>
#include <string>
#include <queue>

int main() {
    int n,m;
    std::cin >> n >> m;
    std::vector<std::vector<char> > iv(n+1);
    std::string temp;

    for(int i=0; i<n; ++i)
    {
        std::cin >> temp;
        // std::vector<char> ttemp;
        for(int j=0; j<m; ++j)
        {
            // std::cout << temp[j] << " ";
            iv[i].push_back(temp[j]);
            // std::cout << iv[i][j] << " ";
        }
        // std::cout << std::endl;
    }
    // std::vector<std::vector<int> > visit(n+1);
    std::vector<int> v(m, 0);
 
    // 위 Vector를 사용하여 2차원 Vector를 초기화합니다.
    // 채우기 생성자 사용
    std::vector<std::vector<int> > visit(n, v);
    // int visit[n][m];
    std::queue<std::pair<int, int> > Q;
    Q.push(std::make_pair(0,0));
    visit[0][0] = 1;
    // std::cout << visit.at(0).at(0) << std::endl;
    visit[0][0] = 1;
    int dx[4] = {0,1,-1,0};
    int dy[4] = {1,0,0,-1};
    while(!Q.empty())
    {
        std::pair<int,int> cur = Q.front();
        Q.pop();
        // std::cout << cur.first << " : " << cur.second << std::endl; 
        for(int idx = 0; idx<4; ++idx)
        {
            int nx = cur.first + dx[idx];
            int ny = cur.second + dy[idx];
            // std::cout << "next : " << nx << " " << ny << std::endl;
            // std::cout << visit[nx][ny] << " | " << iv[nx][ny] << std::endl;
            if(nx < 0 || nx >= n || ny >= m || ny <0)
                continue;
            if(visit[nx][ny] != 0 || iv[nx][ny] == '0')
                continue;
            Q.push(std::make_pair(nx,ny));
            visit[nx][ny] = visit[cur.first][cur.second]+1;
        }
    }
    std::cout << visit[n-1][m-1] << std::endl;
}
