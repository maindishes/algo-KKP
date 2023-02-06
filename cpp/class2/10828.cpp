// push X: 정수 X를 스택에 넣는 연산이다.
// pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
// size: 스택에 들어있는 정수의 개수를 출력한다.
// empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
// top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다

// 14
// push 1
// push 2
// top
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
// top

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
            int temp = mtop(my_vec);
            std::cout << temp << "\n";
            if( temp != -1 )            
                my_vec.pop_back();
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
    }
}