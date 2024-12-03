#include <iostream>

using namespace std;

const double PI{ 3.14 };

void Example() {
	//cout << LocalToMain << endl;
	cout << PI << endl;
}

/*
int main() {
	int LocalToMain{ 2342 };
	cout << LocalToMain << endl;
	cout << PI << endl;

	//int LocalToMain{ 11 };

	{
		int LocalToInsideMain{ 23426456 };
		cout << LocalToInsideMain << endl;
		cout << LocalToMain << endl;
		int LocalToMain{ 11 };
		cout << LocalToMain << endl;
		cout << PI << endl;

	}
	//cout << LocalToInsideMain << endl;
	cout << LocalToMain << endl;

	Example();

	return 0;
}
*/

