#include <map>
#include <iostream>
#include <string>
#include <queue>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::priority_queue<int, std::vector<int>, std::greater<int> > first;
	std::priority_queue<int> second;
	int iter;
	std::cin >> iter;
	int temp;
	for(int i = 0; i<iter; i++)
	{
			std::cin >> temp;
			first.push(temp);
	}
	for(int i =0; i< iter; i++)
	{
			std::cin >> temp;
			second.push(temp);
	}
	long long res = 0;
	for(int i =0; i< iter; i++)
	{
			res += first.top() * second.top();
			first.pop();
			second.pop();
	}
	std::cout << res << std::endl;
}