#include <vector>
#include <iostream>
#include <map>


int main() {
    int inum1;
	std::cin >> inum1;
	std::vector<int> n_list;
    std::map<int,int> n_map;

	for (int i = 0; i<inum1; ++i) {
		int temp;
		std::cin >> temp;
		n_list.push_back(temp);
        n_map[temp]=1;
	}
	// int max_ele = *max_element(n_list.begin(),n_list.end());
	// int min_ele = *min_element(n_list.begin(),n_list.end());
    int inum2;
	std::cin >> inum2;
	std::vector<int> c_list;

	for (int i = 0; i<inum2; ++i) {
		int temp;
		std::cin >> temp;
		c_list.push_back(temp);
	}
    for(int i =0; i<inum2; ++i){
        if(n_map.find(c_list[i]) != n_map.end())
            std::cout << 1 <<"\n";
        else
            std::cout << 0 << "\n";
    }
}
