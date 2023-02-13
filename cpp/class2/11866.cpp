/**
 * 요세푸스0 문제 
 * 2023 - 02 - 13
 * 입력:
 7 3
*/

#include <iostream>
#include <vector>
#include <deque>
int main() {
    int n,k;
    std::cin >> n >> k;
    std::vector<int> my_vec;
    std::deque<int> iq;
    int f =0;
    int r = 0;
    for(int i=0; i<n; ++i) {
        iq.push_back(1+i);
    }
    int a,b;
    std::cout << "<";
    while(1) {
        int temp;
        // if(iq.size() == k-1) {
        //     for(int i =0; i<k-2; ++i) {
        //         if (iq.size() == 2) {
        //             for(int k =0; k<2; ++k)
        //                 std::cout << iq[k%2] << ">";
        //             break;
        //         }
        //         std::cout << iq[(i)%(k-1)] << ", ";
        //         temp = iq.front();
        //         iq.pop_front();
        //         iq.push_back(temp);
        //     }
        //     std::cout << ">";
        //     break;
        // }
        if(iq.size() == 1)
        {
            std::cout << iq[0];
            std::cout << ">";
            break;
        }
        for(int i =0; i<k-1; ++i) {
            // if(iq.size() == 3)
            //     break;
            a = iq.front();
            iq.push_back(a);
            iq.pop_front();
        }
        b = iq.front();
        iq.pop_front();
        std::cout << b << ", ";
    }
    // std::cout << ">" << std::endl;
}

