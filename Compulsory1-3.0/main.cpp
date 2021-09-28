#include <iostream>
#include <Windows.h>

void playBoard();		//THIS SIMPLY PRINTS OUT THE TABLE FROM LINE 20 TO LINE 24 IN THIS CODE!
void gaming();			//THIS IS THE ACTUALL GAME. TURNS BETWEEN PLAYER 1 AND PLAYER 2.
int calculateWinner();	//THIS CHECKS IF A CERTAIN CONDITION BETWEEN PLAYER 1 AND PLAYER 2 OCCURS, THAT A PLAYER HAS WON!
void menu();			//THE STARTING MENU, LETTING YOU SELECT THE GAMEMODE.
void gameOver();		//ENDS THE GAME AND ALLOWS USER TO SELECT IF THEY WANT TO PLAY AGAIN OR NO.
void tableReset();		//UPON THE GAMEOVER, IF YOU SELECT YES. THIS WILL RESET THE NUMBERS OF THE ARRAY AND LET YOU PLAY AGAIN!
void clearCin();		//CLEARS PLAYER INPUT

void tableFull();		//CHECKS IF THE TABLE IS FULL AND SENDS THEM TO THE GAMEOVER FUNCTION.


//2 PLAYERS
void playerOne();
void playerTwo();


	//THE ARRAYTABLE OF TICTACTOE
const int row = { 3 };
const int col = { 3 };

//THE TABLE
char table[row][col] = {
	{'1','2','3'} ,
	{'4','5','6'},
	{'7','8','9'} };




//THE MAIN FUNCTION
int main() {

	//RUNS THE MENU
	menu();
	//gameOver();


	return 0;
}



//PLAYBOARD FUNCTION COPIES THE ARRAY FROM LINE 20 TO LINE 24, AND PRINTS OUT THE TABLE.
void playBoard()
{
	//system("color a");

	std::cout << std::endl;
	std::cout << " ------------- ";// << std::endl;
	for (int i{}; i < row; i++)
	{

		for (int j{}; j < col; j++)
		{
			if (j % 3 == 0) {
				std::cout << '\n';
			}
			std::cout << '|' << " ";
			std::cout << table[i][j];
			std::cout << " " << '|';
		}

	}
	std::cout << std::endl;
	std::cout << " ------------- ";

}

//PLAYER 1 AND PLAYER 2, turns-----
//USES THE PLAYBOARD FUNCTION TO PRINT IN THE CHARACTERS X AND O FROM 2 DIFFERENT PLAYERS.
void gaming()
{
	

	//ROUNDS TO PLAY, AND ITS THE AMOUNT OF HOW BIG THE TIC TAC TOE TABLE IS. WHICH IS 9.
	for (int i{}; i < 9; i++)	//0-9 aka 9 rounds.
	{

		//oddetall = player1
		if (i % 2 == 0) {
			playerOne();
			calculateWinner();
			tableFull();
		}
		//partall = player2
		else {
			playerTwo();
			calculateWinner();
		}


	}
}                        


//CHECKS TABLE IF THERE IS THREE-IN-A-ROW
int calculateWinner()
{
	//PLAYER ONE
	//CHECKS HORIZONTAL FOR PLAYER ONE
	if (table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O')
	{
		system("cls");
		std::cout << "player 1 won, first row all O's!";
		Sleep(5000);
		gameOver();
	}
	
	else if (table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O')
	{
		system("cls");
		std::cout << "player 1 won, second row all O's!";
		Sleep(5000);
		gameOver();
	}

	else if (table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O')
	{
		system("cls");
		std::cout << "player 1 won, third row all O's!";
		Sleep(5000);
		gameOver();
	}

	//CHECKS VERTICAL LINES FOR PLAYER ONE

	else if (table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O')
	{
		system("cls");
		std::cout << "player 1 won, the left collom all O's!";
		Sleep(5000);
		gameOver();
	}

	else if (table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O')
	{
		system("cls");
		std::cout << "player 1 won, middle collom all O's!";
		Sleep(5000);
		gameOver();
	}

	else if (table[0][2] == 'O' && table[1][2] == 'O' && table[2][2] == 'O')
	{
		system("cls");
		std::cout << "player 1 won, right collom all O's!";
		Sleep(5000);
		gameOver();
	}

	//CHECKS FOR DIAGONAL LINES FOR PLAYER ONE

	else if (table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O')
	{
		system("cls");
		std::cout << "player 1 won, diagonal from top left to bottom right!";
		Sleep(5000);
		gameOver();
	}

	else if (table[0][2] == 'O' && table[1][1] == 'O' && table[2][0] == 'O')
	{
		system("cls");
		std::cout << "player 1 won, diagonal from bottom left to top right!";
		Sleep(5000);
		gameOver();
	}


	//PLAYER TWO
	//CHEKCS HORIZONTAL FOR PLAYER TWO
	else if (table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X')
	{
		system("cls");
		std::cout << "player 2 won, first row all X's!";
		Sleep(5000);
		gameOver();
	}

	else if (table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X')
	{
		system("cls");
		std::cout << "player 2 won, second row all X's!";
		Sleep(5000);
		gameOver();
	}

	else if (table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X')
	{
		system("cls");
		std::cout << "player 2 won, third row all X's!";
		Sleep(5000);
		gameOver();
	}

	//CHECKS VERTICAL LINES FOR PLAYER TWO

	else if (table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X')
	{
		system("cls");
		std::cout << "player 2 won, the left collom all X's!";
		Sleep(5000);
		gameOver();
	}

	else if (table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X')
	{
		system("cls");
		std::cout << "player 2 won, middle collom all X's!";
		Sleep(5000);
		gameOver();
	}

	else if (table[0][2] == 'X' && table[1][2] == 'X' && table[2][2] == 'X')
	{
		system("cls");
		std::cout << "player 2 won, right collom all X's!";
		Sleep(5000);
		gameOver();
	}

	//CHECKS FOR DIAGONAL LINES FOR PLAYER TWO

	else if (table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X')
	{
		system("cls");
		std::cout << "player 2 won, diagonal from top left to bottom right!";
		Sleep(5000);
		gameOver();
	}

	else if (table[0][2] == 'X' && table[1][1] == 'X' && table[2][0] == 'X')
	{
		system("cls");
		std::cout << "player 2 won, diagonal from bottom left to top right!";
		Sleep(5000);
		gameOver();
	}



	//SEE IF ITS A DRAW!

	/*else if (
	table[0][0] != '1' &&
	table[0][1] != '2' &&
	table[0][2] != '3' &&
	table[1][0] != '4' &&
	table[1][1] != '5' &&
	table[1][2] != '6' &&
	table[2][0] != '7' &&
	table[2][1] != '8' &&
	table[2][2] != '9')
		{
		system("cls");
		std::cout << "its a draw!";
		Sleep(5000);
		gameOver();*/
//}


	return 0;
}


//THIS MENU LETS USER SELECT A GAMEMODE. AND STARTS THE GAME WHEN PLAYER ENTERS THE CHARACTER '1'.
void menu()
{
	char chooseGamemode{};
	std::cout << "You're about to have a thrilling experience with some TIC-TAC-TOE!!!!!" << '\n';

	std::cout << "Choose a gamemode!: \n";
	std::cout << "1. One vs. One \n";

	//SELECTS A GAMEMODE
	std::cin >> chooseGamemode;
	switch (chooseGamemode) {

	case '1':
		system("cls");
		gaming();
		break;
	default:
		system("cls");
		menu();
		break;

	}



}


//IF THERE IS THREE IN A ROW, THE GAME WILL END AND SEND YOU HERE. THIS WILL LET THE USER SELECT IF THEY WANT TO PLAY OR NOT.
void gameOver()
{
	char yesOrNoMenuOrExit{};
	system("cls");
	system("color 2e");
	std::cout << "Do you want to play again? \n";
	std::cout << "Go back to menu? \n";
	std::cout << "or exit? :  \n";
	std::cout << "Y/y = Yes\n";
	std::cout << "N/n = No\n";
	std::cout << "M/m = Menu\n";
	std::cout << "E/e = Exit\n";
	std::cin >> yesOrNoMenuOrExit;
	switch (yesOrNoMenuOrExit) {
	case 'y': case 'Y':
		clearCin();
		tableReset();
gaming();
break;
	case 'n': case 'N':
		system("cls");
		std::cout << "Thanks for playing!";
		exit(0);
		break;
	case 'm': case 'M':
		menu();
break;
	case 'e': case 'E':
		exit(0);
		break;
	}
}

void tableReset()
{
table[0][0] = '1';
table[0][1] = '2';
table[0][2] = '3';
table[1][0] = '4';
table[1][1] = '5';
table[1][2] = '6';
table[2][0] = '7';
table[2][1] = '8';
table[2][2] = '9';



}

void clearCin()
{
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}

void tableFull()
{

	if (
		table[0][0] != '1' &&
		table[0][1] != '2' &&
		table[0][2] != '3' &&
		table[1][0] != '4' &&
		table[1][1] != '5' &&
		table[1][2] != '6' &&
		table[2][0] != '7' &&
		table[2][1] != '8' &&
		table[2][2] != '9')
	{
		system("cls");
		std::cout << "its a draw!";
		Sleep(5000);
		gameOver();






	}
}


//2 PLAYERS

void playerOne()
{
	char player1{};


	system("cls");
	system("color e");
	playBoard();
	std::cout << '\n';
	std::cout << "Player1's Turn: ";
	std::cin >> player1;
	switch (player1)
	{
	case '1':
		if (table[0][0] == '1') {
			table[0][0] = 'O';
		}
		else {
			playerOne();
		}
		break;

	case '2':
		if (table[0][1] == '2') {
			table[0][1] = 'O';
		}
		else {
			playerOne();
		}
		break;

	case '3':
		if (table[0][2] == '3') {
			table[0][2] = 'O';
		}
		else {
			playerOne();
		}
		break;

	case '4':
		if (table[1][0] == '4') {
			table[1][0] = 'O';
		}
		else {
			playerOne();
		}
		break;

	case '5':
		if (table[1][1] == '5') {
			table[1][1] = 'O';
		}
		else {
			playerOne();
		}
		break;

	case '6':
		if (table[1][2] == '6') {
			table[1][2] = 'O';
		}
		else {
			playerOne();
		}
		break;

	case '7':
		if (table[2][0] == '7') {
			table[2][0] = 'O';
		}
		else {
			playerOne();
		}
		break;

	case '8':
		if (table[2][1] == '8') {
			table[2][1] = 'O';
		}
		else {
			playerOne();
		}
		break;

	case '9':
		if (table[2][2] == '9') {
		table[2][2] = 'O';
		}
		break;

	default:
		break;
	}
}

void playerTwo()
{
	char player2{};

	system("cls");
	system("color a");
	playBoard();
	std::cout << '\n';
	std::cout << "Player2's Turn: ";
	std::cin >> player2;
	switch (player2)
	{
	case '1':
		if (table[0][0] == '1') {
			table[0][0] = 'X';
		}
		else {
			playerTwo();
		}
		break;

	case '2':
		if (table[0][1] == '2') {
			table[0][1] = 'X';
		}
		else {
			playerTwo();
		}
		break;

	case '3':
		if (table[0][2] == '3') {
			table[0][2] = 'X';
		}
		else {
			playerTwo();
		}
		break;

	case '4':
		if (table[1][0] == '4') {
			table[1][0] = 'X';
		}
		else {
			playerTwo();
		}
		break;

	case '5':
		if (table[1][1] == '5') {
			table[1][1] = 'X';
		}
		else {
			playerTwo();
		}
		break;

	case '6':
		if (table[1][2] == '6') {
			table[1][2] = 'X';
		}
		else {
			playerTwo();
		}
		break;

	case '7':
		if (table[2][0] == '7') {
			table[2][0] = 'X';
		}
		else {
			playerTwo();
		}
		break;

	case '8':
		if (table[2][1] == '8') {
			table[2][1] = 'X';
		}
		else {
			playerTwo();
		}
		break;

	case '9':
		if (table[2][2] == '9') {
			table[2][2] = 'X';
		}
		else {
			playerTwo();
		}
		break;

	default:
		break;
	}
}


