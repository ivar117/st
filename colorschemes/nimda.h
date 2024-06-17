static const char *colorname[] = {

//*.foreground:  #eeeeee
//*.background:  #212121
//
//*.color0:       #212121
//*.color1:       #d75f5f
//*.color2:       #87af5f
//*.color3:       #f7ca88
//*.color4:       #8197bf
//*.color5:       #a293cb
//*.color6:       #616161
//*.color7:       #dddddd
//*.color8:       #616161
//*.color9:       #d75f5f
//*.color10:      #87af5f
//*.color11:      #f7ca88
//*.color12:      #8197bf
//*.color13:      #a293cb
//*.color14:      #f7ca88
//*.color15:      #eeeeee

/* 8 normal colors */
	"#212121",
	"#d75f5f",
	"#87af5f",
	"#f7ca88",
	"#8197bf",
	"#a293cb",
	"#616161",
	"#dddddd",

	/* 8 bright colors */
	"#616161",
	"#d75f5f",
	"#87af5f",
	"#f7ca88",
	"#8197bf",
	"#a293cb",
	"#f7ca88",
	"#eeeeee",


[256] = "#eeeeee", /* default foreground colour */
[257] = "#212121", /* default background colour */
[258] = "#eeeeee", /* default cursor color */
	
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 256;
//unsigned int defaultbg = 257;
unsigned int defaultbg = 0;
static unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
unsigned int bg = 257, bgUnfocused = 257;
