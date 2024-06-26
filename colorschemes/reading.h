static const char *colorname[] = {

/* 8 normal colors */
  [0] = "#2C2D2E", /* black   */
  [1] = "#fb4934", /* red     */
  [2] = "#b8bb26", /* green   */
  [3] = "#fabd2f", /* yellow  */
  [4] = "#83a598", /* blue    */
  [5] = "#d3869b", /* magenta */
  [6] = "#8ec07c", /* cyan    */
  [7] = "#d5c4a1", /* white   */

  /* 8 bright colors */
  [8]  = "#665c54",  /* black   */
  [9]  = "#fb4934",  /* red     */
  [10] = "#b8bb26", /* green   */
  [11] = "#fabd2f", /* yellow  */
  [12] = "#83a598", /* blue    */
  [13] = "#d3869b", /* magenta */
  [14] = "#8ec07c", /* cyan    */
  [15] = "#fbf1c7", /* white   */

  /* special colors */
  [256] = "#2C2D2E", /* background */
  [257] = "#9D978E", /* foreground */
 // [258] = "#FABD2F",     /* cursor */
  [258] = "#9D978E",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
 unsigned int bg = 256, bgUnfocused = 256;
