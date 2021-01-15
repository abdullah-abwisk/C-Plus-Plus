#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream MyExcelFile;
	MyExcelFile.open("C:\\test.csv");

	MyExcelFile << "First Name, Last Name, Middle Initial" << endl;
	MyExcelFile << "Michael, Jackson, B." << endl;
	MyExcelFile.close();
	return 0;
}
