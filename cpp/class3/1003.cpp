/**
 * 피보나찌
 * #1003
 * 
*/


// DP 로 피보나치 구하기 

// 0,1,1,2,3,5,8 13

#include <iostream>
#include <vector>

std::vector<int> ivec(100,0);


int fib(int n)
{
    if(n == 0)
    {
        return ivec[n];
    }
    if(n == 1)
    {
        ivec[n] = 1;
        return ivec[n];
    }
    if(n == 2)
    {
        ivec[n] = 1;
        return ivec[n];
    }
    if(ivec[n] != 0)
    {
        return ivec[n];
    }
    if(ivec[n] == 0)
    {
        ivec[n] = fib(n-2) + fib(n-1);
        return(ivec[n]);
    }
}  

int main() {
    int inum;
    std::cin >> inum;
    int temp;
    for(int i=0; i< inum; ++i) {
        std::cin >> temp;
        if (temp == 0)
            std::cout << 1 <<" " << 0 << std::endl;
        else
            std::cout << fib(temp-1) << " " << fib(temp) << std::endl; 
    }
}

