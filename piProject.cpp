#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main(){
    
    int a = 100;
    int k = 0;
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
    double pi = 0.0;

    //Bailey-Borwein-Plouffe Formula
    while (k <= a){
        pi += ( (1.0/pow(16.0, k)) * ((4.0 / (8.0 * k + 1.0)) - (2.0 / (8.0 * k + 4.0)) - (1.0 / (8.0 * k + 5.0)) - (1.0 / (8.0 * k + 6.0))) );
        k++;
    }
   
    //File holds the double variable's maximum of pi
    ofstream ofMyFile;
    ofMyFile.open("pi.txt");
    ofMyFile << setprecision(50) << pi;
    ofMyFile.close();

    //Fetches held value
    ifstream ifMyFile("pi.txt");
    string line;
    getline(ifMyFile, line);
    
    //Iterates for the frequency of all numbers 0-9
    for (char i : line) {
        if (isdigit(i)) {
            if (i == '1') {
                one++;
            }
            if (i == '2') {
                two++;
            }
            if (i == '3') {
                three++;
            }           
            if (i == '4') {
                four++;
            }
            if (i == '5') {
                five++;
            }
            if (i == '6') {
                six++;
            }
            if (i == '7') {
                seven++;
            }
            if (i == '8') {
                eight++;
            }
            if (i == '9') {
                nine++;
            }
        }
    }
    
    //Print out frequency
    cout << "Total of 1s: " << one << endl;
    cout << "Total of 2s: " << two << endl;
    cout << "Total of 3s: " << three << endl;
    cout << "Total of 4s: " << four << endl;
    cout << "Total of 5s: " << five << endl;
    cout << "Total of 6s: " << six << endl;
    cout << "Total of 7s: " << seven << endl;
    cout << "Total of 8s: " << eight << endl;
    cout << "Total of 9s: " << nine << endl;

    return 0;
}