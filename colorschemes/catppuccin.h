static const char *colorname[] = {
/* 8 normal colors */
	"#6E6C7E",
	"#F28FAD",
	"#ABE9B3",
	"#FAE3B0",
	"#96CDFB",
	"#F5C2E7",
	"#89DCEB",
	"#D9E0EE",

	/* 8 bright colors */
	"#988BA2",
	"#F28FAD",
	"#ABE9B3",
	"#FAE3B0",
	"#96CDFB",
	"#F5C2E7",
	"#89DCEB",
	"#D9E0EE",



[256] = "#D9E0EE", /* default foreground colour */
[257] = "#1E1E2E", /* default background colour */
[258] = "#C3BAC6", /*575268*/
//[258] = "#ABE9B3", /*575268*/
	
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
