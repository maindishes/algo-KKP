/**
 * 집합
 * 2023 2 25
 * 11723
 26
add 1
add 2
check 1
check 2
check 3
remove 2
check 1
check 2
toggle 3
check 1
check 2
check 3
check 4
all
check 10
check 20
toggle 10
remove 20
check 10
check 20
empty
check 1
toggle 1
check 1
toggle 1
check 1
*/
#include <iostream>
#include <vector>
#include <map>
#include <string>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0); 
    std::ios_base::sync_with_stdio(0);
    int inum;
    std::cin >> inum;
    std::string st;
    int it;
    std::map<int,int> imap;
    std::map<int,int> iall;
    for(int k = 0; k<20; ++k)
    {
        iall[k+1] = k+1;
    }
    for(int i =0; i< inum; ++i)
    {
        std::cin >> st;
        if((st == "all") || (st == "empty"))
        {
            if(st ==  "all")
            {
                // imap.clear();
                imap = iall;
            }
            if(st == "empty")
                imap.clear();
            continue;
        }
        std::cin >> it;
        if(st == "add")
        {
            imap[it] = it;
            continue;
        }
        if(st == "check")
        {
            if(imap[it] == it)
                std::cout << 1 << "\n";
            else
                std::cout << 0 << "\n";
            continue;
        }
        if(st == "remove")
        {
            // std::map<int,int>::iterator iot  = imap.find(it);
            if(imap[it] == it)
                imap.erase(it);
            continue;
        }
        if(st == "toggle")
        {
            if(imap[it] == it)
                imap.erase(it);
            else
                imap[it] = it;
            
        }
    }
}