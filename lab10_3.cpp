#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int i=0;
    string text;
    double sum,po;
	ifstream source;
	ofstream dest;
	source.open("score.txt");
	dest.open("score_copy.txt");
		while(getline(source,text)){
		    sum+=atof(text.c_str());
		    i++;
		    po+=pow(atof(text.c_str()),2);
		    
	}
	source.close();
    dest.close();
    cout << "Number of data = "<<i<<"\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/i<<"\n";
    cout << "Standard deviation = "<< sqrt((po/i)-pow((sum/i),2));
}