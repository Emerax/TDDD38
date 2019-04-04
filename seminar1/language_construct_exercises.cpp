#include <iostream>
using namespace std;

// void exercise_two(){
// 	//Write declarations for the following variables:
// 	// 1. Pointer to char
// 	char *c_pointer{};
//
// 	// 2. Array with 10 int.
// 	int array[10]{};
//
// 	// 3. Pointer to an array with 3 elements of type std::string.
// 	string (*string_array)[3]{};
//
// 	// 4. Pointer to a pointer to char.
// 	char **pointer_pointer{};
//
// 	// 5. Constant int.
// 	int const INT_CONST{};
//
// 	// 6. Pointer to a constant int
// 	int const *const_int_pointer{};
//
// 	// 7. Constant pointer to int.
// 	int* const const_pointer{};
// }

// void excersize_four(){
// 	int a (int i);
// 	cout <<"a: " << a << endl;
// 	// a becomes a function declaration, return type int, one int parameter named i.
//
// 	int b(int);
// 	cout << "b: " << b << endl;
// 	// Same result as a, only the int parameter has no name.
//
// 	int c(int (i));
// 	cout << "c: " << c << endl;
// 	//Same result again, this time the parameter name has redundant parenhteses.
//
// 	int d(int (*i)());
// 	cout << "d: " << d << endl;
// 	//Declares a function returning int, which takes i as parameter, i being a pointer to a function returning int, taking no parameters
// 	//Cannot be printed for some reason;
//
// 	int e(int* const);
// 	cout << "e: " << e << endl;
// 	//Declares a function e returning int, which takes a nameless constant int-pointer as input.
//
// 	//int f const();
// 	cout << "f invalid" << endl;
// 	//Invalid
//
// 	int g(int i());
// 	cout << "g: " << g << endl;
// 	// Function returning int, taking function returning int as param?
//
// 	int h(int const* (*)());
// 	cout << "h: " << h << endl;
// 	//Function with nameless parameter being a pointer to a function that returns a pointer to a constant int
//
// 	int i(int ());
// 	cout << "i: " << i << endl;
// 	//Same as g, nameless param.
//
// 	int j(int (*)(int));
// 	cout << "j: " << j << endl;
// 	//Function taking a nameless function pointer to an int-function taking an int
//
// 	//int k(int (*i)(int)[10]);
// 	cout << "k invalid" <<  endl;
// 	//Invalid
//
// 	int l(int (*i[10])());
// 	cout << "l: " << l << endl;
// 	//function taking array of 10 pointers to int functions taking no params. (????).
//
// 	int m(int (&(*i)())[10]);
// 	cout << "m: " << m << endl;
// 	//???Valid???
// }

void exercise_seven(){
	int i1{}; //Default int is 0;
	cout << "i1: " << i1 << endl;

	int i2(2); //int constructor with 2 as input, sets to 2.
	cout << "i2: " << i2 << endl;

	int i3 = 1; //Copy-initialization to 1.
	cout << "i3: " << i3 << endl;

	 int i4 = {}; //Copy to brace initialization, default 0.
	 cout << "i4: " << i4 << endl;
}


int main(){
	exercise_seven();
}
