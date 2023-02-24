/**
 * 팩토리얼 0의 개수
 * 1676 
 * 2023 2 24
 * */

 #include <iostream>
 #include <vector>


 int main()
 {
    int inum;
    std::cin >> inum;
    // unsigned long long tar = 1 ;
    // for(int i=0; i<inum; ++i)
    // {
    //     tar *= (inum-i);
    // }
    // std::cout << tar << std::endl;
    // std::string start = std::to_string(tar);
    int temp = 0;
    int cnt2 = 0;
    int cnt5 = 0;
    for(int i =1; i<inum-1; ++i)
    {
        temp = i;
        while(temp % 2 == 0)
        {
            temp /= 2;
            ++cnt2;
        }
        while(temp %5 == 0)
        {
            temp /= 5;
            ++cnt5;
        }
    }
    int an = std::min(cnt2,cnt5);
    std::cout << an << std::endl;
 }