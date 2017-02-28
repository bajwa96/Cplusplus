#include<iostream>
using namespace std;
int mat[9];
class game{
	int i,p,count;
	public:
		game(){
		count=0;
		for(i=0;i<9;i++)mat[i]=i+1;
		}
		void getin(int pla){
			cout<<"Enter The place you want to enter input\n";
			cin>>p;
			if(p==mat[p-1]&&p!=0&&p!=-3&&p!=-5){
			if(pla==0){
			mat[p-1]=-3;
			}else
			mat[p-1]=-5;
			count++;
			}
			else cout<<"Your Entered wrong element"<<endl;
			system("CLS");		}
		void display(){
			cout<<endl;
			for(i=0;i<9;i++){
				if(i==3||i==6)cout<<"\n";
				if(mat[i]==-3){
				cout<<'O'<<"\t";
				}
				else if(mat[i]==-5){
					cout<<'X'<<"\t";
				}
				else
				cout<<mat[i]<<"\t";
			}
			cout<<"\n";
			check();
		};
		void check(){
		if(mat[0]==mat[1]&&mat[1]==mat[2]){
			if(mat[0]==-3)cout<<"Player 1 WON the match\n";
			else cout<<"Player 2 WON the match\n";
			cout<<"YOU WON THE MATCH\n";
			done(1);
		}
		else if(mat[3]==mat[4]&&mat[4]==mat[5]){
			if(mat[3]==-3)cout<<"Player 1 WON the match\n";
			else cout<<"Player 2 WON the match\n";
			cout<<"YOU WON THE MATCH\n";
			done(1);
		}
		else if(mat[3]==mat[4]&&mat[4]==mat[5]){
			if(mat[3]==-3)cout<<"Player 1 WON the match\n";
			else cout<<"Player 2 WON the match\n";
			cout<<"YOU WON THE MATCH\n";
			done(1);
		}
		else if(mat[6]==mat[7]&&mat[7]==mat[8]){
			if(mat[6]==-3)cout<<"Player 1 WON the match\n";
			else cout<<"Player 2 WON the match\n";
			cout<<"YOU WON THE MATCH\n";
			done(1);
		}
		if(mat[0]==mat[3]&&mat[3]==mat[6]){
			if(mat[0]==-3)cout<<"Player 1 WON the match\n";
			else cout<<"Player 2 WON the match\n";
			cout<<"YOU WON THE MATCH\n";
			done(1);
		}
		else if(mat[1]==mat[4]&&mat[4]==mat[7]){
			if(mat[1]==-3)cout<<"Player 1 WON the match\n";
			else cout<<"Player 2 WON the match\n";
			cout<<"YOU WON THE MATCH\n";
			done(1);
		}
		else if(mat[2]==mat[5]&&mat[5]==mat[8]){
			if(mat[2]==-3)cout<<"Player 1 WON the match\n";
			else cout<<"Player 2 WON the match\n";
			cout<<"YOU WON THE MATCH\n";
			done(1);
		}
		else if(mat[0]==mat[4]&&mat[4]==mat[8]){
			if(mat[0]==-3)cout<<"Player 1 WON the match\n";
			else cout<<"Player 2 WON the match\n";
			cout<<"YOU WON THE MATCH\n";
			done(1);
		}
		else if(mat[2]==mat[4]&&mat[4]==mat[6]){
			if(mat[2]==-3)cout<<"Player 1 WON the match\n";
			else cout<<"Player 2 WON the match\n";
			cout<<"YOU WON THE MATCH\n";
			done(1);
		}
		else if(count==9) cout<<"DRAW B/W PLAYERS\n";
		
		};
		int done(int z){
		if(count==9||z==1){
			count=9;
			return 0;
		}
		else return 1;	
		}
		
		
};
int main(){
	int p,c=0;
	game g;
	g.display();
	while(g.done(0)){
		if(c%2==0)p=0;
		else p=1;
	cout<<"Enter for player "<<p+1<<endl;
	g.getin(p);
	g.display();
	c++;
	}
	
}
