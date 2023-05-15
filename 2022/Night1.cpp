#include <iostream>
#include <string>
using namespace std;

int main() {
	int great1 = 0, great2 = 0, great3 = 0, sum = 0;
    string tempstr;
    getline(cin, tempstr);

    while(cin) {
        if (tempstr == "") {
            if (sum > great3) {
                if (sum > great1) {
                    int temp1 = great1;
                    int temp2 = great2;
                    great1 = sum;
                    great2 = temp1;
                    great3 = temp2;
                }

                else if (sum > great2) {
                    int temp = great2;
                    great2 = sum;
                    great3 = temp;
                }

                else great3 = sum;
            }
		    sum = 0;
	    }
        else sum += stoi(tempstr);
        getline(cin, tempstr);
    }

    if (sum > great3) {
                if (sum > great1) {
                    int temp1 = great1;
                    int temp2 = great2;
                    great1 = sum;
                    great2 = temp1;
                    great3 = temp2;
                }

                else if (sum > great2) {
                    int temp = great2;
                    great2 = sum;
                    great3 = temp;
                }

                else great3 = sum;
            }

    // cout << great1 << "\n" + great2 << "\n" << great3;
    cout << (great1 + great2 + great3);
    return 0;
}