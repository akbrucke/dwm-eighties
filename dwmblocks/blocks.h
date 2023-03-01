//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

//	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
        {"  ", "/home/hedies23/.local/bin/kernel",		360,		      2},

	{"  ", "/home/hedies23/.local/bin/upt",		60,		      2},

	{"  ", "/home/hedies23/.local/bin/xbpsupdate",  	360,		      9},

	{"  ", "/home/hedies23/.local/bin/memory",	 	6,		      1},

	{"  ", "/home/hedies23/.local/bin/volume",     	360,		      10},

	{"  ", "/home/hedies23/.local/bin/clock",	     	60,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 2;
