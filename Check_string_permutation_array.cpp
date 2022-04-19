#include<conio.h>
#include<iostream>
#include<string>
#include <bits/stdc++.h> 
using namespace std;

bool permutation(string s1, string s2){
	
	int n1 = s1.length();
	int n2 = s2.length();

	if (n1 != n2)
    return false;

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	for (int i = 0; i < n1; i++)
	if (s1[i] != s2[i])
		return false;

	return true;
}

int main()
{
	string s1,s2 ;
	cout<<"Enter 2 string:"<<endl;
	cin>>s1>>s2;
	if (permutation(s1,s2))
	cout<<"They are permutation."<<endl;
	
	else
	cout<<"They are not permutation."<<endl;

	return 0;
}
