/**
 * 듣보잡
 * 2023 2 24
 * 1764
 입력
 3 4
ohhenrie
charlie
baesangwook
obama
baesangwook
ohhenrie
clinton
*/

#include <map>
#include <iostream>
#include <vector>
bool scom(std::string &a, std::string &b)
{
    if( a > b)
        return false;
    return true;
}
int main()
{
    int n,m;
    std::cin >> n >> m;
    std::map<std::string, std::string> imap;
    std::string temp;
    for(int i = 0; i < n ; ++i) {
        std::cin >> temp;
        imap[temp] = "c";
    }
    std::vector<std::string> iv;
    int cnt = 0;
    for(int i = 0; i < m; ++i){
        std::cin >> temp;
        // iv.push_back(temp);
        if (imap[temp] == "c"){
            ++cnt;
            iv.push_back(temp);
        }
            // std::cout << temp << std::endl; 
        
    }
    std::cout << cnt << std::endl;
    sort(iv.begin(),iv.end(),scom);
    for(int i =0; i<iv.size(); ++i)
    {
        // if(imap[iv[i]] == "c")
        std::cout << iv[i] << std::endl;
    }
}