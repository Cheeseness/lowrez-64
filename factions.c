#include "factions.h"

void factions_setup()
{
	for (int i = 0; i < sizeof(faction_disposition)/sizeof(int); ++i)
	{
		faction_disposition[i] = -10;
	}

	faction_colors[FACTION_NONE] = FACTION_COLOR_NONE;
	faction_colors[FACTION_SNEEB] = FACTION_COLOR_SNEEB;
	faction_colors[FACTION_KRULL] = FACTION_COLOR_KRULL;
	faction_colors[FACTION_PLINK] = FACTION_COLOR_PLINK;


}

void faction_update_disposition(int faction, int adjustment)
{
	faction_disposition[faction] += adjustment;
}

int faction_get_disposition(int faction)
{
	return faction_disposition[faction];
}

