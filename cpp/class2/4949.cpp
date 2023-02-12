#include <iostream>
#include <stack>

int main() {
    std::stack<char> is;
    std::string temp="";
    while(1) {
        getline(std::cin, temp);
        if(temp.length() == 1 && temp[0] == '.')
            break;
        std::cout << temp << std::endl; 
        for(int i=0; i< temp.length(); ++i) {

        }   
    }
}
