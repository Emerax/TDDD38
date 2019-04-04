#include <iostream>
using namespace std;


int const* get() {
	return new int{5};
}

int main() {
	int const* const x{get()};
	cout << x << endl;
	delete x;
}
