#include <iostream>
#include <string>
#include <format>

using namespace std;


int main() {
	string Name{ "John" };
	cout << Name << endl;
	cout << "-----------------------------\n\n";

	string NameM{ "Alice" };
	int Age{ 22 };
	cout << "My name is " << NameM << ", I am " << Age << " years old.\n\n";
	cout << "-----------------------------\n\n";

	string NameF{ "Finn" };
	int AgeF{ 28 };
	string FormattedText{ std::format("My Name is {} and I am {} years old.", NameF, AgeF) };
	cout << FormattedText << endl;
	cout << "-----------------------------\n\n";

	int X{ 32 };
	string FormattedString{ format("{:04}", X) };
	cout << FormattedString << endl;
	cout << "-----------------------------\n\n";

	double PI{ 3.14159265 };
	string FormattedDouble{ format("{:.2}", PI) };
	cout << FormattedDouble << endl;

	string FormattedDouble1{ format("{:.2f}", PI) };
	cout << FormattedDouble1 << endl;



	return 0;
}


