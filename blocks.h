//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
  // {" 🐧 ", "/home/zaedus/.dwm/scripts/kernel",       360,		        2},

	{" 🔺 ", "/home/zaedus/.dwm/scripts/upt",		       60,		        2},

	{" 📦 ", "/home/zaedus/.dwm/scripts/pacupdate",		 360,		        9},
	
	{" 💻 ", "/home/zaedus/.dwm/scripts/memory",	     6,		          1},

	{" 🔊 ", "/home/zaedus/.dwm/scripts/volume",			 10,		          15},

	{" 🔋 ", "/home/zaedus/.dwm/scripts/battery",      20,            11},

	{" 🕑 ", "/home/zaedus/.dwm/scripts/clock",			   1,		          0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
