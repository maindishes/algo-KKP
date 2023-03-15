/**
 * 종이의 개수
 * 2023 3 15
in:
9
0 0 0 1 1 1 -1 -1 -1
0 0 0 1 1 1 -1 -1 -1
0 0 0 1 1 1 -1 -1 -1
1 1 1 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0
0 1 -1 0 1 -1 0 1 -1
0 -1 1 0 1 -1 0 1 -1
0 1 -1 1 0 -1 0 1 -1
*/
#include <iostream>
#include <array>
#include <math.h>

int result[3];
bool check(int x, int y, int size);
void divide(int row, int col, int size);
int box[2187][2187];
int main() {
    int inum;
    std::cin >> inum;
    int input_temp;
    // std::array<std::array<int, 2187>, 2187> box
    // int box[inum][inum];
    // {0,0};

    
    for(int i =0; i< inum; ++i)
    {
        for(int j = 0; j<inum; ++j)
        {
            std::cin >> input_temp;
            ++input_temp;
            box[i][j] = input_temp;
        }
    }
    divide(0,0,inum);
    std::cout << result[0] << "\n";
    std::cout << result[1] << "\n";
    std::cout << result[2] << "\n";
}

bool check(int x, int y, int size)
{
    int start = box[x][y];
    for(int i =x; i< x+ size; ++i )
    {
        for ( int j =y; j < y+size; ++j)
        {
            if (box[i][j] != start)
                return false;
        }
    }
    return true;
}

void divide(int x, int y, int size)
{
    // check
    if (check(x,y,size))
    {
        result[box[x][y]]++;
    }
    else {
        divide(x, y, size / 3); // 1번
        divide(x+size/3, y, size / 3); // 2번
        divide(x+size/3+size/3, y, size / 3); // 3번
        divide(x, y+size/3, size / 3); // 4번
        divide(x, y+size/3+size/3, size / 3); // 7번
        divide(x+size/3, y+size/3, size / 3); // 5번
        divide(x+size/3+size/3, y+size/3+size/3, size / 3); // 9번
        divide(x+size/3, y+size/3+size/3, size / 3); // 8번
        divide(x+size/3+size/3, y+size/3, size / 3); // 6번
    }
}