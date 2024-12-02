#include <iostream>;

using namespace std;

int main() {
	int NumItem{ 25 };
	int PricePerItem{ 3 };
	int TotalCost;

	TotalCost = NumItem * PricePerItem;
	cout << "The total cost of " << NumItem << " items at $" << PricePerItem << " each is $" << TotalCost << "." << endl;

	int AmountPaid{ 100 };
	int Change;
	Change = AmountPaid - TotalCost;

	cout << "The amount paid was $" << AmountPaid << ", and the change due is $" << Change << "." << endl;
	return 0;
}


