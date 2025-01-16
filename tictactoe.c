
#include <stdio.h>
#include <stdlib.h>

void printBoard();
char checkWinner();	// return either: x, o, n, c


char gameboard[3][3] = {
	{'#', '#', '#'},
	{'#', '#', '#'},
	{'#', '#', '#'},
};

char turn = 'x';

	int main() {

	int y, x;
	int cat = 0;

	while ( checkWinner() == 'N' ) {

		system("clear");

		printf("WELCOME TO TIC TAC TOE!!!\n");
		printf("\n");

		printBoard();

		printf(" It's %c's turn\n", turn);
		printf("Enter coordinates 'y x': ");
		scanf("%d%d", &y, &x);

		if (gameboard[y][x] == '#') {

		gameboard[y][x] = turn;

		if (turn == 'x') {
			turn = 'o';
			cat += 1;

		} else {
			turn = 'x';
		}

		if (cat == 5) {
			printf("CAT WINS!!!\n");
			return 'c';
		}


		}

	}

	system("clear");
	printBoard();
	printf("\n");
	// 'C' if/else
	printf("%c won!\n", checkWinner() );
	printf("\n");
	printf("THANKS FOR PLAYING!!!\n");
	return 0;

}

void printBoard() {

	int y, x;

	for (y=0; y<3; y++) {
		for (x=0; x<3; x++) {
			printf("%2c", gameboard[y][x]);
		}
		printf("\n");
	}

}

char checkWinner() {

	if (gameboard[0][0] == 'x' && gameboard[1][1] == 'x' && gameboard[2][2] == 'x') {
		return 'x';

	} else if (gameboard[0][0] == 'x' && gameboard[0][1] == 'x' && gameboard[0][2] == 'x') {
		return 'x';

	} else if (gameboard[1][0] == 'x' && gameboard[1][1] == 'x' && gameboard[1][2] == 'x') {
		return 'x';

	} else if (gameboard[2][0] == 'x' && gameboard[2][1] == 'x' && gameboard[2][2] == 'x') {
		return 'x';

	} else if (gameboard[0][0] == 'x' && gameboard[1][0] == 'x' && gameboard[2][2] == 'x') {
		return 'x';

	} else if (gameboard[0][1] == 'x' && gameboard[1][1] == 'x' && gameboard[2][1] == 'x') {
		return 'x';

	} else if (gameboard[0][2] == 'x' && gameboard[1][2] == 'x' && gameboard[2][2] == 'x') {
		return 'x';
	}

	if (gameboard[0][0] == 'o' && gameboard[1][1] == 'o' && gameboard[2][2] == 'o') {
		return 'o';

	} else if (gameboard[0][0] == 'o' && gameboard[0][1] == 'o' && gameboard[0][2] == 'o') {
		return 'o';

	} else if (gameboard[1][0] == 'o' && gameboard[1][1] == 'o' && gameboard[1][2] == 'o') {
		return 'o';

	} else if (gameboard[2][0] == 'o' && gameboard[2][1] == 'o' && gameboard[2][2] == 'o') {
		return 'o';

	} else if (gameboard[0][0] == 'o' && gameboard[1][0] == 'o' && gameboard[2][2] == 'o') {
		return 'o';

	} else if (gameboard[0][1] == 'o' && gameboard[1][1] == 'o' && gameboard[2][1] == 'o') {
		return 'o';

	} else if (gameboard[0][2] == 'o' && gameboard[1][2] == 'o' && gameboard[2][2] == 'o') {
		return 'o';
	}

	return 'N';

}
