/* ************************************************************************
> File Name:     537.复数乘法.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  五  2/25 18:28:15 2022
> Description:   
 ************************************************************************/

class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int t1 = 0; //实部
        int t2 = 0;
        int c1 = 0; //虚部
        int c2 = 0;
        int n1_i = 0;
        int n2_i = 0;
        bool is_positive = true;

        //----num1实部
        if (num1[n1_i] == '-') {
            is_positive = false;
            ++n1_i;
        }
        while (n1_i < num1.size() && num1[n1_i] != '+'){
            t1 = 10 * t1 + (num1[n1_i] - '0');
            ++n1_i;
        }
        t1 = is_positive ? t1 : 0-t1;
        is_positive = true;
        ++n1_i;

        //----num1虚步
        if (num1[n1_i] == '-') {
            is_positive = false;
            ++n1_i;
        }
        while (n1_i < num1.size() && num1[n1_i] != 'i') {
            c1 = 10 * c1 + (num1[n1_i] - '0');
            ++n1_i;
        }
        c1 = is_positive ? c1 : 0-c1;
        is_positive = true;

        //----num2实部
        if (num2[n2_i] == '-') {
            is_positive = false;
            n2_i++;
        }
        while (n2_i < num2.size() && num2[n2_i] != '+'){
            t2 = 10 * t2 + (num2[n2_i] - '0');
            ++n2_i;
        }

        t2 = is_positive ? t2 : 0-t2;
        is_positive = true;
        ++n2_i;

        //----num2虚部
        if (num2[n2_i] == '-') {
            is_positive = false;
            n2_i++;
        }
        while (n2_i < num2.size() && num2[n2_i] != 'i') {
            c2 = 10 * c2 + (num2[n2_i] - '0');
            ++n2_i;
        }
        c2 = is_positive ? c2 : 0-c2;
        return to_string(t1*t2 - c1*c2) + '+' + to_string(t1*c2 + t2*c1) + 'i';
    }
};
