/**
 * 이중 우선순위 큐
 * 2023 3 11
2
7
I 16
I -5643
D -1
D 1
D 1
I 123
D -1
9
I -45
I 653
D 1
I -642
I 45
I 97
D 1
D -1
I 333
*/

#include <iostream>
#include <queue>
#include <string>
#include <set>
int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int inum;
    std::cin >> inum;

    for(int i =0; i<inum ; ++ i)
    {
        int it;
        std::cin >> it;
        std::string A;
        int B;
        // int Icnt=0;
        // int Dcnt = 0;
        std::multiset<int> S;
        // std::priority_queue<int> Q1;
        // std::priority_queue<int,std::vector<int>, std::greater<int> > Q2;
        for(int idx = 0; idx<it; ++idx)
        {
            std::cin >> A >> B;
            if(A == "I")
            {
                // ++Icnt;
                // Q1.push(B);
                // Q2.push(B);
                S.insert(B);
                // std::cout << "Q1 :" << Q1.top() << std::endl;
                // std::cout <<"Q2 : "<< Q2.top() << std::endl;
            }
            if(A == "D")
            {
                // ++Dcnt;
                if(B == 1)
                {
                    // Q1temp = Q1.top();
                    // if(Q1.top() == Q2temp)
                    //     break;
                    if(!S.empty())
                    {
                        std::multiset<int>::iterator it = S.end();
                        --it;
                        S.erase(it);
                        // Q1.pop();
                    }
                }
                if (B == -1)
                {
                    // Q2temp = Q2.top();
                    // if(Q1.top() == Q2temp)
                    //     break;
                    if(!S.empty())
                    {
                        S.erase(S.begin());
                        // Q2.pop();
                    }
                }
            }
        }
    
        // if( Icnt <= Dcnt)
        //     std::cout << "EMPTY" << "\n";
        // else if( Icnt - Dcnt == 1) {
        //     if(Q1.size() <= Q2.size())
        //         std::cout << Q1.top() << " " << Q1.top() << "\n";
        //     else
        //         std::cout << Q2.top() << " " << Q2.top() << "\n";
        // }
        // else
        //     std::cout << Q1.top() << " " << Q2.top() << "\n";
        if(S.empty())
             std::cout << "EMPTY" << "\n";
        else {
            std::multiset<int>::iterator it = S.end();
            --it;
            std::cout << *it << " " << *S.begin() << '\n';
        }
    }
    

}