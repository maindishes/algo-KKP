/**
 * 설탕배달
 * 2739
 *  
*/
#include <vector>
#include <iostream>

// 3,5
// 18 // 18 15 
int main() {
    int target;
    std::cin >> target;
    int count;
    count = target / 5;
    if ((target % 5) %3 == 0)
        count += (target%5)/3;
    else if ((target%5)%3 != 0)
        count = -1;
    int cc;
    cc = target / 3;
    if (target %3 != 0)
        cc = -1;
    int res;
    res = count;
    if ((cc == -1)&& (count == -1) )
        res = -1;
    if ((count == -1) && (cc != -1))
        res = cc;

    std::cout << res << std::endl;
    std::cout << count << std::endl;
    
    
     
}