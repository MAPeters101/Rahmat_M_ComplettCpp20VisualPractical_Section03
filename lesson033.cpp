#include <iostream>

using namespace std;

int main() {
	int LocalToMain{ 2342 };
	cout << LocalToMain << endl;

	//int LocalToMain{ 11 };

	{
		int LocalToInsideMain{ 23426456 };
		cout << LocalToInsideMain << endl;
		cout << LocalToMain << endl;
		int LocalToMain{ 11 };
		cout << LocalToMain << endl;

	}
	//cout << LocalToInsideMain << endl;
	cout << LocalToMain << endl;

	return 0;
}

void Example() {
	//cout << LocalToMain << endl;
}

