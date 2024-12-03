#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;

int main() {
	int SizeOfVariable{ 42 };
	cout << "Size of the variable: " << sizeof(SizeOfVariable) << endl;
	cout << "Size of variable data type: " << sizeof(int) << endl;
	cout << "-------------------\n\n";

	cout << "Short Min: \t" << SHRT_MIN << endl;
	cout << "Short Max: \t" << SHRT_MAX << endl;
	cout << "Int Min: \t" << INT_MIN << endl;
	cout << "Int Max: \t" << INT_MAX << endl;
	cout << "Long Min: \t" << LONG_MIN << endl;
	cout << "Long Max: \t" << LONG_MAX << endl;
	cout << "LLong Min: \t" << LLONG_MIN << endl;
	cout << "LLong Max: \t" << LLONG_MAX << endl;
	cout << "Float Min: \t" << FLT_MIN << endl;
	cout << "Float Max: \t" << FLT_MAX << endl;
	cout << "Char Min: \t" << CHAR_MIN << endl;
	cout << "Char Max: \t" << CHAR_MAX << endl;





	return 0;
}

