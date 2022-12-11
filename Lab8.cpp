#include <iostream>

int main() {
	int p;
	int value = 1234567;
	for (int i = 0; i < sizeof(int); i++) {
		p = *(((unsigned char*)&value) + i);
		std::cout << p << " ";
	}
}