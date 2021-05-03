// lab6.4
#include <iostream>
#include <math.h>
#include <string>

using namespace std; 

template <typename T>
bool Ordered(T const* begin, T const* end) {
	bool asc = true, desc = true;
	if (begin == end) return true;
	end--;
	while (begin != end) {
		if (*begin < *(begin + 1)) desc = false;
		if (*begin > *(begin + 1)) asc = false;
		begin++;
	}
	return asc || desc;
}

int main() {
	int a[10] = { 1, 2, 4, 3, 5, 6, 7, 8, 9, 10 };
	cout << "int a[10] = { 1, 2, 4, 3, 5, 6, 7, 8, 9, 10 } Ordered(a, a + 10): " << Ordered(a, a + 10) << endl;
	int b[5] = { 10, 9, 7, 4, 1 };
	cout << "int b[5] = { 10, 9, 7, 4, 1 } Ordered(b, b + 5): " << Ordered(b, b + 5) << endl;
	double c[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.01 };
	cout << "double c[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.01 } Ordered(c, c + 10): " << Ordered(c, c + 10) << endl;
		
	return 0;
}
