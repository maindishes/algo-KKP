/**
 * 리모컨
 * 2023 - 02 - 17
 * 입력:
5457
3
6 7 8
*/
#include <iostream>
#include <algorithm>

bool broken[10]; 

int possible(int c)
{
	if (c == 0)
	{
        if (broken[0]) {
            return 0;
        } 
        else {
            return 1;
        }
    }
    int len = 0;
    while (c > 0)
    {
        if (broken[c % 10]) return 0;
        len += 1;
        c /= 10;
    }
    return len;
}

int main(void) {

	int N, M, temp; 
    std::cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		std::cin >> temp;
		broken[temp] = true;
	}
	int ch = std::max(100 - N, N - 100);
	if (N != 100)
	{
		for (int C = 0; C <= 1000000; ++C)
		{
			if (possible(C))
			{
				ch = std::min(ch, possible(C) + std::max(N - C, C - N));
			}
		}
	}

	std::cout << ch << "\n";

}

