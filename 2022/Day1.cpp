#include <iostream>
#include<string>
using namespace std;

int main() {
    int greatest = 0, sum = 0;
    string tempstr;
    getline(cin, tempstr);
    while(cin) {
        if (tempstr == "") {
		if (sum > greatest) greatest = sum;
		sum = 0;
	}
        else sum += stoi(tempstr);
        getline(cin, tempstr);
    }
    if (sum > greatest) greatest = sum;
    cout<<greatest;
    return 0;
}

