/* user and group to drop privileges to */
static const char *user  = "root";
static const char *group = "root";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#FF652F";

/* text size (must be a valid size) */
// static const char * font_name = "-adobe-*-*-r-*-*-34-*-*-*-*-*-*-*";
static const char * font_name = "6x13";
/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=4;
/*Enable Pixelation*/
// #define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;
