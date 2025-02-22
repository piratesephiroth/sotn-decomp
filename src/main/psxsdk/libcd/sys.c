#include "common.h"

extern u8 CD_status;
extern u8 CD_mode;
extern u8 CD_com;

int CdStatus(void) { return CD_status; }

int CdMode(void) { return CD_mode; }

int CdLastCom(void) { return CD_com; }

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdLastPos);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdReset);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdFlush);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdSetDebug);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdComstr);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdIntstr);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdSync);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdReady);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdSyncCallback);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdReadyCallback);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdControl);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdControlF);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdControlB);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdMix);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdGetSector);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdDataCallback);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdDataSync);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdIntToPos);

INCLUDE_ASM("asm/us/main/nonmatchings/psxsdk/libcd/sys", CdPosToInt);
