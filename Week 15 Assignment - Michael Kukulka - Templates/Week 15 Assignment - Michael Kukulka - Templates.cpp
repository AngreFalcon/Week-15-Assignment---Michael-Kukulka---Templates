// Michael Kukulka
// CIS 1202 N01
// December 06, 2024

#include <iostream>

template<typename T>
T half(T num);
int half(int num);

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	std::cout << half(a) << "\n";
	std::cout << half(b) << "\n";
	std::cout << half(c) << "\n";

	return EXIT_SUCCESS;
}

template<typename T>
T half(T num) {
	return num / 2;
}

int half(int num) {
	return static_cast<int>(round(static_cast<double>(num) / 2));
}