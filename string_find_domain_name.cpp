#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int i,firstdot=0,seconddot=0,k=0;
char ch[50],findword[50];
cout<<"Enter the string: ";cin.getline(ch,50);
for(i=0;i<=strlen(ch);i++)
{
	firstdot++;
	if(ch[i]=='.')
	break;
}
for(i=strlen(ch);i>=0;i--)
{
	seconddot++;
	if(ch[i]=='.')
	break;
}
for(i=firstdot;i<=strlen(ch)-seconddot;i++)
{
	findword[k]=ch[i];
	k++;	
}
cout<<"separate the domain name from string : "<<findword;
return 0;
}

