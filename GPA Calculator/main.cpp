#include<bits/stdc++.h>
using namespace std;
//====================== GBA Calculator =======================//
void gpa_calc(){
	cout<<"Hello My Friend :) \n";
	cout<<"How are you ? :)\n";
	cout<<"Please Enter Your Number Of Courses. \n";
	int n;cin>>n;
	cout<<"Very Good. \n";
		int arr[n];
		string s[n];
	for (int i = 0; i < n; i++)
	{
		cout<<"Please Enter Your Credit Hours for "<<i+1<<" Course.\n";
		cin>>arr[i];
		cout<<"Please Enter Your Grade for "<<i+1<<" Course.  ( Select A+ A A- B+ B B- C+ C C- D+ D F ).\n";
		cin>>s[i];
	}
	float cridArr[n];
	for (int i = 0; i < n; i++)
	{
		if(s[i]=="A+" || s[i]=="A"){
			cridArr[i]=4;
		}else if(s[i]=="A-"){
			cridArr[i]=3.7;
		}else if(s[i]=="B+"){
			cridArr[i]=3.3;
		}else if(s[i]=="B"){
			cridArr[i]=3;
		}else if(s[i]=="B-"){
			cridArr[i]=2.7;
		}else if(s[i]=="C+"){
			cridArr[i]=2.3;
		}else if(s[i]=="C"){
			cridArr[i]=2;
		}else if(s[i]=="C-"){
			cridArr[i]=1.7;
		}else if(s[i]=="D+"){
			cridArr[i]=1.3;
		}else if(s[i]=="D"){
			cridArr[i]=1;
		}else{
			cridArr[i]=0;
		}
	}
	float points=0;
		int sumHours=0;
	for (int i = 0; i < n; i++)
	{
		points=points+arr[i]*cridArr[i];
		sumHours=sumHours+arr[i];
	}
	float result;
	result=points/sumHours;
	cout<<"My Friend, Your GPA is "<<result<<". \n";
}
int main(){
	gpa_calc();
	return 0;
}
