//tic-tac-toe
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<process.h>

int p=1;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

	void color()
	{
	unsigned t=time(NULL);
	srand(t);
	int a=rand()/100%15+1;
	textcolor(a);
	}

	void programmer()
	{
	textcolor(7);
	clrscr();
	gotoxy(1,25);
	_setcursortype(_NOCURSOR);
	textcolor(7);
	cout<<"\n\n\nThanks for playing the game!!!";
	cout<<"\t\t\t\t\tCREATED BY ";
	color();
	cprintf("Reet Awwsum");
	getch();
	exit(0);
	}

	int checkwin()
	{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
	}


	void turn(int t)
	{
	void board(int);
	cout<<"Player "<<t<<" make your turn :";
	loop1:
	char choice=getch();
	int g=int(choice);
		if (g==27)
		programmer();

	choice=char(g);

	   char	mark=(t== 1) ? 'X' : 'O';
		if (choice == '1' && square[1] == '1')
			square[1] = mark;
		else if (choice == '2' && square[2] == '2')
			square[2] = mark;
		else if (choice == '3' && square[3] == '3')
			square[3] = mark;
		else if (choice == '4' && square[4] == '4')
			square[4] = mark;
		else if (choice == '5' && square[5] == '5')
			square[5] = mark;
		else if (choice == '6' && square[6] == '6')
			square[6] = mark;
		else if (choice == '7' && square[7] == '7')
			square[7] = mark;
		else if (choice == '8' && square[8] == '8')
			square[8] = mark;
		else if (choice == '9' && square[9] == '9')
			square[9] = mark;
		else
		{
		cout<<"Invalid move ";
		goto loop1;
		}

	int y=checkwin();
	board(y);
	}

	void board(int z)
	{
	textcolor(7);
	clrscr();
	gotoxy(35,2);
	color();
	cprintf("Tic Tac Toe");
	cout<<"\n\t\t\t   --*--*--*--*--*--*--*--*--";
	cout<<"\n\n\n\tPlayer 1 (";
	textcolor(RED);
	cprintf("X");
	cout<<")";
	cout<<"\t\t\t\t\t   Player 2 (";
	textcolor(GREEN);
	cprintf("O");
	cout<<")";
	cout <<"\n\n\n\n";
	cout << "\t\t\t            |     |     " << endl;
	cout << "\t\t\t         " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "\t\t\t       _____|_____|_____" << endl;
	cout << "\t\t\t            |     |     " << endl;
	cout << "\t\t\t         " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "\t\t\t       _____|_____|_____" << endl;
	cout << "\t\t\t            |     |     " << endl;
	cout << "\t\t\t         " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "\t\t\t            |     |     " << endl << endl;

	p=p+1;
	int t=(p%2==0)?1:2;
	int w=(p%2==0)?2:1;

	if (z==-1)
	turn(t);

	else if (z==0)
	{
	cout<<"\nGame ";
	color();
	cprintf("DRAWS!!!");
	getch();
	}

	else if (z==1)
	{
	cout<<"\nPlayer "<<w;
	color();
	cprintf(" WINS!!!");
	getch();
	}

	}

void main()
{
textcolor(7);
clrscr();
delay(100);
_setcursortype(_NOCURSOR);
gotoxy(35,12);

textcolor(RED);
cprintf("X");
delay(490);
cout<<" ";
textcolor(GREEN);
cprintf("O");
delay(490);
cout<<" ";

textcolor(RED);
cprintf("X");
delay(490);
cout<<" ";
textcolor(GREEN);
cprintf("O");
delay(490);
cout<<" ";

textcolor(RED);
cprintf("X");
delay(490);
cout<<" ";
textcolor(GREEN);
cprintf("O");
delay(890);

color();
gotoxy(35,12);
cprintf("TIC-TAC-TOE");
cout<<endl;
cout<<"\t\t\t--*--*--*--*--*--*--*--*--*--*--";
delay(800);
gotoxy(19,25);
cout<<"******** PRESS ANY KEY TO CONTINUE ********";
int g=getch();

	if (g==27)
	programmer();

textcolor(7);
clrscr();
_setcursortype(_NOCURSOR);
for (int r=1; r<4; r++)
	{
	textcolor(7);
	clrscr();
	textcolor(12);
	gotoxy(35,12);
	cprintf("LOADING");
	delay(520);
	cprintf(".");
	delay(520);
	cprintf(".");
	delay(520);
	cprintf(".");
	delay(520);
	}
board(-1);
programmer();
getch();
}
