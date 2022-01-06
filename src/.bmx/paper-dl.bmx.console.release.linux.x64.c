#include "paper-dl.bmx.console.release.linux.x64.h"
static BBString _s0={
	&bbStringClass,
	0x8efb267fc2dbbcb0,
	62,
	{99,117,114,108,32,45,111,32,116,101,115,116,46,106,115,111,110
	,32,104,116,116,112,115,58,47,47,112,97,112,101,114,109,99
	,46,105,111,47,97,112,105,47,118,50,47,112,114,111,106,101
	,99,116,115,47,119,97,116,101,114,102,97,108,108}
};
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_standardio_standardio();
		__bb_pub_freeprocess_freeprocess();
		struct pub_freeprocess_TProcess_obj* bbt_proc=(struct pub_freeprocess_TProcess_obj*)pub_freeprocess_CreateProcess(&_s0,0);
		return 0;
	}
	return 0;
}