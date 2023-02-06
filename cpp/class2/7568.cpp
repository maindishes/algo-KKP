// 5
// 55 185
// 58 183
// 88 186
// 60 175
// 46 155

#include <iostream>
#include <vector>
#include <set>

int diff(std::pair<int,int> a, std::pair<int,int> b) {
    if(a.first > b.first)
    {
        if(a.second > b.second)
            return 1;
    }
    if(a.first < b.first)
    {
        if( a.second < b.second)
            return 0;
    }
    return -1;
}

int main() {
    int num;
    std::cin >> num;
    int m,k;
    int count;
    std::vector<std::pair<int,int> > ivec;
    std::vector<int> res;
    std::vector<int> rres;
    for (int i =0; i<num; ++i) {
        res.push_back(0);
    }
    for (int i=0; i<num; ++i) {
        std::cin >> m >> k;
        ivec.push_back(std::make_pair(m,k));
    }
    for( int i =0; i< num; ++i) {
        count = 0;
        for(int j = 0; j<num; ++j)
        {
            if (i == j)
                continue;
            // std::cout << i << " " << j << std::endl; 
            // std::cout << diff(ivec[i],ivec[j]) << std::endl;
            if(diff(ivec[i],ivec[j]) == 0)
            {
                res[i] += 1;
                count += 1;
            }
        }
        // res[i] = count; 
        rres.push_back(count);  
    }
    
    // for (int i =0; i<num; ++i) {
    //     rres.push_back(0);
    // }
    // for(int i =0; i< num; ++i) {
    //     for (int j =0; j<num; ++j) {
    //         if (i == j)
    //             continue;
    //         if(res[i] < res[j])
    //             rres[i]+=1;
    //     }
    //     // std::cout << res[i];
    // }
    // // std::cout << std::endl;

    for (int i=0; i<num; ++i) {
        std::cout << rres[i] + 1 << " ";
    }
    std::cout << std::endl;
}