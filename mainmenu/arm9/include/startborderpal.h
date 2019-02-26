
//{{BLOCK(start_border0)

//======================================================================
//
//	start_border0, 32x256@4, 
//	Transparent color : FF,00,FF
//	+ palette 16 entries, not compressed
//	+ bitmap not compressed
//	Total size: 32 + 4096 = 4128
//
//	Time-stamp: 2018-06-20, 11:35:44
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.14
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef START_BORDER_PAL_H
#define START_BORDER_PAL_H

#define start_borderPalLen 32

/*const unsigned short start_borderPals[16*16]
{
	0x7C1F,0x49CB,0x49EB,0x41A9,0x4E0C,0x524D,0x5A8F,0x62D3,	// 0: gray
	0x62F4,0x6B36,0x6F79,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x00B5,0x00B7,0x00F7,0x0139,0x097A,0x159B,0x25DD,	// 1: brown
	0x363E,0x3A7D,0x4ABD,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x1419,0x101B,0x103D,0x109E,0x24DF,0x313F,0x419F,	// 2: red
	0x49DF,0x563F,0x5E7F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x757F,0x75BF,0x75FF,0x763F,0x767F,0x769F,0x76DF,	// 3: pink
	0x7F3F,0x7F5F,0x7F7F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x11DF,0x01FF,0x023F,0x0A7F,0x169F,0x26BF,0x32FF,	// 4: orange
	0x3F3F,0x4F5F,0x5F9F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x029D,0x02BE,0x02FD,0x031D,0x075E,0x0F7F,0x17BF,	// 5: yellow
	0x2FDF,0x47FF,0x5FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x032E,0x036F,0x0371,0x0392,0x0FB5,0x1BD8,0x27FA,	// 6: yellow-green
	0x33FD,0x43FE,0x5FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x0301,0x0322,0x0363,0x0BA2,0x17C8,0x23ED,0x33F3,	// 7: lively green
	0x33F6,0x43F9,0x4FFB,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x1660,0x1AA0,0x16C0,0x1700,0x1F22,0x1F64,0x278A,	// 8: green
	0x3BCF,0x4FF3,0x47F1,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x32E0,0x2F21,0x3744,0x3B85,0x3FA6,0x3BE2,0x53ED,	// 9: light green
	0x5FF2,0x6FF6,0x77F8,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7E23,0x7A64,0x7AA5,0x7AE6,0x7F09,0x7F2C,0x7F6F,	// 10: sky blue
	0x7F72,0x7F95,0x7FB8,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x5CA0,0x68E0,0x7120,0x7960,0x7DC3,0x7E06,0x7E69,	// 11: light blue
	0x7ECC,0x7F2F,0x7F72,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x3800,0x4400,0x5400,0x6000,0x7060,0x68E2,0x6142,	// 12: blue
	0x75C5,0x7A27,0x7E8A,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x444B,0x502D,0x5C0F,0x6811,0x6C73,0x70D5,0x7156,	// 13: violet
	0x75B8,0x761A,0x7A9C,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x5412,0x6015,0x6C17,0x7018,0x787B,0x78FC,0x797C,	// 14: purple
	0x7DFD,0x7E7E,0x7EFE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x443D,0x4CBD,0x507F,0x5CDF,0x611F,0x655F,0x69BF,	// 15: fuschia
	0x6A1F,0x725F,0x729F,0x0000,0x0000,0x0000,0x0000,0x0000
};*/

// Weirdly starts with 2nd, 3rd, and 1st colors
const unsigned short start_borderPals[16*16]
{
	0x7C1F,0x49CB,0x49EB,0x41A9,0x4E0C,0x524D,0x5A8F,0x62D3,	// 0: gray
	0x62F4,0x6B36,0x6F79,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x00B7,0x00F7,0x00B5,0x0139,0x097A,0x159B,0x25DD,	// 1: brown
	0x363E,0x3A7D,0x4ABD,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x101B,0x103D,0x1419,0x109E,0x24DF,0x313F,0x419F,	// 2: red
	0x49DF,0x563F,0x5E7F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x75BF,0x75FF,0x757F,0x763F,0x767F,0x769F,0x76DF,	// 3: pink
	0x7F3F,0x7F5F,0x7F7F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x01FF,0x023F,0x11DF,0x0A7F,0x169F,0x26BF,0x32FF,	// 4: orange
	0x3F3F,0x4F5F,0x5F9F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x02BE,0x02FD,0x029D,0x031D,0x075E,0x0F7F,0x17BF,	// 5: yellow
	0x2FDF,0x47FF,0x5FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x036F,0x0371,0x032E,0x0392,0x0FB5,0x1BD8,0x27FA,	// 6: yellow-green
	0x33FD,0x43FE,0x5FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x0322,0x0363,0x0301,0x0BA2,0x17C8,0x23ED,0x33F3,	// 7: lively green
	0x33F6,0x43F9,0x4FFB,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x1AA0,0x16C0,0x1660,0x1700,0x1F22,0x1F64,0x278A,	// 8: green
	0x3BCF,0x4FF3,0x47F1,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x2F21,0x3744,0x32E0,0x3B85,0x3FA6,0x3BE2,0x53ED,	// 9: light green
	0x5FF2,0x6FF6,0x77F8,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7A64,0x7AA5,0x7E23,0x7AE6,0x7F09,0x7F2C,0x7F6F,	// 10: sky blue
	0x7F72,0x7F95,0x7FB8,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x68E0,0x7120,0x5CA0,0x7960,0x7DC3,0x7E06,0x7E69,	// 11: light blue
	0x7ECC,0x7F2F,0x7F72,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x4400,0x5400,0x3800,0x6000,0x7060,0x68E2,0x6142,	// 12: blue
	0x75C5,0x7A27,0x7E8A,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x502D,0x5C0F,0x444B,0x6811,0x6C73,0x70D5,0x7156,	// 13: violet
	0x75B8,0x761A,0x7A9C,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6015,0x6C17,0x5412,0x7018,0x787B,0x78FC,0x797C,	// 14: purple
	0x7DFD,0x7E7E,0x7EFE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x4CBD,0x507F,0x443D,0x5CDF,0x611F,0x655F,0x69BF,	// 15: fuschia
	0x6A1F,0x725F,0x729F,0x0000,0x0000,0x0000,0x0000,0x0000
};

const unsigned short start_textPals[16*16]
{
	0x7C1F,0x62D4,0x737A,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 0: gray
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x29FA,0x5F1E,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 1: brown
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x357E,0x5ABF,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 2: red
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7ADF,0x7F7F,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 3: pink
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x371F,0x5B9F,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 4: orange
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x2B7E,0x57BF,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 5: yellow
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x2BF9,0x57FC,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 6: yellow-green
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x3BCF,0x5FF7,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 7: lively green
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x3F4C,0x5FB5,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 8: green
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x5BD0,0x6FF8,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 9: light green
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7F70,0x7FB8,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 10: sky blue
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7AAD,0x7F56,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 11: light blue
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6D4A,0x76B5,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 12: blue
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7597,0x7ADB,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 13: violet
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7D9D,0x7EDE,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 14: purple
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x69FF,0x76FF,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 15: fuschia
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
};

const unsigned short button_arrowPals[16*16]
{
	0x7C1F,0x49CB,0x49EB,0x4E0C,0x524D,0x5A8F,0x62D3,0x62F4,	// 0: gray
	0x6B36,0x6F79,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x00B7,0x00F7,0x0139,0x097A,0x159B,0x25DD,0x363E,	// 1: brown
	0x3A7D,0x4ABD,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x101B,0x103D,0x109E,0x24DF,0x313F,0x419F,0x49DF,	// 2: red
	0x563F,0x5E7F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x75BF,0x75FF,0x763F,0x767F,0x769F,0x76DF,0x7F3F,	// 3: pink
	0x7F5F,0x7F7F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x01FF,0x023F,0x0A7F,0x169F,0x26BF,0x32FF,0x3F3F,	// 4: orange
	0x4F5F,0x5F9F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x02BE,0x02FD,0x031D,0x075E,0x0F7F,0x17BF,0x2FDF,	// 5: yellow
	0x47FF,0x5FFF,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x036F,0x0371,0x0392,0x0FB5,0x1BD8,0x27FA,0x33FD,	// 6: yellow-green
	0x43FE,0x5FFF,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x0322,0x0363,0x0BA2,0x17C8,0x23ED,0x33F3,0x33F6,	// 7: lively green
	0x43F9,0x4FFB,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x1AA0,0x16C0,0x1700,0x1F22,0x1F64,0x278A,0x3BCF,	// 8: green
	0x4FF3,0x47F1,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x2F21,0x3744,0x3B85,0x3FA6,0x3BE2,0x53ED,0x5FF2,	// 9: light green
	0x6FF6,0x77F8,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7A64,0x7AA5,0x7AE6,0x7F09,0x7F2C,0x7F6F,0x7F72,	// 10: sky blue
	0x7F95,0x7FB8,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x68E0,0x7120,0x7960,0x7DC3,0x7E06,0x7E69,0x7ECC,	// 11: light blue
	0x7F2F,0x7F72,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x4400,0x5400,0x6000,0x7060,0x68E2,0x6142,0x75C5,	// 12: blue
	0x7A27,0x7E8A,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x502D,0x5C0F,0x6811,0x6C73,0x70D5,0x7156,0x75B8,	// 13: violet
	0x761A,0x7A9C,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6015,0x6C17,0x7018,0x787B,0x78FC,0x797C,0x7DFD,	// 14: purple
	0x7E7E,0x7EFE,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x4CBD,0x507F,0x5CDF,0x611F,0x655F,0x69BF,0x6A1F,	// 15: fuschia
	0x725F,0x729F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000
};

const unsigned short bmpPal_topSmallFont[16*16]
{
	0xFC1F,0xADD2,0xADF2,0xB212,0xB653,0xBE75,0xCAB7,0xCED7,	// 0: gray
	0xD719,0xE35A,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0xD8A0,0xD8E0,0xE120,0xE562,0xE589,0xF1C9,0xF62D,	// 1: brown
	0xF24E,0xF292,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0xE804,0xF024,0xF484,0xF8C9,0xF92C,0xF990,0xF9D2,	// 2: red
	0xFA34,0xFA56,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0xF9BC,0xF9FC,0xFA3C,0xFA5C,0xFA7C,0xFABC,0xFB1E,	// 3: pink
	0xFB3E,0xFB5E,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0xF9E0,0xFA20,0xFA42,0xFA65,0xFA89,0xFACC,0xFB0F,	// 4: orange
	0xFB32,0xFB76,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0xF680,0xF2C0,0xF2E0,0xF721,0xFB43,0xFB85,0xFBAB,	// 5: yellow
	0xFBD1,0xFBD6,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0xBF40,0xC740,0xCB60,0xD383,0xDFA6,0xE7C9,0xF3CC,	// 6: yellow-green
	0xF7D0,0xFBD6,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0x8B00,0x8F40,0x8B82,0xA3A5,0xB7C8,0xCBCC,0xD7CC,	// 7: lively green
	0xE3D0,0xEBD2,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0x8286,0x82A5,0x82E5,0x8B07,0x9347,0xAB69,0xBFAE,	// 8: green
	0xCBD2,0xC7D1,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0x870B,0x93D2,0x976E,0x9B8F,0x8BCE,0xB7D3,0xCBD6,	// 9: light green
	0xD7DA,0xDFDC,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0x925D,0x969D,0x9ADD,0xA6FE,0xB31E,0xBF5E,0xCB5E,	// 10: sky blue
	0xD37E,0xDF9E,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0x80F9,0x813B,0x817D,0x8DDE,0x9A1E,0xA65E,0xB2BE,	// 11: light blue
	0xBF1E,0xCB5E,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0x8011,0x8014,0x8017,0x807B,0x88F9,0x8957,0x95DC,	// 12: blue
	0x9E3D,0xAA7E,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0xB433,0xBC16,0xC419,0xC87A,0xD0DB,0xD55B,0xDDBC,	// 13: violet
	0xE61C,0xEE7D,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0xD017,0xD81A,0xDC1B,0xE87D,0xECFD,0xED7D,0xF1FE,	// 14: purple
	0xF65E,0xF6DE,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xFC1F,0xF0B2,0xF873,0xF8D6,0xF917,0xF958,0xF9B9,0xFA19,	// 15: fuschia
	0xFA5B,0xFA7B,0xFBDE,0x0000,0x0000,0x0000,0x0000,0x0000
};

#endif // START_BORDER_PAL_H

//}}BLOCK(start_border0)
