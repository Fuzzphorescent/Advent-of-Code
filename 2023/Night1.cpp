#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    string S;
    while (getline(cin, S))
    {
        int num = 0, digit = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] >= 48 && S[i] <= 57)
            {
                num = int(S[i] - '0');
                break;
            }

            string sub = S.substr(i, 5);
            if (!(sub.find("one")))
            {
                num = 1;
                break;
            }
            if ((!(sub.find("two"))))
            {
                num = 2;
                break;
            }
            if ((!(sub.find("three"))))
            {
                num = 3;
                break;
            }
            if ((!(sub.find("four"))))
            {
                num = 4;
                break;
            }
            if ((!(sub.find("five"))))
            {
                num = 5;
                break;
            }
            if ((!(sub.find("six"))))
            {
                num = 6;
                break;
            }
            if ((!(sub.find("seven"))))
            {
                num = 7;
                break;
            }
            if ((!(sub.find("eight"))))
            {
                num = 8;
                break;
            }
            if ((!(sub.find("nine"))))
            {
                num = 9;
                break;
            }
        }

        reverse(S.begin(), S.end());

        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] >= 48 && S[i] <= 57)
            {
                num = num * 10 + (S[i] - '0');
                break;
            }

            string sub = S.substr(i, 5);
            if (!(sub.find("eno")))
            {
                digit = 1;
                break;
            }
            if ((!(sub.find("owt"))))
            {
                digit = 2;
                break;
            }
            if ((!(sub.find("eerht"))))
            {
                digit = 3;
                break;
            }
            if ((!(sub.find("ruof"))))
            {
                digit = 4;
                break;
            }
            if ((!(sub.find("evif"))))
            {
                digit = 5;
                break;
            }
            if ((!(sub.find("xis"))))
            {
                digit = 6;
                break;
            }
            if ((!(sub.find("neves"))))
            {
                digit = 7;
                break;
            }
            if ((!(sub.find("thgie"))))
            {
                digit = 8;
                break;
            }
            if ((!(sub.find("enin"))))
            {
                digit = 9;
                break;
            }
        }

        if (digit)
            num = num * 10 + digit;
        sum += num;
    }
    cout << sum;
}