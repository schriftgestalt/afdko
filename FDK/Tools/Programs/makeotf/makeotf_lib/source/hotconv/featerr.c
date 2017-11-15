/*
 * A n t l r  S e t s / E r r o r  F i l e  H e a d e r
 *
 * Generated from: featgram.g
 *
 * Terence Parr, Russell Quong, Will Cohen, and Hank Dietz: 1989-2001
 * Parr Research Corporation
 * with Purdue University Electrical Engineering
 * With AHPCRC, University of Minnesota
 * ANTLR Version 1.33MR33
 */

#define ANTLR_VERSION	13333
#include "pcctscfg.h"
#include "pccts_stdio.h"

/* --- This section will be included in all feat*.c files created. --- */

#include <stdlib.h>	/* For exit in err.h xxx */
#include <string.h>

#include <stdio.h>

#include "common.h"
#include "feat.h"
#include "MMFX.h"
#include "OS_2.h"
#include "hhea.h"
#include "vmtx.h"
#include "dynarr.h"

#define MAX_TOKEN	64

extern featCtx h;	/* Not reentrant; see featNew() comments */
extern hotCtx g;

typedef union
{
  long lval;
  unsigned long ulval;
  char text[MAX_TOKEN];
} Attrib;

void zzcr_attr(Attrib *attr, int type, char *text);

  
#define zzSET_SIZE 20
#include "antlr.h"
#include "feattoks.h"
#include "dlgdef.h"
#include "err.h"

ANTLRChar *zztokens[150]={
	/* 00 */	"Invalid",
	/* 01 */	"Eof",
	/* 02 */	"[\\ \\t]+",
	/* 03 */	"\\r\\n",
	/* 04 */	"[\\r\\n]",
	/* 05 */	"K_include",
	/* 06 */	";",
	/* 07 */	"T_TAG",
	/* 08 */	"[\\ \\t]+",
	/* 09 */	"\\r\\n",
	/* 10 */	"[\\r\\n]",
	/* 11 */	"T_LABEL",
	/* 12 */	"[\\ \\t]+",
	/* 13 */	"\\r\\n",
	/* 14 */	"[\\r\\n]",
	/* 15 */	"INCLFILE",
	/* 16 */	"[\\ \\t]+",
	/* 17 */	"\\r\\n",
	/* 18 */	"[\\r\\n]",
	/* 19 */	"\\{",
	/* 20 */	"#~[\\r\\n]*",
	/* 21 */	"[\\ \\t]+",
	/* 22 */	"\\r\\n",
	/* 23 */	"[\\r\\n]",
	/* 24 */	"\\r\\n",
	/* 25 */	"[\\r\\n]",
	/* 26 */	"~[]",
	/* 27 */	"\"",
	/* 28 */	"\\r\\n",
	/* 29 */	"[\\r\\n]",
	/* 30 */	"[\\0x20-\\0x7E]",
	/* 31 */	"#~[\\r\\n]*",
	/* 32 */	"[\\ \\t]+",
	/* 33 */	"\\r\\n",
	/* 34 */	"[\\r\\n]",
	/* 35 */	"K_feature",
	/* 36 */	"K_table",
	/* 37 */	"K_script",
	/* 38 */	"K_language",
	/* 39 */	"K_languagesystem",
	/* 40 */	"K_subtable",
	/* 41 */	"K_lookup",
	/* 42 */	"K_lookupflag",
	/* 43 */	"K_RightToLeft",
	/* 44 */	"K_IgnoreBaseGlyphs",
	/* 45 */	"K_IgnoreLigatures",
	/* 46 */	"K_IgnoreMarks",
	/* 47 */	"K_UseMarkFilteringSet",
	/* 48 */	"K_MarkAttachmentType",
	/* 49 */	"K_anon",
	/* 50 */	"K_includeDFLT",
	/* 51 */	"K_excludeDFLT",
	/* 52 */	"K_include_dflt",
	/* 53 */	"K_exclude_dflt",
	/* 54 */	"K_useExtension",
	/* 55 */	"K_BeginValue",
	/* 56 */	"K_EndValue",
	/* 57 */	"K_enumerate",
	/* 58 */	"K_except",
	/* 59 */	"K_ignore",
	/* 60 */	"K_substitute",
	/* 61 */	"K_reverse",
	/* 62 */	"K_by",
	/* 63 */	"K_from",
	/* 64 */	"K_position",
	/* 65 */	"K_parameters",
	/* 66 */	"K_feat_names",
	/* 67 */	"K_cv_params",
	/* 68 */	"K_cvUILabel",
	/* 69 */	"K_cvToolTip",
	/* 70 */	"K_cvSampletext",
	/* 71 */	"K_cvParameterLabel",
	/* 72 */	"K_cvCharacter",
	/* 73 */	"K_sizemenuname",
	/* 74 */	"K_contourpoint",
	/* 75 */	"K_device",
	/* 76 */	"K_anchor",
	/* 77 */	"K_anchordef",
	/* 78 */	"K_valueRecordDef",
	/* 79 */	"K_mark",
	/* 80 */	"K_markClass",
	/* 81 */	"K_cursive",
	/* 82 */	"K_markBase",
	/* 83 */	"K_markLigature",
	/* 84 */	"K_LigatureComponent",
	/* 85 */	"K_caret",
	/* 86 */	"K_NULL",
	/* 87 */	"K_BASE",
	/* 88 */	"K_HorizAxis_BaseTagList",
	/* 89 */	"K_HorizAxis_BaseScriptList",
	/* 90 */	"K_VertAxis_BaseTagList",
	/* 91 */	"K_VertAxis_BaseScriptList",
	/* 92 */	"K_GDEF",
	/* 93 */	"K_GlyphClassDef",
	/* 94 */	"K_Attach",
	/* 95 */	"K_GDEFMarkAttachClass",
	/* 96 */	"K_LigatureCaret1",
	/* 97 */	"K_LigatureCaret2",
	/* 98 */	"K_LigatureCaret3",
	/* 99 */	"K_head",
	/* 100 */	"K_FontRevision",
	/* 101 */	"K_hhea",
	/* 102 */	"K_Ascender",
	/* 103 */	"K_Descender",
	/* 104 */	"K_LineGap",
	/* 105 */	"K_CaretOffset",
	/* 106 */	"K_name",
	/* 107 */	"K_nameid",
	/* 108 */	"K_OS_2",
	/* 109 */	"K_FSType",
	/* 110 */	"K_FSType2",
	/* 111 */	"K_LowerOpticalPointSize",
	/* 112 */	"K_UpperOpticalPointSize",
	/* 113 */	"K_Panose",
	/* 114 */	"K_TypoAscender",
	/* 115 */	"K_TypoDescender",
	/* 116 */	"K_TypoLineGap",
	/* 117 */	"K_winAscent",
	/* 118 */	"K_winDescent",
	/* 119 */	"K_XHeight",
	/* 120 */	"K_CapHeight",
	/* 121 */	"K_UnicodeRange",
	/* 122 */	"K_CodePageRange",
	/* 123 */	"K_WeightClass",
	/* 124 */	"K_WidthClass",
	/* 125 */	"K_Vendor",
	/* 126 */	"K_vhea",
	/* 127 */	"K_VertTypoAscender",
	/* 128 */	"K_VertTypoDescender",
	/* 129 */	"K_VertTypoLineGap",
	/* 130 */	"K_vmtx",
	/* 131 */	"K_VertOriginY",
	/* 132 */	"K_VertAdvanceY",
	/* 133 */	"T_FONTREV",
	/* 134 */	"T_NUMEXT",
	/* 135 */	"T_NUM",
	/* 136 */	"T_GCLASS",
	/* 137 */	"T_CID",
	/* 138 */	"T_GNAME",
	/* 139 */	"T_STRING",
	/* 140 */	"\\[",
	/* 141 */	"\\-",
	/* 142 */	"\\]",
	/* 143 */	"0",
	/* 144 */	",",
	/* 145 */	"'",
	/* 146 */	";",
	/* 147 */	"\\{",
	/* 148 */	"\\}",
	/* 149 */	"="
};
SetWordType zzerr1[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x6,0x0,0x0};
SetWordType zzerr2[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x67,0x0,0x0};
SetWordType zzerr3[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x47,0x0,0x0};
SetWordType zzerr4[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x11,0x0,0x0};
SetWordType zzerr5[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0xa0,0x0,0x0,0x0};
SetWordType zzerr6[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0xc0,0x0,0x0,0x0};
SetWordType setwd1[150] = {0x0,0x20,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x9,0x0,0x50,0x50,0x50,0x50,
	0x50,0x50,0x0,0x0,0x0,0x0,0x0,0x0,
	0x9,0x60,0x0,0x0,0x0,0x9,0x9,0x9,
	0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x60,0x0,0x0,0x0,0x0,
	0x9,0x0,0x9,0x9,0x9,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x0,
	0xf9,0x2d,0x2f,0x6f,0x0,0x29,0x1,0x5,
	0x0,0x29,0x9,0xf9,0x0,0x0,0x0};
SetWordType zzerr7[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0xc0,0x0,0x0,0x0};
SetWordType zzerr8[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x80,0x0,0x0};
SetWordType zzerr9[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0xc,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr10[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x0,0x0,0x0};
SetWordType zzerr11[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x0,0x0,0x0};
SetWordType zzerr12[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x4,0x0,0x0};
SetWordType setwd2[150] = {0x0,0x44,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x3c,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,
	0x5,0x4,0x4,0x14,0x1,0x4,0x0,0x0,
	0x0,0x8,0x0,0x86,0x0,0x0,0x0};
SetWordType zzerr13[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x1, 0x0,0x4,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr14[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x4,0x0,0x0};
SetWordType zzerr15[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr16[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x0,0xf0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x17,0x7,0x0};
SetWordType zzerr17[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x0,0xf0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x17,0x5,0x0};
SetWordType setwd3[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x40,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x8,0x0,0x0,0x0,0x0,0xc0,0xc0,0xc0,
	0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x8,0x0,0x0,0x0,0x0,0x8,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0xc0,0xeb,0xdb,0xdb,0x0,0xeb,0x0,0x0,
	0x0,0xc0,0x8,0xcf,0x0,0x0,0x0};
SetWordType zzerr18[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr19[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x80,0x0, 0x0,0x80,0xe,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x17,0x6,0x0};
SetWordType setwd4[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x50,0x0,0x0,0x0,0x0,0x2,0x2,0x2,
	0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x50,0x0,0x50,0x50,0x50,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x52,0x39,0xb5,0xb5,0x0,0x39,0x0,0x0,
	0x0,0x2,0x0,0x52,0x0,0x0,0x0};
SetWordType zzerr20[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr21[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x17,0x6,0x0};
SetWordType zzerr22[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x30, 0x1,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr23[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x34, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr24[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr25[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x40, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x4,0x0};
SetWordType zzerr26[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0xc0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr27[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr28[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0xc0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x4,0x0};
SetWordType zzerr29[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x30, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType setwd5[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x6,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x6,0x0,0x0,0x0,0x0,0x10,0x10,0x40,
	0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x6,0xa7,0xa6,0xa6,0x0,0xa7,0x0,0x0,
	0x0,0x0,0x0,0xe,0x0,0x0,0x0};
SetWordType zzerr30[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr31[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x2, 0x1,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr32[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x80,0x0, 0x0,0x80,0xe,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x17,0x0,0x0};
SetWordType zzerr33[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x0,0x0,0x0};
SetWordType setwd6[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x60,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x20,0x0,0x20,0x20,0x20,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x60,0x94,0x92,0x92,0x0,0x94,0x0,0x0,
	0x0,0x0,0x0,0x9,0x0,0x0,0x0};
SetWordType zzerr34[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x17,0x4,0x0};
SetWordType zzerr35[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x4,0x0};
SetWordType zzerr36[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x4,0x0};
SetWordType zzerr37[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x4,0x0};
SetWordType zzerr38[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x4,0x0};
SetWordType zzerr39[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x4,0x0};
SetWordType zzerr40[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x80,0x0, 0x0,0x80,0xe,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x0,0x0,0x0};
SetWordType setwd7[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x7f,0x7f,0x7f,0x0,0x7f,0x0,0x0,
	0x0,0x0,0x0,0x85,0x0,0x0,0x0};
SetWordType zzerr41[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0xc0,0x8,0x0,0x0};
SetWordType zzerr42[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0xc0,0x8,0x0,0x0};
SetWordType zzerr43[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xf0,0x1,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x10,0x0};
SetWordType zzerr44[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xe0,0x1,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x10,0x0};
SetWordType setwd8[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x40,0xc0,
	0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x1,0xc,
	0xd,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x22,0x0,0xd0,0x0};
SetWordType zzerr45[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xc0,0x1,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x10,0x0};
SetWordType zzerr46[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x80,0x1,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x10,0x0};
SetWordType zzerr47[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x1,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x10,0x0};
SetWordType zzerr48[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr49[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x2,0x0};
SetWordType zzerr50[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType setwd9[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x4,0x0,0x4,0x4,
	0x0,0x4,0x4,0x4,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x4,0x4,0x4,0x4,0x4,0x0,
	0x0,0x4,0x4,0x4,0x4,0x0,0x0,0x0,
	0x1,0x3,0x4,0x0,0x0,0x0,0x0,0x0,
	0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0xb4,0x68,0x68,0x0,0xb0,0x0,0x0,
	0x0,0x0,0x0,0x24,0x0,0x7,0x0};
SetWordType zzerr51[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x2,0x0};
SetWordType zzerr52[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr53[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x2,0x0};
SetWordType zzerr54[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr55[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x6,0x0};
SetWordType setwd10[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x51,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0xfb,0xf7,0xf7,0x0,0xfb,0x0,0x0,
	0x0,0x0,0x0,0xc0,0x0,0x0,0x0};
SetWordType zzerr56[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr57[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x2,0x0};
SetWordType zzerr58[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType zzerr59[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x2,0x0};
SetWordType zzerr60[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x0,0x0};
SetWordType setwd11[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x44,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0xee,0xdd,0xdd,0x0,0xee,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0};
SetWordType zzerr61[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x80,0x10,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x6,0x0};
SetWordType zzerr62[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x10,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x6,0x0};
SetWordType zzerr63[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x17,0x6,0x0};
SetWordType zzerr64[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x3c,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x4,0x0};
SetWordType zzerr65[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x1,0x0,0x0};
SetWordType zzerr66[20] = {0x0,0x0,0x0,0x0, 0x0,0xf8,0x1,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType setwd12[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x80,0x80,0x80,0x80,
	0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,
	0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x80,0xf,0xf,0xf,0x0,0xf,0x0,0x0,
	0x0,0x0,0x3,0xff,0x0,0x0,0x0};
SetWordType zzerr67[20] = {0x0,0x0,0x0,0x0, 0x0,0xf8,0x1,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x80,0x0,0x4,0x0};
SetWordType zzerr68[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0xc0,0x8,0x0,0x0};
SetWordType zzerr69[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0xc0,0x8,0x0,0x0};
SetWordType setwd13[150] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x1,
	0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x80,0x0,0x80,0x80,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x30,
	0x30,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x4e,0x0,0x0,0x0};
SetWordType zzerr70[20] = {0x0,0x0,0x0,0x0, 0x68,0x5,0x0,0x3e, 0x7,0x2,0x1,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x1,0x4,0x0};
SetWordType zzerr71[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x8,0x0};
SetWordType zzerr72[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0xc,0x0};
SetWordType zzerr73[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x8,0x0};
SetWordType zzerr74[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x8,0x0};
SetWordType zzerr75[20] = {0x0,0x0,0x0,0x0, 0x68,0x7,0x0,0x3e, 0xf,0x2,0x1,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x1,0x14,0x0};
SetWordType setwd14[150] = {0x0,0x40,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0xfa,0x40,0xba,0xba,
	0x40,0xba,0x52,0xba,0x0,0x0,0x0,0x0,
	0x0,0x0,0x40,0x0,0x0,0x0,0x0,0x4,
	0x0,0x0,0xbb,0xba,0xba,0xba,0xba,0x0,
	0x0,0xbb,0xba,0xba,0x12,0x0,0x0,0x0,
	0x0,0x0,0xba,0x0,0x0,0x0,0x40,0x40,
	0x0,0xfa,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0xfa,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0xfa,0x4,0x12,0x0};
SetWordType zzerr76[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x5,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr77[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0xa,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr78[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x5,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x10,0x0};
SetWordType zzerr79[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0xe0,0xff,0x3f, 0x0,0x0,0x4,0x0};
SetWordType setwd15[150] = {0x0,0x51,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x51,0x51,0x0,0x0,
	0x51,0x0,0x51,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x51,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x51,0x51,
	0x0,0x51,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0xc,0x0,0xc,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x20,
	0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
	0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0xd1,0x0,0x0,0x0,0x80,0x0,0x0,
	0x0,0x2,0x0,0x73,0x0,0x4,0x0};
SetWordType zzerr80[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x11,0x5,0x0};
SetWordType zzerr81[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x60,
	0x3,0x0,0x0,0x0, 0x0,0x0,0x4,0x0};
SetWordType zzerr82[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x10,0x0,0x0,0x0, 0x0,0x0,0x4,0x0};
SetWordType zzerr83[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0xc0,0x3,0x0,0x0, 0x0,0x0,0x4,0x0};
SetWordType setwd16[150] = {0x0,0x58,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x58,0x58,0x0,0x0,
	0x58,0x0,0x58,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x58,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x58,0x58,
	0x0,0x58,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x4,0x4,
	0x0,0x4,0x4,0x0,0x0,0x0,0x0,0x20,
	0x20,0x20,0x20,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,
	0x80,0x58,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x3,0x0,0x7f,0x0,0x0,0x0};
SetWordType zzerr84[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0xc0,0x8,0x0,0x0};
SetWordType zzerr85[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0xc0,0x8,0x0,0x0};
SetWordType zzerr86[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x8,0x0,0x0, 0x0,0x0,0x4,0x0};
SetWordType zzerr87[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x80, 0x3,0x0,0x4,0x0};
SetWordType zzerr88[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x18,0x0,0x4,0x0};
SetWordType zzerr89[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x10,
	0x28,0x14,0x0,0x40, 0x4,0x0,0x0,0x0};
SetWordType setwd17[150] = {0x0,0xd4,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0xd4,0xd4,0x0,0x0,
	0xd4,0x0,0xd4,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0xd4,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0xd4,0xd4,
	0x0,0xd4,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x8,0x8,0x8,0x0,0x20,0x20,0x0,0x1,
	0x1,0xd4,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0xfe,0x0,0x0,0x0};
SetWordType zzerr90[20] = {0x0,0x0,0x0,0x0, 0x80,0x0,0x0,0x0, 0x0,0x60,0x1,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x1,0x4,0x0};
SetWordType setwd18[150] = {0x0,0x26,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0xe,0xe,0x0,0x0,
	0x1e,0x0,0xe,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0xe,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0x1e,
	0x0,0x1e,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x1e,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x1f,0x0,0x0,0x0};
