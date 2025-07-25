#include "twenty_squares.h"

void	print_column2(int line, int player_id, t_cell *cells)
{
	if (!line)
	{
		printf("________________");
	}
	else if (line == 1 || line == 2 || line == 4 || line == 6 || line == 7
		|| line == 9 || line == 11 || line == 12 || line == 14 || line == 21
		|| line == 22 || line == 24 || line == 26 || line == 27 || line == 29
		|| line == 31 || line == 32 || line == 34 || line == 36 || line == 37
		|| line == 39)
	{
		printf("|               ");
	}
	else if (line == 5 || line == 10 || line == 15 || line == 25 || line == 30
		|| line == 35 || line == 40)
	{
		printf("|_______________");
	}
	else if (line == 16 || line == 17 || line == 19 || line == 20)
	{
		printf("|▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
	}
	else if (line == 41)
	{
		printf("                ");
	}
	else if (line == 3)
	{
		/* Cell Coordinate 21 */
		if (!cells[1].stone)
			printf("|               ");
		else
		{
			if (cells[1].stone->id == ID_STONE_ONE)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|      [01]     " : "|       01      ");
			else if (cells[1].stone->id == ID_STONE_TWO)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|      [02]     " : "|       02      ");
			else if (cells[1].stone->id == ID_STONE_THREE)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|      [03]     " : "|       03      ");
			else if (cells[1].stone->id == ID_STONE_FOUR)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|      [04]     " : "|       04      " );
			else if (cells[1].stone->id == ID_STONE_FIVE)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|      [05]     " : "|       05      ");
			else if (cells[1].stone->id == ID_STONE_SIX)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|      [06]     " : "|       06      ");
			else if (cells[1].stone->id == ID_STONE_SEVEN)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|      [07]     " : "|       07      ");
			else if (cells[1].stone->id == ID_STONE_LUST)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|     [Lust]    " : "|      Lust     ");
			else if (cells[1].stone->id == ID_STONE_PRIDE)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|    [Pride]    " : "|     Pride     ");
			else if (cells[1].stone->id == ID_STONE_GLUTTONY)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|   [Gluttony]  " : "|    Gluttony   ");
			else if (cells[1].stone->id == ID_STONE_SLOTH)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|    [Sloth]    " : "|     Sloth     ");
			else if (cells[1].stone->id == ID_STONE_ENVY)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|     [Envy]    " : "|      Envy     ");
			else if (cells[1].stone->id == ID_STONE_WRATH)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|    [Wrath]    " : "|     Wrath     ");
			else if (cells[1].stone->id == ID_STONE_GREED)
				printf("%s", cells[1].stone->player_id == player_id ?
					"|    [Greed]    " : "|     Greed     ");
		}
	}
	else if (line == 8)
	{
		/* Cell Coordinate 22 */
		if (!cells[4].stone)
			printf("|               ");
		else
		{
			if (cells[4].stone->id == ID_STONE_ONE)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|      [01]     " : "|       01      ");
			else if (cells[4].stone->id == ID_STONE_TWO)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|      [02]     " : "|       02      ");
			else if (cells[4].stone->id == ID_STONE_THREE)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|      [03]     " : "|       03      ");
			else if (cells[4].stone->id == ID_STONE_FOUR)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|      [04]     " : "|       04      " );
			else if (cells[4].stone->id == ID_STONE_FIVE)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|      [05]     " : "|       05      ");
			else if (cells[4].stone->id == ID_STONE_SIX)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|      [06]     " : "|       06      ");
			else if (cells[4].stone->id == ID_STONE_SEVEN)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|      [07]     " : "|       07      ");
			else if (cells[4].stone->id == ID_STONE_LUST)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|     [Lust]    " : "|      Lust     ");
			else if (cells[4].stone->id == ID_STONE_PRIDE)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|    [Pride]    " : "|     Pride     ");
			else if (cells[4].stone->id == ID_STONE_GLUTTONY)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|   [Gluttony]  " : "|    Gluttony   ");
			else if (cells[4].stone->id == ID_STONE_SLOTH)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|    [Sloth]    " : "|     Sloth     ");
			else if (cells[4].stone->id == ID_STONE_ENVY)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|     [Envy]    " : "|      Envy     ");
			else if (cells[4].stone->id == ID_STONE_WRATH)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|    [Wrath]    " : "|     Wrath     ");
			else if (cells[4].stone->id == ID_STONE_GREED)
				printf("%s", cells[4].stone->player_id == player_id ?
					"|    [Greed]    " : "|     Greed     ");
		}
	}
	else if (line == 13)
	{
		/* Cell Coordinate 23 */
		if (!cells[7].stone)
			printf("|               ");
		else
		{
			if (cells[7].stone->id == ID_STONE_ONE)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|      [01]     " : "|       01      ");
			else if (cells[7].stone->id == ID_STONE_TWO)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|      [02]     " : "|       02      ");
			else if (cells[7].stone->id == ID_STONE_THREE)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|      [03]     " : "|       03      ");
			else if (cells[7].stone->id == ID_STONE_FOUR)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|      [04]     " : "|       04      " );
			else if (cells[7].stone->id == ID_STONE_FIVE)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|      [05]     " : "|       05      ");
			else if (cells[7].stone->id == ID_STONE_SIX)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|      [06]     " : "|       06      ");
			else if (cells[7].stone->id == ID_STONE_SEVEN)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|      [07]     " : "|       07      ");
			else if (cells[7].stone->id == ID_STONE_LUST)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|     [Lust]    " : "|      Lust     ");
			else if (cells[7].stone->id == ID_STONE_PRIDE)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|    [Pride]    " : "|     Pride     ");
			else if (cells[7].stone->id == ID_STONE_GLUTTONY)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|   [Gluttony]  " : "|    Gluttony   ");
			else if (cells[7].stone->id == ID_STONE_SLOTH)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|    [Sloth]    " : "|     Sloth     ");
			else if (cells[7].stone->id == ID_STONE_ENVY)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|     [Envy]    " : "|      Envy     ");
			else if (cells[7].stone->id == ID_STONE_WRATH)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|    [Wrath]    " : "|     Wrath     ");
			else if (cells[7].stone->id == ID_STONE_GREED)
				printf("%s", cells[7].stone->player_id == player_id ?
					"|    [Greed]    " : "|     Greed     ");
		}
	}
	else if (line == 18)
	{
		/* Cell Coordinate 24 */
		if (!cells[10].stone)
			printf("|▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
		else
		{
			if (cells[10].stone->id == ID_STONE_ONE)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒▒▒[01]▒▒▒▒▒" : "|▒▒▒▒▒▒ 01 ▒▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_TWO)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒▒▒[02]▒▒▒▒▒" : "|▒▒▒▒▒▒ 02 ▒▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_THREE)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒▒▒[03]▒▒▒▒▒" : "|▒▒▒▒▒▒ 03 ▒▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_FOUR)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒▒▒[04]▒▒▒▒▒" : "|▒▒▒▒▒▒ 04 ▒▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_FIVE)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒▒▒[05]▒▒▒▒▒" : "|▒▒▒▒▒▒ 05 ▒▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_SIX)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒▒▒[06]▒▒▒▒▒" : "|▒▒▒▒▒▒ 06 ▒▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_SEVEN)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒▒▒[07]▒▒▒▒▒" : "|▒▒▒▒▒▒ 07 ▒▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_LUST)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒▒[Lust]▒▒▒▒" : "|▒▒▒▒▒ Lust ▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_PRIDE)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒[Pride]▒▒▒▒" : "|▒▒▒▒ Pride ▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_GLUTTONY)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒[Gluttony]▒▒" : "|▒▒▒ Gluttony ▒▒");
			else if (cells[10].stone->id == ID_STONE_SLOTH)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒[Sloth]▒▒▒▒" : "|▒▒▒▒ Sloth ▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_ENVY)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒▒[Envy]▒▒▒▒" : "|▒▒▒▒▒ Envy ▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_WRATH)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒[Wrath]▒▒▒▒" : "|▒▒▒▒ Wrath ▒▒▒▒");
			else if (cells[10].stone->id == ID_STONE_GREED)
				printf("%s", cells[10].stone->player_id == player_id ?
					"|▒▒▒▒[Greed]▒▒▒▒" : "|▒▒▒▒ Greed ▒▒▒▒");
		}
	}
	else if (line == 23)
	{
		/* Cell Coordinate 25 */
		if (!cells[12].stone)
			printf("|               ");
		else
		{
			if (cells[12].stone->id == ID_STONE_ONE)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|      [01]     " : "|       01      ");
			else if (cells[12].stone->id == ID_STONE_TWO)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|      [02]     " : "|       02      ");
			else if (cells[12].stone->id == ID_STONE_THREE)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|      [03]     " : "|       03      ");
			else if (cells[12].stone->id == ID_STONE_FOUR)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|      [04]     " : "|       04      " );
			else if (cells[12].stone->id == ID_STONE_FIVE)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|      [05]     " : "|       05      ");
			else if (cells[12].stone->id == ID_STONE_SIX)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|      [06]     " : "|       06      ");
			else if (cells[12].stone->id == ID_STONE_SEVEN)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|      [07]     " : "|       07      ");
			else if (cells[12].stone->id == ID_STONE_LUST)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|     [Lust]    " : "|      Lust     ");
			else if (cells[12].stone->id == ID_STONE_PRIDE)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|    [Pride]    " : "|     Pride     ");
			else if (cells[12].stone->id == ID_STONE_GLUTTONY)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|   [Gluttony]  " : "|    Gluttony   ");
			else if (cells[12].stone->id == ID_STONE_SLOTH)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|    [Sloth]    " : "|     Sloth     ");
			else if (cells[12].stone->id == ID_STONE_ENVY)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|     [Envy]    " : "|      Envy     ");
			else if (cells[12].stone->id == ID_STONE_WRATH)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|    [Wrath]    " : "|     Wrath     ");
			else if (cells[12].stone->id == ID_STONE_GREED)
				printf("%s", cells[12].stone->player_id == player_id ?
					"|    [Greed]    " : "|     Greed     ");
		}
	}
	else if (line == 28)
	{
		/* Cell Coordinate 26 */
		if (!cells[13].stone)
			printf("|               ");
		else
		{
			if (cells[13].stone->id == ID_STONE_ONE)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|      [01]     " : "|       01      ");
			else if (cells[13].stone->id == ID_STONE_TWO)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|      [02]     " : "|       02      ");
			else if (cells[13].stone->id == ID_STONE_THREE)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|      [03]     " : "|       03      ");
			else if (cells[13].stone->id == ID_STONE_FOUR)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|      [04]     " : "|       04      " );
			else if (cells[13].stone->id == ID_STONE_FIVE)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|      [05]     " : "|       05      ");
			else if (cells[13].stone->id == ID_STONE_SIX)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|      [06]     " : "|       06      ");
			else if (cells[13].stone->id == ID_STONE_SEVEN)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|      [07]     " : "|       07      ");
			else if (cells[13].stone->id == ID_STONE_LUST)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|     [Lust]    " : "|      Lust     ");
			else if (cells[13].stone->id == ID_STONE_PRIDE)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|    [Pride]    " : "|     Pride     ");
			else if (cells[13].stone->id == ID_STONE_GLUTTONY)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|   [Gluttony]  " : "|    Gluttony   ");
			else if (cells[13].stone->id == ID_STONE_SLOTH)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|    [Sloth]    " : "|     Sloth     ");
			else if (cells[13].stone->id == ID_STONE_ENVY)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|     [Envy]    " : "|      Envy     ");
			else if (cells[13].stone->id == ID_STONE_WRATH)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|    [Wrath]    " : "|     Wrath     ");
			else if (cells[13].stone->id == ID_STONE_GREED)
				printf("%s", cells[13].stone->player_id == player_id ?
					"|    [Greed]    " : "|     Greed     ");
		}
	}
	else if (line == 33)
	{
		/* Cell Coordinate 27 */
		if (!cells[15].stone)
			printf("|               ");
		else
		{
			if (cells[15].stone->id == ID_STONE_ONE)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|      [01]     " : "|       01      ");
			else if (cells[15].stone->id == ID_STONE_TWO)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|      [02]     " : "|       02      ");
			else if (cells[15].stone->id == ID_STONE_THREE)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|      [03]     " : "|       03      ");
			else if (cells[15].stone->id == ID_STONE_FOUR)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|      [04]     " : "|       04      " );
			else if (cells[15].stone->id == ID_STONE_FIVE)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|      [05]     " : "|       05      ");
			else if (cells[15].stone->id == ID_STONE_SIX)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|      [06]     " : "|       06      ");
			else if (cells[15].stone->id == ID_STONE_SEVEN)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|      [07]     " : "|       07      ");
			else if (cells[15].stone->id == ID_STONE_LUST)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|     [Lust]    " : "|      Lust     ");
			else if (cells[15].stone->id == ID_STONE_PRIDE)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|    [Pride]    " : "|     Pride     ");
			else if (cells[15].stone->id == ID_STONE_GLUTTONY)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|   [Gluttony]  " : "|    Gluttony   ");
			else if (cells[15].stone->id == ID_STONE_SLOTH)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|    [Sloth]    " : "|     Sloth     ");
			else if (cells[15].stone->id == ID_STONE_ENVY)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|     [Envy]    " : "|      Envy     ");
			else if (cells[15].stone->id == ID_STONE_WRATH)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|    [Wrath]    " : "|     Wrath     ");
			else if (cells[15].stone->id == ID_STONE_GREED)
				printf("%s", cells[15].stone->player_id == player_id ?
					"|    [Greed]    " : "|     Greed     ");
		}
	}
	else if (line == 38)
	{
		/* Cell Coordinate 28 */
		if (!cells[18].stone)
			printf("|               ");
		else
		{
			if (cells[18].stone->id == ID_STONE_ONE)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|      [01]     " : "|       01      ");
			else if (cells[18].stone->id == ID_STONE_TWO)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|      [02]     " : "|       02      ");
			else if (cells[18].stone->id == ID_STONE_THREE)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|      [03]     " : "|       03      ");
			else if (cells[18].stone->id == ID_STONE_FOUR)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|      [04]     " : "|       04      " );
			else if (cells[18].stone->id == ID_STONE_FIVE)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|      [05]     " : "|       05      ");
			else if (cells[18].stone->id == ID_STONE_SIX)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|      [06]     " : "|       06      ");
			else if (cells[18].stone->id == ID_STONE_SEVEN)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|      [07]     " : "|       07      ");
			else if (cells[18].stone->id == ID_STONE_LUST)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|     [Lust]    " : "|      Lust     ");
			else if (cells[18].stone->id == ID_STONE_PRIDE)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|    [Pride]    " : "|     Pride     ");
			else if (cells[18].stone->id == ID_STONE_GLUTTONY)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|   [Gluttony]  " : "|    Gluttony   ");
			else if (cells[18].stone->id == ID_STONE_SLOTH)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|    [Sloth]    " : "|     Sloth     ");
			else if (cells[18].stone->id == ID_STONE_ENVY)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|     [Envy]    " : "|      Envy     ");
			else if (cells[18].stone->id == ID_STONE_WRATH)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|    [Wrath]    " : "|     Wrath     ");
			else if (cells[18].stone->id == ID_STONE_GREED)
				printf("%s", cells[18].stone->player_id == player_id ?
					"|    [Greed]    " : "|     Greed     ");
		}
	}
	return ;
}
