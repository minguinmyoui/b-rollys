// 0x070056C0 - 0x070056D8
static const Lights1 wf_seg7_lights_070056C0 = gdSPDefLights1(
    255/4, 255/4, 255/4,
    0xff, 0xff, 0xff, LIGHT_X, LIGHT_Y, LIGHT_Z
);

// 0x070056D8 - 0x070057C8
//static const Vtx wf_seg7_vertex_070056D8[] = {
//    {{{  -153,     77,   -255}, 0, {  2012,  -4734}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -204,     77,   -255}, 0, {  2012,  -4938}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -153,     77,    256}, 0, {     0,  -4734}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -256,    102,    256}, 0, {     0,  -5142}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -204,    102,    256}, 0, {     0,  -4938}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -256,    102,   -255}, 0, {  2012,  -5142}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -204,    102,   -255}, 0, {  2012,  -4938}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   255,   -127,   -255}, 0, {  2012,  -3098}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   204,   -127,   -255}, 0, {  2012,  -3302}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   255,   -127,    256}, 0, {     0,  -3098}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   204,   -127,    256}, 0, {     0,  -3302}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -256,    128,    256}, 0, {     0,  -2076}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -256,    102,    256}, 0, {     0,  -1872}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -256,    128,   -255}, 0, {  4056,  -2076}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -256,    102,   -255}, 0, {  4056,  -1872}, {0x7f, 0x00, 0x00, 0xff}}},
//};
//
//// 0x070057C8 - 0x070058B8
//static const Vtx wf_seg7_vertex_070057C8[] = {
//    {{{  -102,     26,    256}, 0, {     0,  -1258}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -102,     51,   -255}, 0, {  4056,  -1462}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -102,     51,    256}, 0, {     0,  -1462}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -153,     77,    256}, 0, {     0,  -4734}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -204,     77,   -255}, 0, {  2012,  -4938}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -204,     77,    256}, 0, {     0,  -4938}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -204,    102,    256}, 0, {     0,  -1872}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -204,     77,    256}, 0, {     0,  -1668}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -204,    102,   -255}, 0, {  4056,  -1872}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -204,     77,   -255}, 0, {  4056,  -1668}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -153,     51,   -255}, 0, {  4056,  -1462}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -153,     77,   -255}, 0, {  4056,  -1668}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -153,     51,    256}, 0, {     0,  -1462}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -153,     77,    256}, 0, {     0,  -1668}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -102,     26,   -255}, 0, {  4056,  -1258}, {0x7f, 0x00, 0x00, 0xff}}},
//};
//
//// 0x070058B8 - 0x070059A8
//static const Vtx wf_seg7_vertex_070058B8[] = {
//    {{{     0,    -25,   -255}, 0, {  4056,   -850}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{     0,      0,   -255}, 0, {  4056,  -1054}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{     0,    -25,    256}, 0, {     0,   -850}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -153,     51,    256}, 0, {     0,  -4734}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -102,     51,    256}, 0, {     0,  -4528}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -153,     51,   -255}, 0, {  2012,  -4734}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -102,     51,   -255}, 0, {  2012,  -4528}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   -51,      0,   -255}, 0, {  4056,  -1054}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   -51,     26,   -255}, 0, {  4056,  -1258}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   -51,      0,    256}, 0, {     0,  -1054}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   -51,     26,    256}, 0, {     0,  -1258}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{  -102,     26,    256}, 0, {     0,  -4528}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   -51,     26,    256}, 0, {     0,  -4324}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{  -102,     26,   -255}, 0, {  2012,  -4528}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   -51,     26,   -255}, 0, {  2012,  -4324}, {0x00, 0x7f, 0x00, 0xff}}},
//};
//
//// 0x070059A8 - 0x07005A98
//static const Vtx wf_seg7_vertex_070059A8[] = {
//    {{{     0,    -25,   -255}, 0, {  2012,  -4120}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{    51,    -25,    256}, 0, {     0,  -3916}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{    51,    -25,   -255}, 0, {  2012,  -3916}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{     0,      0,    256}, 0, {     0,  -1054}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{     0,    -25,    256}, 0, {     0,   -850}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{     0,      0,   -255}, 0, {  4056,  -1054}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   -51,      0,    256}, 0, {     0,  -4324}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{     0,      0,    256}, 0, {     0,  -4120}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   -51,      0,   -255}, 0, {  2012,  -4324}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{     0,      0,   -255}, 0, {  2012,  -4120}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{    51,    -50,   -255}, 0, {  4056,   -646}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{    51,    -25,   -255}, 0, {  4056,   -850}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{    51,    -50,    256}, 0, {     0,   -646}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{    51,    -25,    256}, 0, {     0,   -850}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{     0,    -25,    256}, 0, {     0,  -4120}, {0x00, 0x7f, 0x00, 0xff}}},
//};
//
//// 0x07005A98 - 0x07005B88
//static const Vtx wf_seg7_vertex_07005A98[] = {
//    {{{   102,    -76,    256}, 0, {     0,  -3712}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   153,    -76,    256}, 0, {     0,  -3506}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   102,    -76,   -255}, 0, {  2012,  -3712}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   102,    -76,   -255}, 0, {  4056,   -440}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   102,    -50,   -255}, 0, {  4056,   -646}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   102,    -76,    256}, 0, {     0,   -440}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   102,    -50,    256}, 0, {     0,   -646}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{    51,    -50,    256}, 0, {     0,  -3916}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   102,    -50,    256}, 0, {     0,  -3712}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{    51,    -50,   -255}, 0, {  2012,  -3916}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   102,    -50,   -255}, 0, {  2012,  -3712}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   153,   -101,   -255}, 0, {  4056,   -236}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   153,    -76,   -255}, 0, {  4056,   -440}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   153,   -101,    256}, 0, {     0,   -236}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   153,    -76,    256}, 0, {     0,   -440}, {0x7f, 0x00, 0x00, 0xff}}},
//};
//
//// 0x07005B88 - 0x07005C38
//static const Vtx wf_seg7_vertex_07005B88[] = {
//    {{{   153,   -101,   -255}, 0, {  2012,  -3506}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   204,   -101,    256}, 0, {     0,  -3302}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   204,   -101,   -255}, 0, {  2012,  -3302}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   102,    -76,   -255}, 0, {  2012,  -3712}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   153,    -76,    256}, 0, {     0,  -3506}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   153,    -76,   -255}, 0, {  2012,  -3506}, {0x00, 0x7f, 0x00, 0xff}}},
//    {{{   204,   -127,   -255}, 0, {  4056,      0}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   204,   -101,   -255}, 0, {  4056,   -236}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   204,   -127,    256}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   204,   -101,    256}, 0, {     0,   -236}, {0x7f, 0x00, 0x00, 0xff}}},
//    {{{   153,   -101,    256}, 0, {     0,  -3506}, {0x00, 0x7f, 0x00, 0xff}}},
//};

Vtx wf_dl_objects_mesh_vtx_0[] = {
	{{{-2305+2100,	-2432+2535,	255-514},0,	{14320,	-1799},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2510,	255-2},0,	{16368,	-1899},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2510,	255-514},0,	{14320,	-1899},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2535,	255-2},0,	{16368,	-1899},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2510,	255-2},0,	{16368,	-1999},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2535,	255-514},0,	{14320,	-1899},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2484,	255-2},0,	{16368,	-2208},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2510,	255-514},0,	{14320,	-2103},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2510,	255-2},0,	{16368,	-2103},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2484,	255-514},0,	{14320,	-2103},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2510,	255-514},0,	{14320,	-1999},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2484,	255-2},0,	{16368,	-2103},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2459,	255-2},0,	{16368,	-2408},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2484,	255-514},0,	{14320,	-2308},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2484,	255-2},0,	{16368,	-2308},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2459,	255-514},0,	{14320,	-2308},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2484,	255-514},0,	{14320,	-2208},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2459,	255-2},0,	{16368,	-2308},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2433,	255-2},0,	{16368,	-2616},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2459,	255-514},0,	{14320,	-2512},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2459,	255-2},0,	{16368,	-2512},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2433,	255-514},0,	{14320,	-2512},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2459,	255-514},0,	{14320,	-2408},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2433,	255-2},0,	{16368,	-2512},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2433,	255-2},0,	{16368,	-2717},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2408,	255-2},0,	{16368,	-2817},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2433,	255-514},0,	{14320,	-2717},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2408,	255-514},0,	{14320,	-2717},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2433,	255-514},0,	{14320,	-2616},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2408,	255-2},0,	{16368,	-2717},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2383,	255-2},0,	{16368,	-3021},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2408,	255-514},0,	{14320,	-2921},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2408,	255-2},0,	{16368,	-2921},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2383,	255-514},0,	{14320,	-2921},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2408,	255-514},0,	{14320,	-2821},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2383,	255-2},0,	{16368,	-2921},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2357,	255-2},0,	{16368,	-3229},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2383,	255-514},0,	{14320,	-3125},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2383,	255-2},0,	{16368,	-3125},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2357,	255-514},0,	{14320,	-3125},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2383,	255-514},0,	{14320,	-3021},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2357,	255-2},0,	{16368,	-3125},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2357,	255-2},0,	{16368,	-3330},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2332,	255-2},0,	{16368,	-3430},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2357,	255-514},0,	{14320,	-3330},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2332,	255-514},0,	{14320,	-3330},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2357,	255-514},0,	{14320,	-3229},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2332,	255-2},0,	{16368,	-3330},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2306,	255-2},0,	{16368,	-3638},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2332,	255-514},0,	{14320,	-3534},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2332,	255-2},0,	{16368,	-3534},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2306,	255-514},0,	{14320,	-3534},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2332,	255-514},0,	{14320,	-3430},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2306,	255-2},0,	{16368,	-3534},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2510,	255-514},0,	{14320,	-2103},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2510,	255-514},0,	{14320,	-1899},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2510,	255-2},0,	{16368,	-2103},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2510,	255-2},0,	{16368,	-1899},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2048,	-2432+2535,	255-514},0,	{14320,	-1691},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2535,	255-2},0,	{16368,	-1899},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2535,	255-514},0,	{14320,	-1899},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2048,	-2432+2535,	255-2},0,	{16368,	-1691},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2100,	-2432+2535,	255-2},0,	{16368,	-1899},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2048,	-2432+2535,	255-514},0,	{14320,	-1691},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2048,	-2432+2561,	255-514},0,	{14320,	-1586},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2048,	-2432+2535,	255-2},0,	{16368,	-1691},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2048,	-2432+2535,	255-514},0,	{14320,	-1691},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2048,	-2432+2561,	255-2},0,	{16368,	-1586},{0x7F,	0x0,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2484,	255-2},0,	{16368,	-2103},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2484,	255-2},0,	{16368,	-2308},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2151,	-2432+2484,	255-514},0,	{14320,	-2103},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2484,	255-514},0,	{14320,	-2308},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2459,	255-2},0,	{16368,	-2308},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2459,	255-2},0,	{16368,	-2512},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2202,	-2432+2459,	255-514},0,	{14320,	-2308},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2459,	255-514},0,	{14320,	-2512},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2433,	255-2},0,	{16368,	-2512},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2433,	255-2},0,	{16368,	-2717},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2253,	-2432+2433,	255-514},0,	{14320,	-2512},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2433,	255-514},0,	{14320,	-2717},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2408,	255-2},0,	{16368,	-2717},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2408,	255-2},0,	{16368,	-2921},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2304,	-2432+2408,	255-514},0,	{14320,	-2717},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2408,	255-514},0,	{14320,	-2921},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2383,	255-2},0,	{16368,	-2921},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2383,	255-2},0,	{16368,	-3125},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2355,	-2432+2383,	255-514},0,	{14320,	-2921},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2383,	255-514},0,	{14320,	-3125},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2357,	255-2},0,	{16368,	-3125},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2357,	255-2},0,	{16368,	-3330},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2406,	-2432+2357,	255-514},0,	{14320,	-3125},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2357,	255-514},0,	{14320,	-3330},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2332,	255-2},0,	{16368,	-3330},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2332,	255-2},0,	{16368,	-3534},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2457,	-2432+2332,	255-514},0,	{14320,	-3330},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2332,	255-514},0,	{14320,	-3534},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2306,	255-2},0,	{16368,	-1486},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2559,	-2432+2306,	255-2},0,	{16368,	-1691},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2508,	-2432+2306,	255-514},0,	{14320,	-1486},{0x0,	0x7F,	0x0,	0xFF}}},
	{{{-2305+2559,	-2432+2306,	255-514},0,	{14320,	-1691},{0x0,	0x7F,	0x0,	0xFF}}},
};

// 0x07005C38 - 0x07005DD8
static const Gfx wf_seg7_dl_07005C38[] = {
    //gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1,grassbeta_09009800),
    //gsDPLoadSync(),
    //gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wf_dl__19_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 19),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 64, wf_dl__19_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPLight(&wf_seg7_lights_070056C0.l, 1),
    gsSPLight(&wf_seg7_lights_070056C0.a, 2),
	gsSPVertex(&wf_dl_objects_mesh_vtx_0[0], 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(&wf_dl_objects_mesh_vtx_0[15], 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(&wf_dl_objects_mesh_vtx_0[30], 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(&wf_dl_objects_mesh_vtx_0[45], 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(&wf_dl_objects_mesh_vtx_0[61], 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 4, 3, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSPVertex(&wf_dl_objects_mesh_vtx_0[76], 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(&wf_dl_objects_mesh_vtx_0[92], 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	//gsSPVertex(wf_seg7_vertex_070056D8, 15, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 5,  4,  6, 0x0,  7,  8,  9, 0x0),
    //gsSP2Triangles(10,  9,  8, 0x0, 11, 12, 13, 0x0),
    //gsSP1Triangle(13, 12, 14, 0x0),
    //gsSPVertex(wf_seg7_vertex_070057C8, 15, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    //gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    //gsSP1Triangle(14,  1,  0, 0x0),
    //gsSPVertex(wf_seg7_vertex_070058B8, 15, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 5,  4,  6, 0x0,  7,  8,  9, 0x0),
    //gsSP2Triangles( 9,  8, 10, 0x0, 11, 12, 13, 0x0),
    //gsSP1Triangle(13, 12, 14, 0x0),
    //gsSPVertex(wf_seg7_vertex_070059A8, 15, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    //gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    //gsSP1Triangle(14,  1,  0, 0x0),
    //gsSPVertex(wf_seg7_vertex_07005A98, 15, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 5,  4,  6, 0x0,  7,  8,  9, 0x0),
    //gsSP2Triangles(10,  9,  8, 0x0, 11, 12, 13, 0x0),
    //gsSP1Triangle(14, 13, 12, 0x0),
    //gsSPVertex(wf_seg7_vertex_07005B88, 11, 0),
    //gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    //gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    //gsSP1Triangle(10,  1,  0, 0x0),
    gsSPEndDisplayList(),
};

// 0x07005DD8 - 0x07005E48
const Gfx wf_seg7_dl_07005DD8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    //gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    //gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    //gsDPTileSync(),
    //gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    //gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(wf_seg7_dl_07005C38),
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};