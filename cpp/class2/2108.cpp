/**
 * #2108
 * 통계학
 * 입력:
5
1
3
8
-2
2 
산술평균a : N개의 수들의 합을 N으로 나눈 값
중앙값b : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값 (n 홀수)
최빈값c : N개의 수들 중 가장 많이 나타나는 값
범위 d: N개의 수들 중 최댓값과 최솟값의 차이
*/
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
// #include <math>

void print_map(std::map<int, int>& m) {
    for (std::map<int, int>::iterator itr = m.begin(); itr != m.end(); ++itr) {
        std::cout << itr->first << " " << itr->second << "\n";
    }
}

bool scom(int a, int b) {
    if (a > b)
        return true;
    return false;
}
bool sscom(std::pair<int,int> a, std::pair<int,int> b) {
    if( a.second > b.second)
        return true;
    if (a.second == b.second)
    {
        if(a.first < b.first)
            return true;
    }
    return false;
}
int main() {
    int inum;
    std::cin >> inum;
    std::vector<int> ivec;
    std::map<int,int> imap;
    int temp;
    for(int i =0 ; i< inum; ++i) {
        std::cin >> temp;
        ivec.push_back(temp);
        imap[temp]++;
    }
    sort(ivec.begin(),ivec.end(), scom);
    // for(int i =0; i< ivec.size(); ++i) {
    //     std::cout << ivec[i] << " ";
    // }
    // std::cout << std::endl;
    int d = ivec[0] - ivec.back();
    int b = ivec[(inum/2)];
    // std::cout << b << std::endl;
    // std::cout << std::accumulate(ivec.begin(),ivec.end(),0)*pow(inum,-1) << std::endl;
    int a = round(std::accumulate(ivec.begin(),ivec.end(),0)*pow(inum,-1));
    // std::cout << a/inum << " " << d << std::endl;
    // std::cout << "--------" << std::endl;
    // print_map(imap);
    // std::cout << "a :" << a << std::endl;
    std::vector<std::pair<int,int> > iivec(imap.rbegin(),imap.rend());
    int ttemp = iivec[0].second;
    int c;
    // std::cout << "---s----" << std::endl;
    sort(iivec.begin(),iivec.end(),sscom);
    // for(int i =0; i< iivec.size(); ++i) {
    //     std::cout << iivec[i].first << " " << iivec[i].second << "|";
    // }
    // std::cout << "\n";
    if (iivec.size() == 1)
        c = iivec[0].first;
    else { 
        if (ttemp == iivec[1].second)
            c = iivec[1].first;
    }
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << d ;
    
    // sort(imap.begin(), imap.end(),sscom);

}
