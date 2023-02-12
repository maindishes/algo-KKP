#include <iostream>

int main() {
int inum;
std::cin >> inum;
int count = 0;
int a, b;

div_t k = std::div(inum, 5);
a = k.quot;
b = k.rem;

while (1) {
    int num1 = 5 * a + b;
    if (a == 0 && b % 3 != 0) {
        count = -1;
        break;
    }
    if (b == 0) {
        count += a;
        break;
    } else if (b % 3 == 0) {
        count += a;
        count += b / 3;
        break;
    } else if (b % 3 != 0) {
        a--;
        b += 5;
    }
}

std::cout << count << std::endl;
return 0;
}