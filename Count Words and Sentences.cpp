#include<iostream>
using namespace std;
int main()
{
	char arr[50];
	int word_count=0,i=0,sentence_count=0;
	cin.getline(arr,50);
	while(1)
	{
		if(arr[i]==' '||arr[i]=='\0')
		{
			word_count++;
		}
		if(arr[i]=='.'||arr[i]=='\0')
		{
			sentence_count++;
		}
		if(arr[i]=='\0')
		{
			break;
		}
		i++;
	}
	cout<<"Number of Words: "<<word_count<<endl;
	cout<<"Number of Sentences: "<<sentence_count<<endl;
	return 0;
}
