#include <string>
#include <iostream>
#include <vector>
int main() {
    int num;
    std::cin >> num;
    std::vector<std::string> ivec;
    std::string istring;
    for(int i=0; i<num; ++i) {
        std::cin >> istring;
        ivec.push_back(istring);
        int an = 0;
        for(int j =0; j<istring.length(); ++j) {
            if(istring[j] == ')')
                --an;
            if(istring[j] == '(')
                ++an;
            if(an < 0)
            {
                // std::cout << "NO" << std::endl;
                break;
            }    
        }
        if ( an != 0 )
        {
            std::cout << "NO" << std::endl;
        }
        if(an == 0)
            std::cout << "YES" << std::endl;
    }
}