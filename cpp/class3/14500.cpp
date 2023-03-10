/**
 * 테트로미노
 * 2023 3 10
5 5
1 2 3 4 5
5 4 3 2 1
2 3 4 5 6
6 5 4 3 2
1 2 1 2 1
*/

#include<iostream>
#include<queue>
#include<vector>

box[501][501];
int d1x[3] = {1,2,3};
int d1y[3] = {0,0,0};
int d2x[3] = {} 
int main() {
    int n,m;
    std::cin >> n >> m;
    int temp;
    for(int i =0; i< n; ++i)
    {
        for (int j =0; j< m; ++j)
        {
            std::cin >> temp;
            box[i][j] = temp;
        }
    }


}