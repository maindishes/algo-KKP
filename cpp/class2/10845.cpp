// push X: 정수 X를 큐에 넣는 연산이다.
// pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
// size: 큐에 들어있는 정수의 개수를 출력한다.
// empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
// front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
// back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

// 15
// push 1
// push 2
// front
// back
// size
// empty
// pop
// pop
// pop
// size
// empty
// pop
// push 3
// empty
// front

#include <iostream>
#include <vector>


int mtop(std::vector<int> &v) {
    if(v.size() != 0)
    {
        // std::cout << v[v.size()-1] << "\n";
        return(v[v.size()-1]);
    }
    else 
        return -1;
}
int mfront(std::vector<int> &v) {
    if (mtop(v) == -1)
        return -1;
    else
        return(v[0]);
}
int main()
{
    int num;
    std::cin >> num;
    std::string com;
    std::vector<int> my_vec;
    int inum;
    
    for(int i =0; i< num; ++i) {
        std::cin >> com;
        if(com == "push")
        {
            std::cin >> inum;
            my_vec.push_back(inum);
        }
        if (com == "top") {
            std::cout << mtop(my_vec) << "\n";
        }
        if( com == "pop") {
            int temp = mfront(my_vec);
            std::cout << temp << "\n";
            if( temp != -1 )            
                my_vec.erase(my_vec.begin()+0);
        }
        if( com == "size") {
            std::cout << my_vec.size() << "\n";
        }
        if(com == "empty") {
            if(my_vec.size() != 0)
                std::cout << 0 << std::endl;
            else
                std::cout << 1 << std::endl;
        }
        if( com == "front")
        {
            if (mtop(my_vec) == -1)
                std::cout << -1 << "\n";
            else
                std::cout << my_vec[0] << "\n";
        }
        if (com == "back")
        {
            std::cout << mtop(my_vec) << "\n";
        }
    }
}