#include<iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>
#include<istream>
int main(){
	char name[100],act[20],inp,namecopy[100];
	cout<<"\tThis is the start of the game\nSo. please enter name of the movie\n";
	cin.getline(name,100);
	cout<<name<<endl;
	int i,j=0;
	
	for(i=0;i<strlen(name);i++){
		namecopy[i]=name[i];
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]==' '){
		
		
	}
		else
		{
		act[j]=name[i];
		name[i]='-';j++;
	}
		
	}	
	
	system("CLS");
	
	i=1;int k=0,m=0;
	
	cout<<"So try to guess name of the movie by entrying first character \n"<<name;
	while(i<=9){	
	cout<<"\nYour input = ";
	cin>>inp;
	int lock=0,ii;
	for(ii=0;ii<j;ii++){
		if(inp==act[ii]){
			lock=1;
			act[ii]='-';
			break;
		}
		
	}
	if(lock==1){
		for(ii=0;ii<strlen(namecopy);ii++){
			if(namecopy[ii]==inp){
				name[ii]=inp;
						k++;		
			}
		}
		cout<<"Your attempt was right"<<endl;
		
		
		cout<<name<<endl;
	}
	else {
		cout<<"You have "<<9-i<<" tries remaining" <<endl;
	}
	
	if(k==j){ --i;
		cout<<"You Had done a great job\n";
		break;
		}
	else if(i==11)cout<<"You were not succesfull\n"<<endl;
		i++;
	}
	m++;
	
	system("PAUSE");
}
