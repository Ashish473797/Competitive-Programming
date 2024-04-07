// https://leetcode.com/problems/reverse-string/description/ 

#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;
        int mid = s.size()/2;
        while(i < mid){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }