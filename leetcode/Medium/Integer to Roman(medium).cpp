#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string intToRoman(int num)
    {
        string s = "";
        if (num / 1 != 0)
        {

            int i = num / 1000;
            for (int o = 1; o <= i; o++)
                s += "M";           
            num = num % 1000;
            int o = num / 500;
            for (int k = 1; k <= o; k++)
            {
                if (num / 900 == 1)
                {
                    s += "CM";
                    num = num - 900;
                    break;
                }
                s += "D";
            }
            num = num % 500;
            int f = num / 100;
            for (int i = 1; i <= f; i++)
            {
                if (num / 400 == 1)
                {
                    s += "CD";
                    num = num - 400;
                    break;
                }
                s += "C";
            }

            num = num % 100;
            int l = num / 50;
            for (int i = 1; i <= l; i++)
            {
                if (num / 90 == 1)
                {
                    s += "XC";
                    num = num - 90;
                    break;
                }
                s += "L";
            }
            num = num % 50;
            int u = num / 10;
            for (int i = 1; i <= u; i++)
            {
                if (u * 10 == 40)
                {
                    s += "XL";
                    break;
                }
                else
                    s += "X";
            }
            num = num % 10;
            int v = num / 5;
            for (int i = 1; i <= v; i++)
            {
                if (num == 9)
                {
                    s += "IX";
                    break;
                }
                else
                    s += "V";
            }
            if (num == 9)
                return s;
            else
            {
                num = num % 5;
                int g = num / 1;
                for (int i = 1; i <= g; i++)
                {
                    if (num == 4)
                    {
                        s += "IV";
                        break;
                    }
                    else
                        s += "I";
                }
            }
        }
        return s;
    }
};