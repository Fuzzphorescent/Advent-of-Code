#include <iostream>
#include <string>
using namespace std;

int main() {
	int great1 = 0, great2 = 0, great3 = 0, sum = 0;
    string tempstr;
    getline(cin, tempstr);
    while(cin) {
        if (tempstr == "") {
		if (sum > great1) {
            int temp1 = great1;
            int temp2 = great2;
            great1 = sum;
            great2 = temp1;
            great3 = temp2;
        }
		sum = 0;
	}
        else sum += stoi(tempstr);
        getline(cin, tempstr);
    }
    // if (sum > great1) {
    //     int temp1 = great1;
    //     int temp2 = great2;
    //     great1 = sum;
    //     great2 = temp1;
    //     great3 = temp2;
    // }
    cout << (great1 + great2 + great3);
    return 0;
}