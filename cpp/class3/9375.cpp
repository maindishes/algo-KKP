/**
 * 패션왕 신혜빈
 * 2023 2 25
2
3
hat headgear
sunglasses eyewear
turban headgear
3
mask face
sunglasses face
makeup face
*/

#include <vector>
#include <map>
#include <iostream>


int main()
{
    int inum;
    std::cin >> inum;
    std::map<std::string, std::vector<std::string> > imap;
    int re;
    for(int i =0; i < inum; ++i)
    {
        imap.clear();
        std::cin >> re;
        std::string a;
        std::string b;
        std::vector<std::string> temp;
        for(int k = 0; k<re; ++k)
        {
            std::cin >> a >> b;
            imap[b].push_back(a);
        }

        int an=1;
        for(std::map<std::string, std::vector<std::string> >::iterator it = imap.begin();
        it != imap.end(); ++it)
        {
            an *= it->second.size()+1;
            // std::cout << it->first << " : ";
            // for(int j = 0; j < it->second.size(); ++j)
            // {
            //     std::cout << it->second[j] << " ";
            // }
            // std::cout << std::endl;
        }
        std::cout << an -1 << std::endl;
    }

}