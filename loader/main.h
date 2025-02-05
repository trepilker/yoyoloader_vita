#ifndef __MAIN_H__
#define __MAIN_H__

#include <psp2/touch.h>
#include "config.h"
#include "so_util.h"

extern so_module yoyoloader_mod;

#if 0
#define debugPrintf printf
#else
int debugPrintf(char *text, ...);
#endif

int ret0();

int sceKernelChangeThreadCpuAffinityMask(SceUID thid, int cpuAffinityMask);

extern SceTouchPanelInfo panelInfoFront, panelInfoBack;

#endif
