// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},
    {"Temp:",
     "curl wttr.in/?T | sed '4q;d' |gawk 'match($0, /([+-]?[0-9()]+) °C/, "
     "res){ print res[1] space \" °C\"}'",
     120, 0},
    {"", "date '+%b %d (%a) %I:%M:%S%p'", 1, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
