
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char gb[10][10] = {
	{'#','#','#','#','#','#','#','#','#','#'},
	{'#','$',' ',' ','+',' ',' ',' ',' ','#'},
	{'#',' ',' ',' ',' ',' ',' ','M',' ','#'},
	{'#',' ',' ',' ','$',' ',' ',' ','+','#'},
	{'#','M',' ','$',' ',' ',' ',' ',' ','#'},
	{'#',' ','M',' ','+',' ',' ',' ','$','#'},
	{'#',' ',' ',' ',' ',' ',' ',' ','$','#'},
	{'#','+','M',' ',' ','M','+',' ',' ','#'},
	{'#',' ',' ','+',' ',' ',' ',' ',' ','#'},
	{'#','#','#','#','#','#','#','#','#','#'},
};

int player_x;
int player_y;
int health;
int money;
int running;

void render();

int main () {

	char direction;

	srand( time(0) );


	do {
		player_x = rand() % 10;
		player_y = rand() % 10;
	} while (gb[player_y][player_x] != ' ');


	health = 100;
	money = 0;
	running = 1;

	system("stty -echo raw");

	while (running == 1) {

		render();

		if (gb[player_y][player_x] == 'M') {
			printf("Monster attack!\r\n");
			health -= 15;
			money -= 5;
			gb[player_y][player_x] = 'X';
		} else if (gb[player_y][player_x] == '+') {
			printf("Health pack!\r\n");
			health += 25;
			gb[player_y][player_x] = ' ';
		} else if (gb[player_y][player_x] == '$') {
			printf("Found some money!\r\n");
			money += 100;
			gb[player_y][player_x] = ' ';
		}

		printf("Enter a direction (w/a/s/d): ");

		scanf("%c", &direction);

		if (direction == 'w' && gb[player_y - 1][player_x] != '#') {
			player_y--;
		} else if (direction == 'a' && gb[player_y][player_x - 1] != '#') {
			player_x--;
		} else if (direction == 's'  && gb[player_y + 1][player_x] != '#') {
			player_y++;
		} else if (direction == 'd' && gb[player_y][player_x + 1] != '#') {
			player_x++;
		} else if (direction == 'x') {
			running = 0;
		}

	}

	system("stty echo -raw");

	return 0;

}

void render() {

	int x, y;

	system("clear");

	printf("\e[33;1m[ HEALTH : %d ] [ MONEY : %d ]\r\n\e[0m", health, money);

	for (y=0; y<10; y++) {
		for (x=0; x<10; x++) {
			if (y == player_y && x == player_x) {
				printf("0");
			} else if (gb[y][x] == 'M') {
				printf("\e[31;7m%c\e[0m", gb[y][x]);
			} else if (gb[y][x] == '$') {
				printf("\e[32;1m%c\e[0m", gb[y][x]);
			} else if (gb[y][x] == '+') {
				printf("\e[34;1m%c\e[0m", gb[y][x]);
			} else {
				printf("%c", gb[y][x]);
			}
		}
		printf("\r\n");
	}

}
