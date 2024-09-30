#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>
using namespace std;



int main()
{
	double x;
	double y;

	double R;

	cout << "\nInput: R = "; cin >> R;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
		{
			cout << fixed;
			cout << endl << "---------";
			cout << endl << setw(6) << "Shot #" << i + 1 << "|";
			cout << endl << "---------";
			cout << endl << "Input:  x = "; cin >> x; 
			cout << endl << "Input:  y = "; cin >> y; 
			if ((x + R) * (x + R) + y * y <= R * R && x >= -R && y >= 0 ||
				(x - R) * (x - R) + y * y <= R * R && x <= R && y <= 0)
			{
				cout << endl << "------------------------------";
				cout << endl << "| Yes you HIT the target!" << setw(6) << "|";
				cout << endl << "------------------------------";
			}
			else
			{
				cout << endl << "---------------------";
				cout << endl << "| No you MISSED!" << setw(6) << "|";
				cout << endl << "---------------------";
			}
				

		}
		else 
		{
			x = R + rand() * (-R - R) / RAND_MAX;
			y = R + rand() * (-R - R) / RAND_MAX;

			cout << endl << "---------";
			cout << endl << setw(6) << "Shot #" << i + 1 << "|";
			cout << endl << "---------";
			cout << endl << "-------------------------";
			cout << endl << "|Coordinates: x = " << x << " y = " << y << " |";
			if ((x + R) * (x + R) + y * y <= R * R && x >= -R && y >= 0 ||
				(x - R) * (x - R) + y * y <= R * R && x <= R && y <= 0)
				cout << "\nYes your computer HIT the target!";
			else
				cout << "\nNo your computer MISSED;";
		}

	}


	return 0;

}