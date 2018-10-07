#include<iostream>
#include<windows.h>
#define ll long long
char s[1005];
using namespace std;

void start(){
	system("CLS");
	cout<<"+-----------------------+"<<endl;
	cout<<"| 2-PLAYER HANGMAN GAME |"<<endl;
	cout<<"+-----------------------+"<<endl;
	cout<<endl;
	cout<<"***P1's Turn***"<<endl;
	cout<<"Please enter secret word: ";
	gets(s);
	cout<<"You entered '"<<s<<"'."<<endl<<endl;
	system("PAUSE");
	system("CLS");
}

void game(){
	char guess[30]={127};
	int tries=9;
	int len=strlen(s);
	int number=0;
	
	while(tries>0){
		system("CLS");
		bool cleared=true;
		bool correct=false;
		cout<<"+-----------------------+"<<endl;
		cout<<"| 2-PLAYER HANGMAN GAME |"<<endl;
		cout<<"+-----------------------+"<<endl;
		cout<<endl;
		if(tries==9) cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		if(tries<=8){
			cout<<"+--------------"<<endl;
			if(tries<=7){
				cout<<"|";
				if(tries<=6) cout<<"       |";
				cout<<endl;
				cout<<"|";
				if(tries<=5) cout<<"       O";
				cout<<endl;
				cout<<"|";
				if(tries<=3) cout<<"     --|";
				if(tries==4) cout<<"       |";
				if(tries<=2) cout<<"--";
				cout<<endl;
				cout<<"|";
				if(tries<=1) cout<<"       ^";
				cout<<endl;
				cout<<"|";
				if(tries<=1) cout<<"      /";
				if(tries<=0) cout<<" \\";
				cout<<endl;
				cout<<"|"<<endl<<endl;
			}
			else cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		}
		for(int i=0;i<len;i++){
			bool test=true;
			for(int j=0;j<30;j++){
				if(guess[j]==s[i]){
					cout<<guess[j]<<" ";
					test=false;
					break;
				}
			}
			if(test&&s[i]!=' '){
				cout<<"_ ";
				cleared=false;
			}
			else if(test) cout<<"  ";
		}
		if(cleared) break;
		cout<<endl<<endl<<endl<<"***P2's Turn***"<<endl;
		cout<<"You have "<<tries<<" incorrect guesses left."<<endl;
		cout<<"Please enter your guess: ";
		cin>>guess[number];
		for(int i=0;i<len;i++){
			if(s[i]==guess[number]){
				correct=true;
				break;
			}
		}
		if(correct==false) tries--;
		number++;
	}
	cout<<endl;
	if(tries<=0){
		system("CLS");
		cout<<"+-----------------------+"<<endl;
		cout<<"| 2-PLAYER HANGMAN GAME |"<<endl;
		cout<<"+-----------------------+"<<endl;
		cout<<endl;
		if(tries==9) cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		if(tries<=8){
			cout<<"+--------------"<<endl;
			if(tries<=7){
				cout<<"|";
				if(tries<=6) cout<<"       |";
				cout<<endl;
				cout<<"|";
				if(tries<=5) cout<<"       O";
				cout<<endl;
				cout<<"|";
				if(tries<=3) cout<<"     --|";
				if(tries==4) cout<<"       |";
				if(tries<=2) cout<<"--";
				cout<<endl;
				cout<<"|";
				if(tries<=1) cout<<"       ^";
				cout<<endl;
				cout<<"|";
				if(tries<=1) cout<<"      /";
				if(tries<=0) cout<<" \\";
				cout<<endl;
				cout<<"|"<<endl<<endl;
			}
			else cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		}
		for(int i=0;i<len;i++) cout<<s[i]<<" ";
		cout<<endl<<endl;
		cout<<"1P has won! The correct word is shown above."<<endl;
	}
	else{
		system("CLS");
		cout<<"+-----------------------+"<<endl;
		cout<<"| 2-PLAYER HANGMAN GAME |"<<endl;
		cout<<"+-----------------------+"<<endl;
		cout<<endl;
		if(tries==9) cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		if(tries<=8){
			cout<<"+--------------"<<endl;
			if(tries<=7){
				cout<<"|";
				if(tries<=6) cout<<"       |";
				cout<<endl;
				cout<<"|";
				if(tries<=5) cout<<"       O";
				cout<<endl;
				cout<<"|";
				if(tries<=3) cout<<"     --|";
				if(tries==4) cout<<"       |";
				if(tries<=2) cout<<"--";
				cout<<endl;
				cout<<"|";
				if(tries<=1) cout<<"       ^";
				cout<<endl;
				cout<<"|";
				if(tries<=1) cout<<"      /";
				if(tries<=0) cout<<" \\";
				cout<<endl;
				cout<<"|"<<endl<<endl;
			}
			else cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		}
		for(int i=0;i<len;i++) cout<<s[i]<<" ";
		cout<<endl<<endl;
		cout<<"2P has won! Congratulations!"<<endl;
	}
}

int main(){
	start();
	game();
	system("PAUSE");
	return 0;
}
