static const char *colorname[] = {

/* 8 normal colors */
	"#313539", /* black   */
	"#b02626", /* red     */
	"#40a62f", /* green   */
	"#f2e635", /* yellow  */
	"#314ad0", /* blue    */
	"#b30ad0", /* magenta */
	"#32d0fc", /* cyan    */
	"#acadb1", /* white   */

	/* 8 bright colors */
	"#676f78", /* black   */
	"#b55454", /* red     */
	"#78a670", /* green   */
	"#faf380", /* yellow  */
	"#707fd0", /* blue    */
	"#c583d0", /* magenta */
	"#8adaf1", /* cyan    */
	"#e0e3e7", /* white   */


[256] = "#d8dee9", /* default foreground colour */
[257] = "#191919", /* default background colour */
[258] = "#C3BAC6", /*575268*/
//e0e3e7

};

unsigned int defaultfg = 256;
//unsigned int defaultbg = 257;
unsigned int defaultbg = 0;
static unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
unsigned int bg = 257, bgUnfocused = 257;
