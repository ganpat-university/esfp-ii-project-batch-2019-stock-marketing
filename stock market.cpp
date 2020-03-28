#include <iostream>
using namespace std;
class Stock
{
    public:
    int mX = 0;
	int mY = 0;
	int mZ = 0;
	int mQ = 0; // new
	int fX = 25;
	int fY = 50;
	int fZ = 75;
	int fQ = 150; // new
	int Total = 15000;
	
	void data()
	{
	    bool bValid(true);

	cout << "Stock Market Analysis";

	do {	
		cout << "\n\nToplam Para: " << Total << endl;
		cout << "\n   Stock name" << "       Price " << "   amount" << endl;
		cout << "----------------------------------------" << endl;
		cout << "   Kotak Mahindra (k)  |   " << fX << "   |   " << mX << "" << endl;
		cout << "   TCP            (t)  |   " << fY << "   |   " << mY << "" << endl;
		cout << "   ITC            (z)  |   " << fZ << "   |   " << mZ << "" << endl;
		cout << "   Microsoft      (m)  |   " << fQ << "  |   " << mQ << "" << endl; // new
		cout << "----------------------------------------" << endl;
		cout << "\nBuy (b)\nSell (s)\nEnd Day (e)\n\nSelect: " << endl;

		char bse_select;
		cin >> bse_select;

		if (bse_select == 'b') 
		{
			do {
				bValid = true;
				char buy_select;
				int buy_amount;
				cout << "\nBuy (k/t/z/m): ";
				cin >> buy_select;
				if (buy_select == 'k' && bse_select == 'b') 
				{
					cout << "\nBuy Amount: ";
					cin >> buy_amount;
					if (buy_amount * fX > Total)
					{
						cout << "Insufficiant Funds.";
					}					
					else 
					{
						mX = buy_amount + mX;
						Total = Total - (fX * buy_amount);
					}
				}
				else if (buy_select == 't' && bse_select == 'b') {
					cout << "\nBuy Amount: ";
					cin >> buy_amount;

					if (buy_amount * fY > Total)
						cout << "Insufficiant Funds.";

					else {
						mY = buy_amount + mY;
						Total = Total - (fY * buy_amount);
					}
				}

				else if (buy_select == 'z' && bse_select == 'b') {
					cout << "\nBuy Amount: ";
					cin >> buy_amount;

					if (buy_amount * fZ > Total)
						cout << "Insufficiant Funds.";

					else {
						mZ = buy_amount + mZ;
						Total = Total - (fZ * buy_amount);
					}
				}

				else if (buy_select == 'm' && bse_select == 'b') { // copy pasted this section from others
					cout << "\nBuy Amount: ";
					cin >> buy_amount;

					if (buy_amount * fQ > Total)
						cout << "Insufficiant Funds.";

					else {
						mQ = buy_amount + mQ;
						Total = Total - (fQ * buy_amount);
					}
				}

				else {
					cout << "Invalid Selection.";
					bValid = false;
				}
			} while (!bValid);
		}
		
		else if (bse_select == 's'){

			do {
				
				bValid = true;

				int sell_amount;
				char sell_select;

				cout << "\nSat (k/t/z/m): ";
				cin >> sell_select;

				if (sell_select == 'k' && bse_select == 's') {
					cout << "\nSell Amount: ";
					cin >> sell_amount;

					if (mX - sell_amount < 0)
						cout << "\nYou can't sell what you don't own.\n";
					else {
						
						mX = mX - sell_amount;
						Total = Total + (fX * sell_amount);
					}
				}

				else if (sell_select == 't' && bse_select == 's') {
					cout << "\nSell Amount: ";
					cin >> sell_amount;

					if (mY - sell_amount < 0)
						cout << "\nYou can't sell what you don't own.\n";
					else {
						
						mY = mY - sell_amount;
						Total = Total + (fY * sell_amount);
					}
				}

				else if (sell_select = 'z' && bse_select == 's') {
					cout << "\nSell Amount: ";
					cin >> sell_amount;

					if (mZ - sell_amount < 0)
						cout << "\nYou can't sell what you don't own.\n";
					else {
						
						mZ = mZ - sell_amount;
						Total = Total + (fZ * sell_amount);
					}
				}

				else if (sell_select = 'm' && bse_select == 's') { // copy pasted this section from others
					cout << "\nSell Amount: ";
					cin >> sell_amount;
					
					if (mQ - sell_amount < 0)
					{
						cout << "\nYou can't sell what you don't own.\n";
					}
					else {
						
						mQ = mQ - sell_amount;
						Total = Total + (fQ * sell_amount);
					}
				}

				else {
					cout << "Invalid Selection.";
					bValid = false;
				}
			} while (!bValid);
		}

		else if (bse_select == 'e') {

			cout << "\n\n\n\n\n\n   A New Day has begun!";

			if (fX >= 25) {

				int random;
				random = rand() % 20;

				fX = fX - random;
			}

			if (fX <= 25) {

				int random;
				random = rand() % 20;

				fX = fX + random;
			}

			if (fY >= 50) {

				int random;
				random = rand() % 50;

				fY = fY - random;
			}

			if (fY <= 50) {

				int random;
				random = rand() % 30;

				fY = fY + random;
			}

			if (fZ >= 75) {

				int random;
				random = rand() % 50;

				fZ = fZ - random;
			}

			if (fZ <= 75) {

				int random;
				random = rand() % 110;

				fZ = fZ + random;
			}

			if (fQ >= 150) { // again, copy pasted from others

				int random;
				random = rand() % 224;

				fQ = fQ + random;
			}

			if (fQ <= 150) {

				int random;
				random = rand() % 350;

				fQ = fQ + random;
			}
		}

		else
			cout << "Invalid Selection.";
	} while (Total < 25000);
	}
};
int main ()
{
	Stock s;
	s.data();
}