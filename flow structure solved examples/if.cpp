//cpp program to chech if an alphabet is capital vowel or small 
#include<iostream>
using namespace std;
int main(){
	char s_vowel,c_vowel,alpha;
	s_vowel = 'a','e','i,','o','u';
	c_vowel='A','E','I','O','U';
	cout<<"please enter the character\n";
	cin>>alpha;
	if(alpha=s_vowel){
		cout<<"you entered a vowel\n";
	}
	if(alpha!=c_vowel){
		cout<<"you entered a capital letter vowel";
	}
	
	return 0;
}
