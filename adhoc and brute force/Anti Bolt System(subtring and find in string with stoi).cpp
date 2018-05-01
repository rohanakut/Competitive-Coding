// Sources: http://www.cplusplus.com/reference/string/string/find/
//	https://stackoverflow.com/questions/2498119/how-do-i-get-a-part-of-the-a-string-in-c
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	string str;
	cin>>t;
	getline(cin,str);
	while(t--)
	{
		int num1,num2,num3;
		string str1,str2,str3;
		getline(cin,str);
		getline(cin,str);
		size_t pos1,pos2;
		pos1 = str.find('+');
		str1 = str.substr(0,pos1);
		//cout<<str1<<endl;
		pos2 = str.find('=');
		str2 = str.substr(pos1+1,pos2-pos1-1);
		//cout<<str2<<" "<<pos2<<" "<<pos1<<endl;
		str3 = str.substr(pos2+1);
		//cout<<str3<<endl;
		pos1 = str1.find("machula");
		if(pos1!=string::npos)//function returns string::npos
		{
			num2 = stoi(str2);
			num3 = stoi(str3);
			num1 = num3 - num2;
			
		}
		else if(str2.find("machula")!=string::npos)
		{
			num1 = stoi(str1);
			num3 = stoi(str3);
			num2 = num3 - num1;
		}
		else if(str3.find("machula")!=string::npos)
		{
			num1 = stoi(str1);
			num2 = stoi(str2);
			num3 = num1 + num2;
		}
		//cout<<num1<<" "<<num2<<" "<<num3<<" ";
		cout<<num1<<" + "<<num2<<" = "<<num3<<endl;
		//cout<<str<<endl;
	}
	
	
	// your code goes here
	return 0;
}