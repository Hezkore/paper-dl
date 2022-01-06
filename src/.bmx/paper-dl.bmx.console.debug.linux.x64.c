#include "paper-dl.bmx.console.debug.linux.x64.h"
static BBString _s22={
	&bbStringClass,
	0xfd3b9ffd685f7886,
	1,
	{32}
};
static BBString _s11={
	&bbStringClass,
	0xc79f5a4bd1713e4f,
	7,
	{32,98,117,105,108,100,32}
};
static BBString _s10={
	&bbStringClass,
	0xa576d38010508a68,
	8,
	{32,98,117,105,108,100,58,32}
};
static BBString _s6={
	&bbStringClass,
	0xc12a195c31d926fe,
	10,
	{32,98,117,105,108,100,115,46,46,46}
};
static BBString _s12={
	&bbStringClass,
	0x6be86e1ef647c89b,
	17,
	{32,100,111,119,110,108,111,97,100,32,105,110,102,111,46,46,46
}
};
static BBString _s3={
	&bbStringClass,
	0xf78bacf6459e6394,
	1,
	{34}
};
static BBString _s14={
	&bbStringClass,
	0xd7333073f5131196,
	7,
	{34,110,97,109,101,34,58}
};
static BBString _s8={
	&bbStringClass,
	0x575a06ed766381cb,
	1,
	{44}
};
static BBString _s18={
	&bbStringClass,
	0xdf7d0ad94430545e,
	3,
	{46,46,46}
};
static BBString _s13={
	&bbStringClass,
	0x718d51bdea258bb1,
	8,
	{47,98,117,105,108,100,115,47}
};
static BBString _s19={
	&bbStringClass,
	0x883bb46e7ece9c01,
	11,
	{47,100,111,119,110,108,111,97,100,115,47}
};
static BBString _s16={
	&bbStringClass,
	0xa51cb897e9712eca,
	2,
	{58,32}
};
static BBString _s17={
	&bbStringClass,
	0xb39462398497bb5,
	12,
	{68,111,119,110,108,111,97,100,105,110,103,32}
};
static BBString _s0={
	&bbStringClass,
	0xbccb4cbb78550964,
	29,
	{70,101,116,99,104,105,110,103,32,80,97,112,101,114,32,105,110
	,102,111,114,109,97,116,105,111,110,46,46,46}
};
static BBString _s5={
	&bbStringClass,
	0xe7154d0d6b738623,
	23,
	{70,101,116,99,104,105,110,103,32,80,97,112,101,114,32,118,101
	,114,115,105,111,110,32}
};
static BBString _s15={
	&bbStringClass,
	0x94931f56ba357064,
	14,
	{74,97,114,32,102,111,114,32,80,97,112,101,114,32}
};
static BBString _s9={
	&bbStringClass,
	0x6d920e4c8c3f053d,
	13,
	{76,97,116,101,115,116,32,80,97,112,101,114,32}
};
static BBString _s4={
	&bbStringClass,
	0xba1e3930ba9f6000,
	22,
	{76,97,116,101,115,116,32,80,97,112,101,114,32,118,101,114,115
	,105,111,110,58,32}
};
static BBString _s21={
	&bbStringClass,
	0xaaff72886fac87e6,
	9,
	{99,117,114,108,32,45,76,111,32}
};
static BBString _s1={
	&bbStringClass,
	0x9c22839ae252c105,
	40,
	{104,116,116,112,115,58,47,47,112,97,112,101,114,109,99,46,105
	,111,47,97,112,105,47,118,50,47,112,114,111,106,101,99,116
	,115,47,112,97,112,101,114}
};
static BBString _s7={
	&bbStringClass,
	0x1ade45d0ae0fb5e9,
	50,
	{104,116,116,112,115,58,47,47,112,97,112,101,114,109,99,46,105
	,111,47,97,112,105,47,118,50,47,112,114,111,106,101,99,116
	,115,47,112,97,112,101,114,47,118,101,114,115,105,111,110,115
	,47}
};
static BBString _s20={
	&bbStringClass,
	0x7e5d6407a78b8241,
	9,
	{112,97,112,101,114,46,106,97,114}
};
static BBString _s2={
	&bbStringClass,
	0x724211ca82537c65,
	8,
	{116,109,112,46,106,115,111,110}
};
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
void _m_paper_dl_BlockingDownload(BBSTRING bbt_url,BBSTRING bbt_dest){
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"BlockingDownload",
		{
			{
				BBDEBUGDECL_LOCAL,
				"url",
				"$",
				.var_address=&bbt_url
			},
			{
				BBDEBUGDECL_LOCAL,
				"dest",
				"$",
				.var_address=&bbt_dest
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0xad5b3ae52c780f1b, 35, 0};
	bbOnDebugEnterStm(&__stmt_0);
	system_(bbStringConcat(bbStringConcat(bbStringConcat(&_s21,bbt_dest),&_s22),bbt_url));
	bbOnDebugLeaveScope();
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_standardio_standardio();
		bbRegisterSource(0xad5b3ae52c780f1b, "/home/hezkore/Projects/Code/BlitzMax/paper-downloader/src/paper-dl.bmx");
		BBSTRING bbt_json=(&bbEmptyString);
		BBARRAY bbt_values=(&bbEmptyArray);
		BBSTRING bbt_latestVersion=(&bbEmptyString);
		BBSTRING bbt_latestBuild=(&bbEmptyString);
		BBSTRING bbt_downloadName=(&bbEmptyString);
		struct BBDebugScope_5 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"paper-dl",
			{
				{
					BBDEBUGDECL_LOCAL,
					"json",
					"$",
					.var_address=&bbt_json
				},
				{
					BBDEBUGDECL_LOCAL,
					"values",
					"[]$",
					.var_address=&bbt_values
				},
				{
					BBDEBUGDECL_LOCAL,
					"latestVersion",
					"$",
					.var_address=&bbt_latestVersion
				},
				{
					BBDEBUGDECL_LOCAL,
					"latestBuild",
					"$",
					.var_address=&bbt_latestBuild
				},
				{
					BBDEBUGDECL_LOCAL,
					"downloadName",
					"$",
					.var_address=&bbt_downloadName
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0xad5b3ae52c780f1b, 6, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_standardio_Print(&_s0);
		struct BBDebugStm __stmt_1 = {0xad5b3ae52c780f1b, 7, 0};
		bbOnDebugEnterStm(&__stmt_1);
		_m_paper_dl_BlockingDownload(&_s1,&_s2);
		struct BBDebugStm __stmt_2 = {0xad5b3ae52c780f1b, 8, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_json=brl_stream_LoadString((BBOBJECT)&_s2);
		struct BBDebugStm __stmt_3 = {0xad5b3ae52c780f1b, 9, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_values=bbStringSplit((BBSTRING)bbt_json,&_s3);
		struct BBDebugStm __stmt_4 = {0xad5b3ae52c780f1b, 10, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_latestVersion=((BBSTRING*)BBARRAYDATAINDEX((bbt_values),(bbt_values)->dims,((BBUINT)((bbt_values->scales[0])-2))))[((BBUINT)((bbt_values->scales[0])-2))];
		struct BBDebugStm __stmt_5 = {0xad5b3ae52c780f1b, 11, 0};
		bbOnDebugEnterStm(&__stmt_5);
		brl_standardio_Print(bbStringConcat(&_s4,bbt_latestVersion));
		struct BBDebugStm __stmt_6 = {0xad5b3ae52c780f1b, 14, 0};
		bbOnDebugEnterStm(&__stmt_6);
		brl_standardio_Print(bbStringConcat(bbStringConcat(&_s5,bbt_latestVersion),&_s6));
		struct BBDebugStm __stmt_7 = {0xad5b3ae52c780f1b, 15, 0};
		bbOnDebugEnterStm(&__stmt_7);
		_m_paper_dl_BlockingDownload(bbStringConcat(&_s7,bbt_latestVersion),&_s2);
		struct BBDebugStm __stmt_8 = {0xad5b3ae52c780f1b, 16, 0};
		bbOnDebugEnterStm(&__stmt_8);
		bbt_json=brl_stream_LoadString((BBOBJECT)&_s2);
		struct BBDebugStm __stmt_9 = {0xad5b3ae52c780f1b, 17, 0};
		bbOnDebugEnterStm(&__stmt_9);
		bbt_values=bbStringSplit((BBSTRING)bbt_json,&_s8);
		struct BBDebugStm __stmt_10 = {0xad5b3ae52c780f1b, 18, 0};
		bbOnDebugEnterStm(&__stmt_10);
		bbt_latestBuild=bbStringFromInt(bbStringToInt(((BBSTRING*)BBARRAYDATAINDEX((bbt_values),(bbt_values)->dims,((BBUINT)((bbt_values->scales[0])-1))))[((BBUINT)((bbt_values->scales[0])-1))]));
		struct BBDebugStm __stmt_11 = {0xad5b3ae52c780f1b, 19, 0};
		bbOnDebugEnterStm(&__stmt_11);
		brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(&_s9,bbt_latestVersion),&_s10),bbt_latestBuild));
		struct BBDebugStm __stmt_12 = {0xad5b3ae52c780f1b, 22, 0};
		bbOnDebugEnterStm(&__stmt_12);
		brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s5,bbt_latestVersion),&_s11),bbt_latestBuild),&_s12));
		struct BBDebugStm __stmt_13 = {0xad5b3ae52c780f1b, 23, 0};
		bbOnDebugEnterStm(&__stmt_13);
		_m_paper_dl_BlockingDownload(bbStringConcat(bbStringConcat(bbStringConcat(&_s7,bbt_latestVersion),&_s13),bbt_latestBuild),&_s2);
		struct BBDebugStm __stmt_14 = {0xad5b3ae52c780f1b, 24, 0};
		bbOnDebugEnterStm(&__stmt_14);
		bbt_json=brl_stream_LoadString((BBOBJECT)&_s2);
		struct BBDebugStm __stmt_15 = {0xad5b3ae52c780f1b, 25, 0};
		bbOnDebugEnterStm(&__stmt_15);
		BBARRAY bbt_=bbStringSplit((BBSTRING)bbt_json,&_s14);
		bbt_downloadName=((BBSTRING*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,1U))[1U];
		struct BBDebugStm __stmt_16 = {0xad5b3ae52c780f1b, 26, 0};
		bbOnDebugEnterStm(&__stmt_16);
		BBARRAY bbt_2=bbStringSplit((BBSTRING)bbt_downloadName,&_s3);
		bbt_downloadName=((BBSTRING*)BBARRAYDATAINDEX((bbt_2),(bbt_2)->dims,1U))[1U];
		struct BBDebugStm __stmt_17 = {0xad5b3ae52c780f1b, 27, 0};
		bbOnDebugEnterStm(&__stmt_17);
		brl_standardio_Print(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s15,bbt_latestVersion),&_s11),bbt_latestBuild),&_s16),bbt_downloadName));
		struct BBDebugStm __stmt_18 = {0xad5b3ae52c780f1b, 30, 0};
		bbOnDebugEnterStm(&__stmt_18);
		brl_standardio_Print(bbStringConcat(bbStringConcat(&_s17,bbt_downloadName),&_s18));
		struct BBDebugStm __stmt_19 = {0xad5b3ae52c780f1b, 31, 0};
		bbOnDebugEnterStm(&__stmt_19);
		_m_paper_dl_BlockingDownload(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s7,bbt_latestVersion),&_s13),bbt_latestBuild),&_s19),bbt_downloadName),&_s20);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}