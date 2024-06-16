/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
    /*Black:*/          "#1E2127",
    /*Red:*/            "#E06C75",
    /*Green:*/          "#98C379",
    /*Yellow:*/         "#D19A66",
    /*Blue:*/           "#61AFEF",
    /*Magenta:*/        "#C678DD",
    /*Cyan:*/           "#56B6C2",
    /*White:*/          "#ABB2BF",


	/* 8 bright colors */
    /*Bright Black:*/   "#5C6370",
    /*Bright Red:*/     "#E06C75",
    /*Bright Green:*/   "#98C379",
    /*Bright Yellow:*/  "#D19A66",
    /*Light Blue:*/     "#61AFEF",
    /*Light Magenta:*/  "#C678DD",
    /*Light Cyan:*/     "#56B6C2",
    /*Bright White:*/   "#FFFFFF",


[256] = "#ABB2BF", /* default foreground colour */
[257] = "#1E2127", /* default background colour */
[258] = "#5C6370", /*cursor color*/

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
