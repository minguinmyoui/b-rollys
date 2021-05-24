// 0x070092F0 - 0x07009308
static const Lights1 wf_seg7_lights_070092F0 = gdSPDefLights1(
    255/4, 255/4, 255/4,
    0xff, 0xff, 0xff, LIGHT_X, LIGHT_Y, LIGHT_Z
);

//// 0x07009308 - 0x070093F8
//static const Vtx wf_seg7_vertex_07009308[] = {
//    {{{  -255,    282,  -1151}, 0, {  4822,      0}, {0x08, 0x7b, 0x1c, 0xff}}},
//    {{{  -127,    160,   -654}, 0, {  3800,    224}, {0x08, 0x7b, 0x1c, 0xff}}},
//    {{{     0,    180,   -778}, 0, {  4052,    478}, {0x08, 0x7b, 0x1c, 0xff}}},
//    {{{  -255,   -281,   1152}, 0, {    88,      0}, {0x00, 0x7a, 0x22, 0xff}}},
//    {{{   256,   -281,   1152}, 0, {    88,    990}, {0x00, 0x7a, 0x22, 0xff}}},
//    {{{  -127,   -193,    837}, 0, {   740,    224}, {0x00, 0x7a, 0x22, 0xff}}},
//    {{{  -255,   -281,   1152}, 0, {    88,      0}, {0xf6, 0x7a, 0x1e, 0xff}}},
//    {{{  -127,   -193,    837}, 0, {   740,    224}, {0xf6, 0x7a, 0x1e, 0xff}}},
//    {{{  -255,      8,    -32}, 0, {  2524,      0}, {0xf6, 0x7a, 0x1e, 0xff}}},
//    {{{  -127,   -193,    837}, 0, {   740,    224}, {0x2d, 0x72, 0x1e, 0xff}}},
//    {{{     0,    -42,     91}, 0, {  2258,    478}, {0x2d, 0x72, 0x1e, 0xff}}},
//    {{{  -127,      8,     91}, 0, {  2282,    224}, {0x2d, 0x72, 0x1e, 0xff}}},
//    {{{   128,   -194,    713}, 0, {   980,    734}, {0x0d, 0x7b, 0x1b, 0xff}}},
//    {{{     0,    -42,     91}, 0, {  2258,    478}, {0x0d, 0x7b, 0x1b, 0xff}}},
//    {{{  -127,   -193,    837}, 0, {   740,    224}, {0x0d, 0x7b, 0x1b, 0xff}}},
//};
//
//// 0x070093F8 - 0x070094E8
//static const Vtx wf_seg7_vertex_070093F8[] = {
//    {{{   256,   -281,   1152}, 0, {    88,    990}, {0x0a, 0x7c, 0x15, 0xff}}},
//    {{{   128,   -194,    713}, 0, {   980,    734}, {0x0a, 0x7c, 0x15, 0xff}}},
//    {{{  -127,   -193,    837}, 0, {   740,    224}, {0x0a, 0x7c, 0x15, 0xff}}},
//    {{{  -127,   -193,    837}, 0, {   740,    224}, {0xe2, 0x76, 0x20, 0xff}}},
//    {{{  -127,      8,     91}, 0, {  2282,    224}, {0xe2, 0x76, 0x20, 0xff}}},
//    {{{  -255,      8,    -32}, 0, {  2524,      0}, {0xe2, 0x76, 0x20, 0xff}}},
//    {{{  -127,    160,   -654}, 0, {  3800,    224}, {0x00, 0x7b, 0x1e, 0xff}}},
//    {{{  -255,    282,  -1151}, 0, {  4822,      0}, {0x00, 0x7b, 0x1e, 0xff}}},
//    {{{  -255,      8,    -32}, 0, {  2524,      0}, {0x00, 0x7b, 0x1e, 0xff}}},
//    {{{  -127,      8,     91}, 0, {  2282,    224}, {0xe9, 0x7a, 0x18, 0xff}}},
//    {{{  -127,    160,   -654}, 0, {  3800,    224}, {0xe9, 0x7a, 0x18, 0xff}}},
//    {{{  -255,      8,    -32}, 0, {  2524,      0}, {0xe9, 0x7a, 0x18, 0xff}}},
//    {{{   256,   -281,   1152}, 0, {    88,    990}, {0xdb, 0x75, 0x1c, 0xff}}},
//    {{{   256,    282,  -1151}, 0, {  4822,    990}, {0xdb, 0x75, 0x1c, 0xff}}},
//    {{{   128,     28,   -281}, 0, {  3014,    734}, {0xdb, 0x75, 0x1c, 0xff}}},
//};
//
//// 0x070094E8 - 0x070095D8
//static const Vtx wf_seg7_vertex_070094E8[] = {
//    {{{   256,   -281,   1152}, 0, {    88,    990}, {0xf6, 0x7b, 0x1b, 0xff}}},
//    {{{   128,     28,   -281}, 0, {  3014,    734}, {0xf6, 0x7b, 0x1b, 0xff}}},
//    {{{   128,   -194,    713}, 0, {   980,    734}, {0xf6, 0x7b, 0x1b, 0xff}}},
//    {{{   256,    282,  -1151}, 0, {  4822,    990}, {0x00, 0x7a, 0x21, 0xff}}},
//    {{{  -255,    282,  -1151}, 0, {  4822,      0}, {0x00, 0x7a, 0x21, 0xff}}},
//    {{{     0,    180,   -778}, 0, {  4052,    478}, {0x00, 0x7a, 0x21, 0xff}}},
//    {{{   256,    282,  -1151}, 0, {  4822,    990}, {0x1c, 0x75, 0x26, 0xff}}},
//    {{{     0,     99,   -405}, 0, {  3290,    478}, {0x1c, 0x75, 0x26, 0xff}}},
//    {{{   128,     28,   -281}, 0, {  3014,    734}, {0x1c, 0x75, 0x26, 0xff}}},
//    {{{   256,    282,  -1151}, 0, {  4822,    990}, {0xf6, 0x7b, 0x1a, 0xff}}},
//    {{{     0,    180,   -778}, 0, {  4052,    478}, {0xf6, 0x7b, 0x1a, 0xff}}},
//    {{{     0,     99,   -405}, 0, {  3290,    478}, {0xf6, 0x7b, 0x1a, 0xff}}},
//    {{{     0,     99,   -405}, 0, {  3290,    478}, {0x27, 0x75, 0x1a, 0xff}}},
//    {{{   128,   -194,    713}, 0, {   980,    734}, {0x27, 0x75, 0x1a, 0xff}}},
//    {{{   128,     28,   -281}, 0, {  3014,    734}, {0x27, 0x75, 0x1a, 0xff}}},
//};
//
//// 0x070095D8 - 0x07009698
//static const Vtx wf_seg7_vertex_070095D8[] = {
//    {{{  -127,    160,   -654}, 0, {  3800,    224}, {0x06, 0x7b, 0x1a, 0xff}}},
//    {{{     0,     99,   -405}, 0, {  3290,    478}, {0x06, 0x7b, 0x1a, 0xff}}},
//    {{{     0,    180,   -778}, 0, {  4052,    478}, {0x06, 0x7b, 0x1a, 0xff}}},
//    {{{  -127,    160,   -654}, 0, {  3800,    224}, {0xf7, 0x79, 0x22, 0xff}}},
//    {{{     0,    -42,     91}, 0, {  2258,    478}, {0xf7, 0x79, 0x22, 0xff}}},
//    {{{     0,     99,   -405}, 0, {  3290,    478}, {0xf7, 0x79, 0x22, 0xff}}},
//    {{{     0,     99,   -405}, 0, {  3290,    478}, {0xe9, 0x78, 0x22, 0xff}}},
//    {{{     0,    -42,     91}, 0, {  2258,    478}, {0xe9, 0x78, 0x22, 0xff}}},
//    {{{   128,   -194,    713}, 0, {   980,    734}, {0xe9, 0x78, 0x22, 0xff}}},
//    {{{     0,    -42,     91}, 0, {  2258,    478}, {0x2d, 0x74, 0x17, 0xff}}},
//    {{{  -127,    160,   -654}, 0, {  3800,    224}, {0x2d, 0x74, 0x17, 0xff}}},
//    {{{  -127,      8,     91}, 0, {  2282,    224}, {0x2d, 0x74, 0x17, 0xff}}},
//};

Vtx wf_dirt_ramp_vtx[] = {
	{{{-3840+4096,	-794+1075,	-2688+1533},0,	{6374,	1377},{0xC4,	0x70,	0xFD,	0xFF}}},
	{{{-3840+3983,	-794+1018,	-2688+1709},0,	{5429,	602},{0xC4,	0x70,	0xFD,	0xFF}}},
	{{{-3840+3978,	-794+1023,	-2688+2011},0,	{5384,	-1924},{0xC4,	0x70,	0xFD,	0xFF}}},
	{{{-3840+3978,	-794+1023,	-2688+2011},0,	{5384,	-1924},{0xFE,	0x77,	0x2D,	0xFF}}},
	{{{-3840+3585,	-794+949,	-2688+2188},0,	{2100,	-4093},{0xFE,	0x77,	0x2D,	0xFF}}},
	{{{-3840+4096,	-794+957,	-2688+2191},0,	{6374,	-4122},{0xFE,	0x77,	0x2D,	0xFF}}},
	{{{-3840+3706,	-794+1004,	-2688+1893},0,	{3111,	-1626},{0x1,	0x7D,	0x18,	0xFF}}},
	{{{-3840+3586,	-794+1075,	-2688+1530},0,	{2104,	1407},{0x1,	0x7D,	0x18,	0xFF}}},
	{{{-3840+3585,	-794+949,	-2688+2188},0,	{2100,	-4093},{0x1,	0x7D,	0x18,	0xFF}}},
	{{{-3840+3586,	-794+1075,	-2688+1530},0,	{2104,	1407},{0x0,	0x7E,	0x12,	0xFF}}},
	{{{-3840+3708,	-794+1041,	-2688+1768},0,	{3124,	-583},{0x0,	0x7E,	0x12,	0xFF}}},
	{{{-3840+4096,	-794+1075,	-2688+1533},0,	{6374,	1377},{0x0,	0x7E,	0x12,	0xFF}}},
	{{{-3840+4096,	-794+957,	-2688+2191},0,	{6374,	-4122},{0x22,	0x78,	0x16,	0xFF}}},
	{{{-3840+4096,	-794+1075,	-2688+1533},0,	{6374,	1377},{0x22,	0x78,	0x16,	0xFF}}},
	{{{-3840+3978,	-794+1023,	-2688+2011},0,	{5384,	-1924},{0x22,	0x78,	0x16,	0xFF}}},
	{{{-3840+3585,	-794+949,	-2688+2188},0,	{2100,	-4093},{0xF0,	0x7D,	0x11,	0xFF}}},
	{{{-3840+3978,	-794+1023,	-2688+2011},0,	{5384,	-1924},{0xF0,	0x7D,	0x11,	0xFF}}},
	{{{-3840+3706,	-794+1004,	-2688+1893},0,	{3111,	-1626},{0xF0,	0x7D,	0x11,	0xFF}}},
	{{{-3840+3978,	-794+1023,	-2688+2011},0,	{5384,	-1924},{0xF8,	0x7F,	0xFE,	0xFF}}},
	{{{-3840+3983,	-794+1018,	-2688+1709},0,	{5429,	602},{0xF8,	0x7F,	0xFE,	0xFF}}},
	{{{-3840+3706,	-794+1004,	-2688+1893},0,	{3111,	-1626},{0xF8,	0x7F,	0xFE,	0xFF}}},
	{{{-3840+3983,	-794+1018,	-2688+1709},0,	{5429,	602},{0x12,	0x79,	0x24,	0xFF}}},
	{{{-3840+3708,	-794+1041,	-2688+1768},0,	{3124,	-583},{0x12,	0x79,	0x24,	0xFF}}},
	{{{-3840+3706,	-794+1004,	-2688+1893},0,	{3111,	-1626},{0x12,	0x79,	0x24,	0xFF}}},
	{{{-3840+3586,	-794+1075,	-2688+1530},0,	{2104,	1407},{0xDD,	0x75,	0x23,	0xFF}}},
	{{{-3840+3706,	-794+1004,	-2688+1893},0,	{3111,	-1626},{0xDD,	0x75,	0x23,	0xFF}}},
	{{{-3840+3708,	-794+1041,	-2688+1768},0,	{3124,	-583},{0xDD,	0x75,	0x23,	0xFF}}},
	{{{-3840+3708,	-794+1041,	-2688+1768},0,	{3124,	7504},{0x14,	0x73,	0x32,	0xFF}}},
	{{{-3840+3983,	-794+1018,	-2688+1709},0,	{5429,	7893},{0x14,	0x73,	0x32,	0xFF}}},
	{{{-3840+4096,	-794+1075,	-2688+1533},0,	{6374,	7306},{0x14,	0x73,	0x32,	0xFF}}},
};

Vtx wf_dl_wood_ramp[] = {
	{{{-3840+4096,	-794+957,	-2688+2191},0,	{1006,	1521},{0x0,	0x7E,	0xF,	0xFF}}},
	{{{-3840+3585,	-794+765,	-2688+3840},0,	{-9,	-517},{0x0,	0x7E,	0xF,	0xFF}}},
	{{{-3840+4097,	-794+765,	-2688+3840},0,	{1006,	-517},{0x0,	0x7E,	0xF,	0xFF}}},
	{{{-3840+4096,	-794+957,	-2688+2191},0,	{1006,	1521},{0xFE,	0x7E,	0xE,	0xFF}}},
	{{{-3840+3585,	-794+949,	-2688+2188},0,	{-9,	1512},{0xFE,	0x7E,	0xE,	0xFF}}},
	{{{-3840+3585,	-794+765,	-2688+3840},0,	{-9,	-517},{0xFE,	0x7E,	0xE,	0xFF}}},
	{{{-3840+742,	-794+2561,	-2688+2281},0,	{7106,	29063},{0x0,	0x0,	0x81,	0xFF}}},
	{{{-3840+742,	-794+2620,	-2688+2281},0,	{7106,	29471},{0x0,	0x0,	0x81,	0xFF}}},
	{{{-3840+1766,	-794+2620,	-2688+2281},0,	{-16,	29471},{0x0,	0x0,	0x81,	0xFF}}},
	{{{-3840+1766,	-794+2561,	-2688+2281},0,	{-16,	29063},{0x0,	0x0,	0x81,	0xFF}}},
	{{{-3840+742,	-794+2561,	-2688+2414},0,	{974,	29677},{0x81,	0x0,	0x0,	0xFF}}},
	{{{-3840+742,	-794+2620,	-2688+2414},0,	{974,	30053},{0x81,	0x0,	0x0,	0xFF}}},
	{{{-3840+742,	-794+2620,	-2688+2281},0,	{156,	30053},{0x81,	0x0,	0x0,	0xFF}}},
	{{{-3840+742,	-794+2561,	-2688+2281},0,	{156,	29677},{0x81,	0x0,	0x0,	0xFF}}},
	{{{-3840+1766,	-794+2620,	-2688+2281},0,	{4552,	31363},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+742,	-794+2620,	-2688+2281},0,	{-988,	31363},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+742,	-794+2620,	-2688+2414},0,	{-988,	30053},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+1766,	-794+2620,	-2688+2414},0,	{4552,	30053},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+1766,	-794+2561,	-2688+2414},0,	{1996,	28657},{0x0,	0x0,	0x7F,	0xFF}}},
	{{{-3840+1766,	-794+2620,	-2688+2414},0,	{1996,	29063},{0x0,	0x0,	0x7F,	0xFF}}},
	{{{-3840+742,	-794+2620,	-2688+2414},0,	{-5156,	29063},{0x0,	0x0,	0x7F,	0xFF}}},
	{{{-3840+742,	-794+2561,	-2688+2414},0,	{-5156,	28657},{0x0,	0x0,	0x7F,	0xFF}}},
	{{{-3840+1766,	-794+2561,	-2688+2281},0,	{974,	29063},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-3840+1766,	-794+2620,	-2688+2281},0,	{974,	29471},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-3840+1766,	-794+2620,	-2688+2414},0,	{-16,	29471},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-3840+1766,	-794+2561,	-2688+2414},0,	{-16,	29063},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-3840+1766,	-794+2561,	-2688+2414},0,	{4552,	30053},{0x0,	0x81,	0x0,	0xFF}}},
	{{{-3840+742,	-794+2561,	-2688+2414},0,	{-13332,	30053},{0x0,	0x81,	0x0,	0xFF}}},
	{{{-3840+742,	-794+2561,	-2688+2281},0,	{-13332,	31363},{0x0,	0x81,	0x0,	0xFF}}},
	{{{-3840+1766,	-794+2561,	-2688+2281},0,	{4552,	31363},{0x0,	0x81,	0x0,	0xFF}}},
	{{{-3840+3584,	-794+2116,	-2688-909},0,	{-16,	28045},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3584,	-794+2116,	-2688-1278},0,	{-16,	26527},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3227,	-794+2116,	-2688-1278},0,	{1382,	26527},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3227,	-794+2116,	-2688-909},0,	{1382,	28045},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3584,	-794+1575,	-2688-2037},0,	{-16,	23495},{0x0,	0x7F,	0x3,	0xFF}}},
	{{{-3840+3584,	-794+1584,	-2688-2418},0,	{-16,	21973},{0x0,	0x7F,	0x3,	0xFF}}},
	{{{-3840+3227,	-794+1575,	-2688-2037},0,	{1382,	23495},{0x0,	0x7F,	0x3,	0xFF}}},
	{{{-3840+3227,	-794+1584,	-2688-2418},0,	{1382,	21973},{0x0,	0x7F,	0x3,	0xFF}}},
	{{{-3840+3584,	-794+2305,	-2688-515},0,	{-16,	29559},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3227,	-794+2305,	-2688-909},0,	{1382,	28043},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3227,	-794+2305,	-2688-515},0,	{1382,	29559},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3584,	-794+2305,	-2688-909},0,	{-16,	28043},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3584,	-794+1938,	-2688-1278},0,	{-16,	26529},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3227,	-794+1938,	-2688-1658},0,	{1382,	25009},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3227,	-794+1938,	-2688-1278},0,	{1382,	26529},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3584,	-794+1938,	-2688-1658},0,	{-16,	25009},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3584,	-794+1756,	-2688-1658},0,	{-16,	25011},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3227,	-794+1756,	-2688-2037},0,	{1382,	23493},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3227,	-794+1756,	-2688-1658},0,	{1382,	25011},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3584,	-794+1756,	-2688-2037},0,	{-16,	23493},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-3840+3227,	-794+1076,	-2688-3077},0,	{1382,	27819},{0x0,	0x69,	0xB9,	0xFF}}},
	{{{-3840+3227,	-794+1396,	-2688-2608},0,	{1382,	30053},{0x0,	0x69,	0xB9,	0xFF}}},
	{{{-3840+3584,	-794+1396,	-2688-2608},0,	{-16,	30053},{0x0,	0x69,	0xB9,	0xFF}}},
	{{{-3840+3584,	-794+1075,	-2688-3077},0,	{-16,	27817},{0x0,	0x69,	0xB9,	0xFF}}},
	{{{-3840+3584,	-794+1392,	-2688-2418},0,	{-16,	21973},{0x0,	0x7F,	0x3,	0xFF}}},
	{{{-3840+3584,	-794+1396,	-2688-2608},0,	{-16,	21213},{0x0,	0x7F,	0x3,	0xFF}}},
	{{{-3840+3227,	-794+1396,	-2688-2608},0,	{1382,	21213},{0x0,	0x7F,	0x3,	0xFF}}},
	{{{-3840+3227,	-794+1392,	-2688-2418},0,	{1382,	21973},{0x0,	0x7F,	0x3,	0xFF}}},
};

// 0x07009698 - 0x07009780
static const Gfx wf_seg7_dl_07009698[] = {
    //gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1,grassbeta_09004800),
    //gsDPLoadSync(),
    //gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsDPPipeSync(),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wf_dl__5_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 138),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, wf_dl__5_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPLight(&wf_seg7_lights_070092F0.l, 1),
    gsSPLight(&wf_seg7_lights_070092F0.a, 2),
    //gsSPVertex(wf_seg7_vertex_07009308, 15, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    //gsSP1Triangle(12, 13, 14, 0x0),
    //gsSPVertex(wf_seg7_vertex_070093F8, 15, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    //gsSP1Triangle(12, 13, 14, 0x0),
    //gsSPVertex(wf_seg7_vertex_070094E8, 15, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    //gsSP1Triangle(12, 13, 14, 0x0),
    //gsSPVertex(wf_seg7_vertex_070095D8, 12, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    //gsSPEndDisplayList(),
	gsSPVertex(&wf_dirt_ramp_vtx[0], 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(&wf_dirt_ramp_vtx[15], 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	//gsSPVertex(&wf_dirt_ramp_vtx[30], 16, 0),
	//gsSP1Triangle(0, 1, 2, 0),
	//gsSP1Triangle(0, 3, 1, 0),
	//gsSP1Triangle(4, 5, 6, 0),
	//gsSP1Triangle(4, 7, 5, 0),
	//gsSP1Triangle(8, 9, 10, 0),
	//gsSP1Triangle(8, 10, 11, 0),
	//gsSP1Triangle(12, 13, 14, 0),
	//gsSP1Triangle(12, 15, 13, 0),
	//gsSPVertex(&wf_dirt_ramp_vtx[46], 4, 0),
	//gsSP1Triangle(0, 1, 2, 0),
	//gsSP1Triangle(0, 2, 3, 0),
	//gsDPPipeSync(),
	//gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

static const Gfx wf_start_wood_ramp[] = {
    //gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1,grassbeta_09006800),
    //gsDPLoadSync(),
    //gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    //gsSPVertex(wf_seg7_vertex_07009AB8, 15, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 3,  5,  6, 0x0,  7,  8,  9, 0x0),
    //gsSP2Triangles( 7,  9, 10, 0x0, 11, 12, 13, 0x0),
    //gsSP1Triangle(11, 13, 14, 0x0),
    //gsSPVertex(wf_seg7_vertex_07009BA8, 11, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 6,  7,  8, 0x0,  6,  8,  9, 0x0),
    //gsSP1Triangle( 0,  2, 10, 0x0),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wf_dl__4_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 185),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, wf_dl__4_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPVertex(&wf_dl_wood_ramp[0], 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	//gsSP1Triangle(6, 7, 8, 0),
	//gsSP1Triangle(6, 8, 9, 0),
	//gsSP1Triangle(10, 11, 12, 0),
	//gsSP1Triangle(10, 12, 13, 0),
	//gsSPVertex(&wf_dl_wood_ramp[14], 16, 0),
	//gsSP1Triangle(0, 1, 2, 0),
	//gsSP1Triangle(0, 2, 3, 0),
	//gsSP1Triangle(4, 5, 6, 0),
	//gsSP1Triangle(4, 6, 7, 0),
	//gsSP1Triangle(8, 9, 10, 0),
	//gsSP1Triangle(8, 10, 11, 0),
	//gsSP1Triangle(12, 13, 14, 0),
	//gsSP1Triangle(12, 14, 15, 0),
	//gsSPVertex(&wf_dl_wood_ramp[30], 16, 0),
	//gsSP1Triangle(0, 1, 2, 0),
	//gsSP1Triangle(0, 2, 3, 0),
	//gsSP1Triangle(4, 5, 6, 0),
	//gsSP1Triangle(5, 7, 6, 0),
	//gsSP1Triangle(8, 9, 10, 0),
	//gsSP1Triangle(8, 11, 9, 0),
	//gsSP1Triangle(12, 13, 14, 0),
	//gsSP1Triangle(12, 15, 13, 0),
	//gsSPVertex(&wf_dl_wood_ramp[46], 12, 0),
	//gsSP1Triangle(0, 1, 2, 0),
	//gsSP1Triangle(0, 3, 1, 0),
	//gsSP1Triangle(4, 5, 6, 0),
	//gsSP1Triangle(7, 4, 6, 0),
	//gsSP1Triangle(8, 9, 10, 0),
	//gsSP1Triangle(8, 10, 11, 0),
    gsSPEndDisplayList(),
};

// 0x07009780 - 0x070097F0
const Gfx wf_seg7_dl_07009780[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    //gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    //gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    //gsDPTileSync(),
    //gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    //gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(wf_seg7_dl_07009698),
	gsSPDisplayList(wf_start_wood_ramp),
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

static const Lights1 platform_light = gdSPDefLights1(
    255/4, 255/4, 255/4,
    0xff, 0xff, 0xff, LIGHT_X, LIGHT_Y, LIGHT_Z
);

Vtx wf_floating_platform_dirt_vtx[] = {
    {{{60-336,	-3519+3586,	2800-2566},0,	{-1324,	29367},{0x0,	0xE6,	0x7C,	0xFF}}},
	{{{60+124,	-3519+3459,	2800-2592},0,	{974,	30019},{0x0,	0xE6,	0x7C,	0xFF}}},
	{{{60+175,	-3519+3586,	2800-2566},0,	{1230,	29367},{0x0,	0xE6,	0x7C,	0xFF}}},
	{{{60-285,	-3519+3459,	2800-2592},0,	{-1068,	30019},{0x0,	0xE6,	0x7C,	0xFF}}},
	{{{60+175,	-3519+3586,	2800-2566},0,	{-174,	29331},{0x76,	0xD0,	0x0,	0xFF}}},
	{{{60+124,	-3519+3459,	2800-3051},0,	{2252,	30019},{0x76,	0xD0,	0x0,	0xFF}}},
	{{{60+175,	-3519+3586,	2800-3077},0,	{2380,	29331},{0x76,	0xD0,	0x0,	0xFF}}},
	{{{60+124,	-3519+3459,	2800-2592},0,	{-16,	30019},{0x76,	0xD0,	0x0,	0xFF}}},
	{{{60+175,	-3519+3586,	2800-3077},0,	{-1324,	29367},{0x0,	0xE6,	0x84,	0xFF}}},
	{{{60+124,	-3519+3459,	2800-3051},0,	{-1068,	30019},{0x0,	0xE6,	0x84,	0xFF}}},
	{{{60-285,	-3519+3459,	2800-3051},0,	{974,	30019},{0x0,	0xE6,	0x84,	0xFF}}},
	{{{60-336,	-3519+3586,	2800-3077},0,	{1230,	29367},{0x0,	0xE6,	0x84,	0xFF}}},
	{{{60-336,	-3519+3586,	2800-3077},0,	{-1578,	29029},{0x8A,	0xD0,	0x0,	0xFF}}},
	{{{60-285,	-3519+3459,	2800-2592},0,	{846,	29685},{0x8A,	0xD0,	0x0,	0xFF}}},
	{{{60-336,	-3519+3586,	2800-2566},0,	{974,	29029},{0x8A,	0xD0,	0x0,	0xFF}}},
	{{{60-285,	-3519+3459,	2800-3051},0,	{-1452,	29685},{0x8A,	0xD0,	0x0,	0xFF}}},
	{{{60+124,	-3519+3459,	2800-2592},0,	{-1068,	30019},{0x0,	0x81,	0x0,	0xFF}}},
	{{{60-285,	-3519+3459,	2800-2592},0,	{974,	30019},{0x0,	0x81,	0x0,	0xFF}}},
	{{{60-285,	-3519+3459,	2800-3051},0,	{974,	27719},{0x0,	0x81,	0x0,	0xFF}}},
	{{{60+124,	-3519+3459,	2800-3051},0,	{-1068,	27719},{0x0,	0x81,	0x0,	0xFF}}},
	
	{{{60+175, -3519+3586, 2800-3077},0, {9254, 27904},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{60-336, -3519+3586, 2800-2566},0, {7454, 29704},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{60+175, -3519+3586, 2800-2566},0, {7454, 27904},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{60-336, -3519+3586, 2800-3077},0, {9254, 29704},{0x0, 0x7F, 0x0, 0xFF}}},
};

static const Gfx wf_floating_platform[] = {
	gsDPPipeSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, wf_dl__5_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPLight(&platform_light.l, 1),
    gsSPLight(&platform_light.a, 2),

	gsSPVertex(&wf_floating_platform_dirt_vtx[0], 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(&wf_floating_platform_dirt_vtx[16], 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	
	gsDPPipeSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wf_dl__20_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 220),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, wf_dl__20_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	
	gsSPVertex(&wf_floating_platform_dirt_vtx[20], 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

const Gfx RCP_mountain_floating_platform[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wf_dl__5_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 138),
	gsDPPipeSync(),
	gsDPTileSync(),
    gsSPDisplayList(wf_floating_platform),
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
