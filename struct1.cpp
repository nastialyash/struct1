

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Auto {
	double length;
	double klirens;
	double obem;
	string color;
	string type;
	int power;
	int diametr;
};
void show(Auto autob) {
	cout << "Length : " << autob.length << endl;
	cout << "Klirens : " << autob.klirens << endl;
	cout << "Obem : <" << autob.obem << endl;
	cout << "Color : " << autob.color << endl;
	cout << "Type : " << autob.type << endl;
	cout << "Power : " << autob.power << endl;
	cout << "Diametr : " << autob.diametr << endl;
}

void enterAuto(Auto &autob) {
	cout << "Enter length : " << autob.length;
	cin >> autob.length;
	cout << "Enter klirens : " << autob.klirens;
	cin >> autob.klirens;
	cout << "Enter obem : " << autob.obem;
	cin >> autob.obem;
	cout << "Enter color : " << autob.color;
	cin >> autob.color;
	cout << "Enter type : " << autob.type;
	cin >> autob.type;
	cout << "Enter power: " << autob.power;
	cin >> autob.power;
	cout << "Enter diametr : " << autob.diametr;
	cin >> autob.diametr;
	

}


int main()
{

	Auto myauto;
	show(myauto);
	enterAuto(myauto);

}