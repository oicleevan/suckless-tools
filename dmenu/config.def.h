/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Ubuntu Mono Nerd Font:size=11:antialias=true:hinting=true",
	"monospace:size=9:antialias=true:hinting=true"
};
static const char *prompt      = "Run: ";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#BBC2CF", "#23252D" },
	[SchemeSel] = { "#BBC2CF", "#2F343F" },
 	[SchemeSelHighlight] = { "#ffc978", "#23252D" },
 	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut] = { "#BBC2CF", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 18;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
