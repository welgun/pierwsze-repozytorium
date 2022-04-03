#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string JD;
    string line;
    ofstream plik;
    plik.open("folder.txt");
    plik<<"JD";
plik<<"franek \n";
plik<<"pavlovsky"<<endl;
plik<<"JD \n";
plik.close();
return 0;
}
