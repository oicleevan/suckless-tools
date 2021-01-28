/* user and group to drop privileges to */
static const char *user  = "eo";
static const char *group = "eo";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Enable blur*/
#define BLUR

/*Set blur radius*/
static const int blurRadius=5;

/*Enable Pixelation*/
//#define PIXELATION

/*Set pixelation radius*/
static const int pixelSize=0;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#bbc2cf";

/* text size (must be a valid size) */
static const char * font_name = "-misc-dejavu sans condensed-medium-r-semicondensed--0-0-0-0-p-0-iso8859-16";
