//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "dwm_vpnstatus", 5, 0},
  {"", "dwm_pomo", 1, 0},
  {"墳 ", "dwm_volume", 0, 10},
  {" ", "brightnessctl| sed -n '2 p'|awk '{print substr($4, 2, length($4) - 2)}'", 0, 11},
	{" ", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g", 5, 0},

	{"", "date '+%b %d %I:%M:%S %p'", 1, 0},
  {"", "dwm_batterystatus", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
