#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	//variables
	float dollars;
	float euro = ( 1 / 1.06 );	//euro
	float gbp = ( 1 / 1.21 );	//pound sterling
	float yuan = ( 1 / 0.14 );	//chinese yuan
	float yen = ( 1 / 0.0076 ); //japanese yen
	float won = ( 1 / 0.00078 ); //korean won
	float inrup = ( 1 / 0.012);	//indian rupee	
	float lari = ( 1 / 0.38 );	//georgian lari
	float zkor = ( 1 / 0.044 ); //czech koruna
	float nkor = ( 1 / 0.10);	//norwegian krone
	float ikor = ( 1 / 0.0070);	//icelandic króna
	float dkor = ( 1 / 0.14);	//danish krone
	float skor = ( 1 / 0.096);	//swedish krona
	float sriyal = ( 1 / 0.27 ); //saudi riyal
	float uaedihram = ( 1 / 0.27); //uae dihram
	float apeso = ( 1 / 0.0057); // argentine peso
	float cad = ( 1 / 0.73); // canadian dollars
	float aud = ( 1 / 0.67); // australian dollars
	float rub = ( 1 / 0.014); //russian ruble
	float bra = ( 1 / 0.19 ); //brazilian real
	float sfra = ( 1 / 1.08 ); // swiss franc
	float hkdl = ( 1 / 0.13); //hong kong dollar
	float wacfa = ( 1 / 0.0016); // West African CFA franc
	float lek = ( 1 / 0.0093); // Albanian Lek
	float afgh = ( 1 / 0.011); // Afghan Afghani
	float cpe = ( 1 / 0.042); //cuban peso
	
		
	
	/*******************************************************************/
	cout << "Type the amount of dollars you have in your bank account: ";
	cin >> dollars;
	
	cout << "--------------------------------";
	cout << " \n";
	cout << " \n";
	/*******************************************************************/
	
	cout << "Euros: "<< euro*dollars << endl;
	cout << "British Pounds: "<< gbp*dollars << endl;
	cout << "Chineses Yuan: "<< yuan*dollars << endl;
	cout << "Japanese Yen: "<< yen*dollars << endl;
	cout << "Korean Won: "<< won*dollars << endl;
	cout << "Indian Rupees: "<< inrup*dollars << endl;
	cout << "Czech Koruna: "<< zkor*dollars << endl;
	cout << "Norwegian Krone: "<< nkor*dollars << endl;
	cout << "Icelandic Krona: "<< ikor*dollars << endl;
	cout << "Danish Krone: "<< dkor*dollars << endl;
	cout << "Swedish Krona: "<< skor*dollars << endl;
	cout << "Saudi Riyal: "<< sriyal*dollars << endl;
	cout << "United Arab Emirates Dirham: "<< uaedihram*dollars << endl;
	cout << "Argentine Peso: "<< apeso*dollars << endl;
	cout << "Canadian Dollars: "<< cad*dollars << endl;
	cout << "Australian Dollars: "<< aud*dollars << endl;
	cout << "Russian Rubles: "<< rub*dollars << endl;
	cout << "Brazilian Real: "<< bra*dollars << endl;
	cout << "Swiss Francs: "<< sfra*dollars << endl;
	cout << "Hong Kong Dollars: "<< hkdl*dollars << endl;
	cout << "West African CFA francs: "<< wacfa*dollars << endl;	
	cout << "Albanian Leks: "<< lek*dollars << endl;
	cout << "Afghan Afghani: "<< afgh*dollars << endl;
	cout << "Cuban Pesos: "<< cpe*dollars << endl;


	return 0;
}
