/**
 * cow Art 적록색약
RG 차이 못느낌 적록 색약은
5
RRRBB
GGBBB
BBBRR
BBRRR
RRRRR
*/

#include <iostream>
#include <queue>
#include <vector>
int dx[4] = { 0,1,0,-1};
int dy[4] = {1,0,-1,0};
// int box[101][101];
void BFS(int inum, std::vector<std::vector<int> > visit ,std::vector<std::vector<std::string> > ivec)
{
    std::string start;
    int cnt=0;
    std::queue<std::pair<int,int> > Q;
    for(int i =0; i< inum; ++i)
    {
        for (int j=0; j< inum; ++j)
        {
            if(visit[i][j] == 1)
                continue;
            visit[i][j] =1;
            Q.push(std::make_pair(i,j));
            start = ivec[i][j];
            ++cnt;
            while(!Q.empty())
            {
                std::pair<int,int> cur = Q.front();
                Q.pop();
                // ++cnt;
                for(int idx =0; idx<4; ++idx){
                    int nx = cur.first + dx[idx];
                    int ny = cur.second + dy[idx];
                    if(nx < 0 || nx >= inum || ny <0 || ny >=inum)
                        continue;
                    if(visit[nx][ny] == 1)
                        continue;
                    if(start != ivec[nx][ny])
                        continue;
                    Q.push(std::make_pair(nx,ny));
                    visit[nx][ny] = 1;
                } 
            }
        }
    }
    std::cout << cnt << std::endl;
}
int main() {
    int inum;
    std::cin >> inum;
    std::string temp;
    std::vector<std::vector<std::string> > ivec(inum, std::vector<std::string>(inum, "0"));
    std::vector<std::vector<std::string> > iivec(inum, std::vector<std::string>(inum, "0"));
    for(int i =0; i< inum; ++i){
        std::cin >> temp;
        for(int j =0; j< temp.length(); ++j)
        {
            if(temp[j] == 'R' || temp[j] == 'G')
                iivec[i][j] = 'R';
            else
                iivec[i][j] = temp[j];
            ivec[i][j] = temp[j];
            // iivec[i][j] = temp[j];
            // std::cout <<temp << " ";
        }
        // std::cout << "\n";
    }
    // std::cout << ivec[0][0] << std::endl;
    // RG B
    std::queue<std::pair<int,int> > Q;
    std::vector<std::vector<int> > visit(inum, std::vector<int>(inum,0));

    // char start;
    std::string start;
    int cnt =0;
    for(int i =0; i< inum; ++i)
    {
        for (int j=0; j< inum; ++j)
        {
            if(visit[i][j] == 1)
                continue;
            visit[i][j] =1;
            Q.push(std::make_pair(i,j));
            start = ivec[i][j];
            ++cnt;
            while(!Q.empty())
            {
                std::pair<int,int> cur = Q.front();
                Q.pop();
                // ++cnt;
                for(int idx =0; idx<4; ++idx){
                    int nx = cur.first + dx[idx];
                    int ny = cur.second + dy[idx];
                    if(nx < 0 || nx >= inum || ny <0 || ny >=inum)
                        continue;
                    if(visit[nx][ny] == 1)
                        continue;
                    if(start != ivec[nx][ny])
                        continue;
                    Q.push(std::make_pair(nx,ny));
                    visit[nx][ny] = 1;
                } 
            }
        }
    }
    std::cout << cnt << " ";

    std::vector<std::vector<int> > ivisit(inum, std::vector<int>(inum,0));
    BFS(inum,ivisit,iivec);
    
}