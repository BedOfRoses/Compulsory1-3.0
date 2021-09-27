#include <iostream>
#include <Windows.h>

void playBoard(); //Brettet
void gaming(); //Hvem som legger inn
int calculateWinner(); //Hvem vant
void menu(); //En fakkibgns meny
void gameOver();


//2 players
void playerOne();
void playerTwo();


	//The arraytable of tictactoe.
const int row = { 3 };
const int col = { 3 };

//THE TABLE
char table[row][col] = {
	{'1','2','3'} ,
	{'4','5','6'},
	{'7','8','9'} };




//THE MAIN FUNCTION
int main() {

	//RUNS MENU
	menu();



	return 0;
}



//PLAYBOARD FUNCTION COPIES THE ARRAY FROM TOP, AND PRINTS THE TABLE.
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

//Player1 and 2, turns-----
//USES THE PLAYBOARD FUNCTION TO PRINT IN THE CHARACTERS X AND O FROM 2 DIFFERENT PLAYERS.
void gaming()
{
	

	//ROUNDS TO PLAY, AND ITS THE AMOUNT OF HOW BIG THE TIC TAC TOE TABLE IS. WHICH IS 9.
	for (int i{}; i < 10; i++)	//0-9 aka 9 rounds.
	{

		//oddetall = player1
		if (i % 2 == 0) {
			playerOne();
			calculateWinner();
		}
		//partall = player2
		else {
			playerTwo();
			calculateWinner();
		}


	}
}


//Checks table if there is three-in-a-row
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



	return 0;
}


//THIS MENU LETS USER SELECT A GAMEMODE.
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
		//playBoard();
		gaming();
		break;
	default:
		system("cls");
		menu();
		break;

	}



}

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


//2 Players

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
		table[0][0] = 'O';
		break;

	case '2':
		table[0][1] = 'O';
		break;

	case '3':
		table[0][2] = 'O';
		break;

	case '4':
		table[1][0] = 'O';
		break;

	case '5':
		table[1][1] = 'O';
		break;

	case '6':
		table[1][2] = 'O';
		break;

	case '7':
		table[2][0] = 'O';
		break;

	case '8':
		table[2][1] = 'O';
		break;

	case '9':
		table[2][2] = 'O';
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
		table[0][0] = 'X';
		break;
	case '2':
		table[0][1] = 'X';
		break;
	case '3':
		table[0][2] = 'X';
		break;
	case '4':
		table[1][0] = 'X';
		break;
	case '5':
		table[1][1] = 'X';
		break;
	case '6':
		table[1][2] = 'X';
		break;
	case '7':
		table[2][0] = 'X';
		break;
	case '8':
		table[2][1] = 'X';
		break;
	case '9':
		table[2][2] = 'X';
		break;
	default:
		break;
	}
}

