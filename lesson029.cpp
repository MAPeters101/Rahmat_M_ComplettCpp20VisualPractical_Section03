#include <iostream>

using namespace std;

int main() {
	int SpeedLimitation{ 150 };
	double Speed{ 250.0 };
	cout << "Double Value: " << Speed << endl;
	cout << "Int Value: " << SpeedLimitation << endl;

	Speed = SpeedLimitation;
	cout << "Double Value: " << Speed << endl;
	cout << "Int Value: " << SpeedLimitation << endl;
	cout << "------------------\n\n";

	Speed = 180.5;
	cout << "Double Value: " << Speed << endl;
	SpeedLimitation = static_cast<int>(Speed);
	cout << "Int Value: " << SpeedLimitation << endl;




	return 0;
}




