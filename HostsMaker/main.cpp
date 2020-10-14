#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string ipgtps;
	cout << "Please input your IP GTPS: ";

	getline(cin, ipgtps);
	ofstream file("hosts.txt");
	file << ipgtps + " growtopia1.com\n" + ipgtps + " growtopia2.com";
	file.close();
	cout << "hosts.txt has been Created!\n";
	system("pause");
}