#include "twenty_squares.h"

static void	set_utf8_encoding(void);
static void	display_intro_page(void);
static void	display_first_page(void);
static void	display_second_page(void);
static void	display_third_page(void);

int	start(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	set_utf8_encoding();
	display_intro_page();
	if (!ask_yes_no("Do you know the rules of the game?"))
	{
		display_first_page();
		display_second_page();
		display_third_page();
	}
	start_game();
	clear_window();
	return (0);
}

static void	set_utf8_encoding(void)
{
	#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF8);
	#endif
	return ;
}

static void	display_intro_page(void)
{
	clear_window();
	printf("TWENTY SQUARES\n\n");
	printf("This game is based upon a mesopotamian game which is at least 4.5 "
		"millenia old. Known today as the \"Royal Game of Ur\" or the \"Game "
		"of Twenty Squares\", this board game was later on overthrown by "
		"Backgammon. This project, Twenty Squares, is the opportunity to "
		"discover the oldest board game known to mankind. And, on top of a "
		"classic way of playing, following the Finkel rules, I've provided my "
		"own twist by giving life to the stones in the Deadly Sins modes. "
		"Pawns thinking for themselves... Unbelievable.\n\n");
	return ;
}

static void	display_first_page(void)
{
	clear_window();
	printf("GUIDE - PAGE 1/3\n\n");
	printf("This board game is a race game. Two players, seven stones each, "
		"and the winner is whoever led all of their stones beyond the finish "
		"line. To aid us, a dice going from 0 to 4. Let's explain the "
		"rules...\n\n");
	printf("             ___ ___ ___               ___ ___ ___     \n");
	printf("            |▒▒▒|   |▒▒▒|             | 4 | 5 |   |    \n");
	printf("            |▒▒▒|___|▒▒▒|             |___|___|___|    \n");
	printf("            |   |   |   |             | 3 | 6 |   |    \n");
	printf("            |___|___|___|             |___|___|___|    \n");
	printf("            |   |   |   |             | 2 | 7 |   |    \n");
	printf("            |___|___|___|             |___|___|___|    \n");
	printf("            |   |▒▒▒|   |             | 1 | 8 |   |    \n");
	printf("            |___|▒▒▒|___|             |___|___|___|    \n");
	printf("        ooooooo |   | ooooooo     ooooooo | 9 | ooooooo\n");
	printf("                |___|                     |___|        \n");
	printf("                |   |                     |10 |        \n");
	printf("             ___|___|___               _x_|___|_x_     \n");
	printf("            |▒▒▒|   |▒▒▒|             |14 |11 |   |    \n");
	printf("            |▒▒▒|___|▒▒▒|             |___|___|___|    \n");
	printf("            |   |   |   |             |13 |12 |   |    \n");
	printf("            |___|___|___|             |___|___|___|    \n\n");
	printf("\n");
	printf("See where the stones are placed? The cell right above them is the "
		"first cell of each player's racetracks: left for Player One, right "
		"Player Two. The racetrack of Player One has been detailed in the "
		"second drawing. The last cell is beyond the 14th, an invisible cell "
		"outside of the board: when a stone reaches it, it wins. As for Player "
		"Two, it's the exact same racetrack, but mirrored: it both starts and "
		"ends on the right side of the board. The middle road, from cell n°5 "
		"to n°12, is where both players can encounter each other.\n\n");
	printf("Each turn, the dice is thrown for a value between 0 and 4, which "
		"represents the number of cells forward a stone must go. You can pick "
		"any of your stones, and you cannot pass your turn. Your turn only "
		"passes if the dice gives 0 or if no stone can be moved. Indeed, your "
		"stone can step on an enemy, but not an ally, and a captured stone "
		"simply goes back to its homebase, as if it never roamed the board at "
		"all. And as for going beyond the finish line, you need the exact "
		"throw: it truly is an invisible extra cell.\n\n");
	printf("Now, see the gray cells on the left drawing? Such a cell is called "
		"a rosette. Stepping upon one protects the stone from being captured, "
		"and it gives you another turn.\n\n");
	printf("Let's see the different levels!\n\n");
	press_enter_to_continue();
	return ;
}

static void	display_second_page(void)
{
	clear_window();
	printf("GUIDE - PAGE 2/3\n\n");
	printf("Level 1: Classic Infinite.\n");
	printf("Level 2: Classic Dispatch.\n");
	printf("Level 3: Deadly Sins Infinite.\n");
	printf("Level 4: Deadly Sins Dispatch.\n\n");
	printf("Classic Infinite is what has just been explained. Dispatch is "
		"different in that a stone is now killed upon being captured. When "
		"this happens, no point is earned or lost. You still win the game by "
		"making more stones reach the finish line than your opponent. Once the "
		"game ends, because a player no longer has any stone to play with, if "
		"you both happen to have the same amount of points, it's not a draw: "
		"the one with still a playable stone wins.\n\n");
	printf("As for Deadly Sins, it refers to the stone's movement. The dice "
		"throw is no longer final, it becomes a range of possible movements. "
		"That being said, it doesn't mean you can always pick the cell "
		"yourself. Whichever Deadly Sins stone you move has its own "
		"behavior.\n\n");
	printf("Let's see how Deadly Sins stones pick their cell!\n\n");
	press_enter_to_continue();
	return ;
}

static void	display_third_page(void)
{
	clear_window();
	printf("GUIDE - PAGE 3/3\n\n");
	printf("Lust has only eyes for you. It listens to everything you say and "
		"will go to the cell you pick.\n\n");
	printf("Pride doesn't do well with orders. It rejects what you picked and "
		"goes where it wants. It can also refuse to move just to be a "
		"bother.\n\n");
	printf("Gluttony doesn't think. It just goes the farthest it can.\n\n");
	printf("Sloth would rather be asleep. But since it doesn't have Pride's "
		"force of will, it can't remain immobile if you tell it to move, and "
		"so it picks the closest available cell.\n\n");
	printf("Envy lacks a personality of its own. It goes all over the place, "
		"not able to settle for a pattern. The cell is picked at random.\n\n");
	printf("Wrath is a slave to bloodlust. When it notices an enemy stone on "
		"the board, it targets it with unyielding focus, ready to step upon "
		"allies to see the enemy perish. The rest of the time, it moves to the "
		"closest available cell so as to stick around longer: this way, it can "
		"wait for enemies to arrive.\n\n");
	printf("Greed follows a set of priorities: the closest rosette, then the "
		"closest enemy, and finally the finish line.\n\n");
	press_enter_to_continue();
	return ;
}
