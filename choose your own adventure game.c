
#include <stdio.h>

int main () {

	int input;

	printf("You wake to the sound of rushing air and you emerge from your cryo pod.\n");
	printf("You are a human crew of one on a ten year journey towing onehundred thousand colonist to a new home, they are safely stored away in there own cryo pods.");
	printf("You look around the dark room as a humanoid figure with porciln skin, no mouth, and glowing yellow eyes approachs.\n");
	printf("You recognize it as your average joe copilot, you exchange greetings and it informs you that you have arried at your destination.\n");
	printf("You both head off to the bridge to begin landing procedures, when a dark catlike creature decends from the ceiling and lands on average joe\n");
    printf("1 ) Run to the engine room\n");
    printf("2 ) Run to the bridge\n");
	printf("3 ) Run to the escape pod\n");
    scanf("%d", &input);

	if (input == 1) {
		printf("You sprint into the engine room and you dive under a work table that has a plasma torch on top of it.  The alien enters the room and\n");
		printf("begins skulking around the room\n");
		printf("1 ) use the plasma torch and burn it down\n");
		printf("2 ) run fromm the room\n");
		scanf("%d", &input);

		} if (input == 1) {
		printf("You rise from your hiding place and grab the plasma torch and turn it on the alien just as it lunges at you\n");
		printf("The searing heat meats the alien and it scrables back and tries to hide among the fuel lines\n");
		printf("1 ) finish the job keep using the plasma torch\n");
		printf("2 ) i got a ship to land.  Go to the bridge\n");
		scanf("%d", &input);

		} else if (input == 2){
		printf("You try to run from the alien but without joe to slow it down the ailen quickly catches up with you and rips your spine out.\n");

			} if (input == 1){
			printf("You continue your onslaught and you ignite the fuel lines and blow up the ship/n");

			} else if (input == 2) {
			printf("You run to the bridge and unhooked the colonist ship and it begins landing.  Just as you finish the alien stagers into the room,\n");
			printf(" blinded from the plasma torch, you are able to sneek by run to the escape pod and escape\n");

	} else if (input == 2) {
		printf("You run into the bridge.  You can hear the alien running behind you\n");
		printf("1 ) unhook the colonist to land\n");
		printf("2 ) turn and fight\n");
		scanf("%d", &input);

		} if (input == 1) {
			printf("You quickly unhook the colinist and they begin to land just as the the alien leaps ontop of you and begins eathing you alive.\n");
			printf("You save the colonist at your own death\n");

		} else if (input ==2) {
			printf("You turn and charge the alien, you get a few swings in but the alien overpowers you and smashes your head open\n");

	} else if (input == 3) {
		printf("Your run to the escape pod and shut the door but the alien is able to get its head under the door\n");
		printf("1 ) dig into the survival kit to see what you can find\n");
		printf("2 ) launch the pod\n");
		scanf("%d", &input);

		} if (input == 1) {
			printf("You find a flair gun in the kit and you plant a flair in the head of the alien.  It shreeks and retreats, the door shuts and you\n");
			printf("escape.  You curse the colonists to forever sleep\n");

		} else if (input == 2) {
			printf("When you launch the pod it tears itself apart and you are flung into space\n");
			printf("You curse the colonists to forever sleep\n");

		}

	return 0;

}
