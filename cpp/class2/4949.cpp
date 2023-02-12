#include <iostream>
#include <stack>

int main() {
    // std::stack<char> is;
    std::string temp="";
    while(1) {
        getline(std::cin, temp);
        if(temp[0] == '.')
            break;
        std::stack<char> is;
        bool res=true;
        // std::cout << temp << std::endl; 
        for(int i=0; i< temp.length(); ++i) {
            if(temp[i] == '[' || temp[i] == '(')
                is.push(temp[i]);
            else if(temp[i] == ')')
            {
                if(is.empty() || is.top() != '(')
                {   
                    res = false;
                    break;
                }
                is.pop();
            }
            else if (temp[i] == ']') {
                if(is.empty()||is.top()!='[') {
                    res = false;
                    break;
                }
                is.pop();
            }
        }
        if (!is.empty())
            res = false;
        if(res)
            std::cout << "yes" << std::endl;
        else
            std::cout << "no" << std::endl;
        // std::cout << is.size() << std::endl;
    }   
}
