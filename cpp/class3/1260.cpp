/*
* DFS와 BFS
* 2023 - 2 - 19
입력 
4 5 1
1 2
1 3
1 4
2 4
3 4
*/

#include <queue>
#include <stack>
#include <iostream>
#include <vector>
#include <algorithm>
void DFS(std::vector<std::vector<int> > &grap, std::vector<bool> &visit, int start)
{
    std::stack<int> Q;
    Q.push(start);
    // visit[start] = true;
    while(!Q.empty())
    {
        int cur = Q.top();
        Q.pop();
        std::cout << cur << " ";
        for(int i =0; i< grap[cur].size(); ++i)
        {
            int next= grap[cur][i];
            if(visit[next] == false)
            {
                Q.push(next);
                visit[next] = true;
            }
        }
    }
    std::cout << "\n";
}
void BFS(std::vector<std::vector<int> > &grap, std::vector<bool> &visit, int start)
{
    std::queue<int> Q;
    Q.push(start);
    // visit[start] = true;
    while(!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        std::cout << cur << " ";
        for(int i =0; i< grap[cur].size(); ++i)
        {
            int next= grap[cur][i];
            if(visit[next] == false)
            {
                Q.push(next);
                visit[next] = true;
            }
        }
    }
    std::cout << "\n";
}
int main()
{
    int n, m , start;
    std::cin >> n >> m >> start;
    std::vector<std::vector<int> > grap(n + 1);

    for(int i =0; i<m; ++i)
    {
        int v1, v2;
        std::cin >> v1 >> v2;
        grap[v1].push_back(v2);
        grap[v2].push_back(v1);
    }
    for(int i =0; i< n; ++i) {
        sort(grap[i].begin(), grap[i].end());
    }
    std::vector<bool> dfs_visit(n+1);
    dfs_visit[start] = true;
    DFS(grap,dfs_visit,start);

    std::vector<bool> bfs_visit(n+1);
    bfs_visit[start] = true;
    BFS(grap,bfs_visit,start);
}