/**
 * 잃어버린 괄호
 * 1541
input:
55-50+40
*/
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string istring;
    std::cin >> istring;
    std::string temp = "";
    std::vector<char> buho_vec;
    std::vector<int> num_vec;
    // temp = "0001";
    // stoi(temp);
    // std::cout << stoi(temp) << std::endl;
    for(int i =0; i<istring.length(); ++i)
    {
        if(istring[i]== '+' || istring[i] == '-')
        {
            buho_vec.push_back(istring[i]);
            num_vec.push_back(stoi(temp));
            temp.clear();
            continue;
        }
        temp += istring[i];
        if(i == istring.length()-1)
            num_vec.push_back(stoi(temp));
    }
    // for(int i=0; i< num_vec.size(); ++i) {
    //     std::cout << num_vec[i] << " " ;
    // }
    // std::cout << std::endl;
    // for(int i=0; i< buho_vec.size(); ++i) {
    //     std::cout << buho_vec[i] << " " ;
    // }
    // std::cout << std::endl;
    // std::cout << num_vec[1] << std::endl;
    // std::cout << buho_vec[0] << std::endl;
    // - 만나면 + 나오기 전까직 빼 
    int start = num_vec[0];
    bool flag = false;
    for(int i =0; i<buho_vec.size(); ++i)
    {
        if(buho_vec[i] == '+')
        {
            if(flag == true)
                start -= num_vec[i+1];
            if(flag == false)
                start += num_vec[i+1];
        }
        if(buho_vec[i] == '-') {
            start -= num_vec[i+1];
            flag = true;
        }
    }
    std::cout << start << std::endl;
}