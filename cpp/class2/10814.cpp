// 3
// 21 Junkyu
// 21 Dohyun
// 20 Sunyoung


// Q.인자 추가 안 하고 들어온 순으로 정렬 할수있는 방법이 있나?? 
// 일단은 map <pair<int, std::string> , int>
#include <iostream>
#include <vector>
#include <algorithm>

bool scom(std::pair<int, std::string> a, std::pair<int, std::string> b) {
    // std::cout << a.second << " " << b.second << "\n";
    
    if(a.first < b.first)
        return true;
    if ( a.first == b.first)
        return false;
    return false;
}

int main()
{
    int num;
    std::cin >> num;
    int age;
    std::string name;
    std::vector<std::pair<int, std::string> > ivec;
    for(int i=0; i<num; ++i) {
        std::cin >> age >> name;
        ivec.push_back(std::make_pair(age,name));
    }

    stable_sort(ivec.begin(), ivec.end(), scom);
    for (int i=0; i <num; ++i){
        std::cout << ivec[i].first <<" " << ivec[i].second << "\n";
    }

}