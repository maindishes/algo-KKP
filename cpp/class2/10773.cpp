#include <vector>
#include <iostream>

int main() {
    int inum;
    std::cin >> inum;
    int temp;
    std::vector<int> my_vec;
    for(int i=0; i<inum; ++i) {
        std::cin >> temp;
        if(temp != 0)
            my_vec.push_back(temp);
        if(temp == 0)
        {
            if(my_vec.size() == 0)
                continue;
            else
                my_vec.pop_back();
        }
    }
    int res = 0;
    for(int i =0; i<my_vec.size(); ++i) {
        res += my_vec[i];
    }
    std::cout << res << std::endl;
}