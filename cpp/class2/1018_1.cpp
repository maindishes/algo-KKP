#include <bits/stdc++.h>

#include <iostream>
#include <vector>


int row, col;
std::string str1 = "WBWBWBWB";
std::string str2 = "BWBWBWBW";

int diff(std::vector<string> temp_list) {
    int cnt = 0;
    for (int i = 0; i < temp_list.size(); i++) {
        if ((i + 1) % 2 != 0) {
            for (int j = 0; j < temp_list[i].size(); j++) {
                if (temp_list[i][j] != str1[j]) {
                    cnt++;
                }
            }
        }
        if ((i + 1) % 2 == 0) {
            for (int j = 0; j < temp_list[i].size(); j++) {
                if (temp_list[i][j] != str2[j]) {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int diff2(std::vector<string> temp_list) {
    int cnt = 0;
    for (int i = 0; i < temp_list.size(); i++) {
        if ((i + 1) % 2 != 0) {
            for (int j = 0; j < temp_list[i].size(); j++) {
                if (temp_list[i][j] != str2[j]) {
                    cnt++;
                }
            }
        }
        if ((i + 1) % 2 == 0) {
            for (int j = 0; j < temp_list[i].size(); j++) {
                if (temp_list[i][j] != str1[j]) {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main() {
    std::cin >> row >> col;
    std::vector<std::string> arr;
    for (int i = 0; i < row; i++) {
        std::string tstr;
        std::cin >> tstr;
        arr.push_back(tstr);
    }

    std::vector<std::vector<std::string>> temp_arr2;
    for (int k = 0; k <= row - 8; k++) {
        std::vector<std::string> temp_arr;
        for (int i = k; i < 8 + k; i++) {
            temp_arr.push_back(arr[i]);
        }
        temp_arr2.push_back(temp_arr);
    }

    std::vector<int> an_list;
    for (int k = 0; k <= row - 8; k++) {
        std::vector<std::string> arr = temp_arr2[k];
        for (int a = 0; a <= col - 8; a++) {
            std::vector<std::string> temp_list;
            for (int i = 0; i < 8; i++) {
                string temp = arr[i].substr(a, 8);
                temp_list.push_back(temp);
            }
            int aa = diff(temp_list);
            int bb = diff2(temp_list);
            an_list.push_back(aa);
            an_list.push_back(bb);
        }
    }
    sort(an_list.begin(),an_list.end());
    std::cout << an_list[0] << std::endl;
}
