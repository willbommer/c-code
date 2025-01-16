
#include <stdio.h>
#include <stdlib.h>

void pb();
void h();
char cw();
char guess;
int miss = 11;

char wgb[14] = {'D', 'e', 'n', 'n', 'i', 's', '_', 'R', 'i', 't', 'c', 'h', 'i', 'e',};
char gb[14] = {'#', '#', '#', '#', '#', '#', '_', '#', '#', '#', '#', '#', '#', '#',};
char hb[17] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};
int main () {

	char start;
	char guess;
	int history = -1;

	system("clear");

	printf(

" __      __       .__                                  __           .__                                                 \n"
"/  \\    /  \\ ____ |  |   ____  ____   _____   ____   _/  |_  ____   |  |__ _____    ____    ____   _____ _____    ____  \n"
"\\   \\/\\/   // __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\  \\   __\\/  _ \\  |  |  \\__  \\  /    \\  / ___\\ /     \\__  \\  /    \\ \n"
" \\        /\\  ___/|  |_\\  \\__(  <_> )  Y Y  \\  ___/   |  | (  <_> ) |   Y  \\/ __ \\|   |  \\/ /_/  >  Y Y  \\/ __ \\|   |  \\\n"
"  \\__/\\  /  \\___  >____/\\___  >____/|__|_|  /\\___  >  |__|  \\____/  |___|  (____  /___|  /\\___  /|__|_|  (____  /___|  /\n"
"       \\/       \\/          \\/            \\/     \\/                      \\/     \\/     \\//_____/       \\/     \\/     \\/ \n"

	);

	printf("\n");

	printf("Press X to proceed\n");

	scanf("% c\n", start);

	while ( cw() == 'n' ) {

		system("clear");

		printf("\n");

		printf("Game Board\n");

		pb();

		printf("\n");

		printf("Guess History");

		h();

		printf("\n");

		printf("You have %d misses remaining\n", miss);
		//printf("Your guess history %d\n", history);

		printf("\n");

		printf("Guess a letter\n");

		scanf(" %c", &guess);

		if (guess == 'd') {
			gb[0] = 'D';

		} else if (guess == 'e') {
			gb[1] = 'e';
			gb[13] = 'e';

		} else if (guess == 'n') {
			gb[2] = 'n';
			gb[3] = 'n';

		} else if (guess == 'i') {
			gb[4] = 'i';
			gb[8] = 'i';
			gb[12] = 'i';

		} else if (guess == 's') {
			gb[5] = 's';

		} else if (guess == 'r') {
			gb[7] = 'R';

		} else if (guess == 't') {
			gb[9] = 't';

		} else if (guess == 'c') {
			gb[10] = 'c';

		} else if (guess == 'h') {
			gb[11] = 'h';

		} else {
			miss -= 1;

		}

		history +=1;

		 if (history == 1) {
			hb[0] = guess;

		} else if (history == 2) {
			hb[1] = guess;

		} else if (history == 3) {
			hb[2] = guess;

		} else if (history == 4) {
			hb[3] = guess;

		} else if (history == 5) {
			hb[4] = guess;

		} else if (history == 6) {
			hb[5] = guess;

		} else if (history == 7) {
			hb[6] = guess;

		} else if (history == 8) {
			hb[7] = guess;

		} else if (history == 9) {
			hb[8] = guess;

		} else if (history == 10) {
			hb[9] = guess;

		} else if (history == 11) {
			hb[10] = guess;

		} else if (history == 12) {
			hb[11] = guess;

		} else if (history == 13) {
			hb[12] = guess;

		} else if (history == 14) {
			hb[13] = guess;

		} else if (history == 15) {
			hb[14] = guess;

		} else if (history == 16) {
			hb[15] = guess;

		} else if (history == 17) {
			hb[16] = guess;
		}

	}

	return 0;

}

void pb() {

	int x;

	for (x=0; x<14; x++) {
		printf(" %c", gb[x]);

	}
		printf("\n");


}

void h() {

	int x;

	for (x=0; x<17; x++) {
		printf(" %c", hb[x]);

	}
		printf("\n");

}

char cw() {

	if (gb[0] == wgb[0]
		&& gb[1] == wgb[1] && gb[2] == wgb[2] && gb[3] == wgb[3] && gb[4] == wgb[4] && gb[5] == wgb[5] && gb[6] == wgb[6] && gb[7] == wgb[7]
		&& gb[8] == wgb[8] && gb[9] == wgb[9] && gb[10] == wgb[10] && gb[11] == wgb[11] && gb[12] == wgb[12] && gb[13] == wgb[13]) {
		system("clear");

		printf(

 "____    ____.__        __                       ._.\n"
"\\   \\ /   /|__| _____/  |_  ___________ ___.__.| |\n"
" \\   Y   / |  |/ ___\\   __\\/  _ \\_  __ <   |  || |\n"
"  \\     /  |  \\  \\___|  | (  <_> )  | \\/\\___  | \\|\n"
"   \\___/   |__|\\___  >__|  \\____/|__|   / ____| __\n"
"                   \\/                   \\/      \\/\n"

		);

printf("\n");

printf("\n");

		printf(

"________                       .__         __________.__  __         .__    .__        \n"
"\\______ \\   ____   ____   ____ |__| ______ \\______   \\__|/  |_  ____ |  |__ |__| ____  \n"
" |    |  \\_/ __ \\ /    \\ /    \\|  |/  ___/  |       _/  \\   __\\/ ___\\|  |  \\|  |/ __ \\ \n"
" |    `   \\  ___/|   |  \\   |  \\  |\\___ \\   |    |   \\  ||  | \\  \\___|   Y  \\  \\  ___/ \n"
"/_______  /\\___  >___|  /___|  /__/____  >  |____|_  /__||__|  \\___  >___|  /__|\\___  >\n"
"        \\/     \\/     \\/     \\/        \\/          \\/              \\/     \\/        \\/ \n"

		);

		return 'w';

	}

	if (miss == 0) {
		system("clear");
		printf(

"_____.___.              .____                                 ___ \n"
"\\__  |   | ____  __ __  |    |    ____  ______ ____    /\\    /  / \n"
" /   |   |/  _ \\|  |  \\ |    |   /  _ \\/  ___// __ \\   \\/   /  /  \n"
" \\____   (  <_> )  |  / |    |__(  <_> )___ \\  __ _/   /\\  (  (   \n"
" / ______|\\____/|____/  |_______ \\____/____  >\\___  >  \\/   \\  \\  \n"
" \\/                             \\/         \\/     \\/         \\__\\ \n"

		);
		return 'l';
	}


	return 'n';

}
