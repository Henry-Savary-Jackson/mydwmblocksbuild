// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},
    {"", "curl wttr.in/?format=1 ", 120, 0},
    {"  ",
     "iwctl station wlan0 show | grep 'Connected network' | awk '{print $3}'",
     10, 0},
    {"", "volumeinfo", 1, 0},
    {"", "batteryinfo", 1, 0},
    //    {"", "get_wifi_network", 10, 0},
    {"", "date '+%b %d (%a) %I:%M:%S%p'", 1, 0},

};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
