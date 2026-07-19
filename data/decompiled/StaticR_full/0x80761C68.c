/* Function at 0x80761C68, size=80 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_80761C68(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x80761C70
    /* li r7, 0 */ // 0x80761C74
    *(0x24 + r1) = r0; // stw @ 0x80761C78
    /* li r0, 0 */ // 0x80761C7C
    r6 = *(0 + r5); // lwzu @ 0x80761C84
    *(0x10 + r1) = r6; // stw @ 0x80761C88
    /* li r6, 2 */ // 0x80761C8C
    r8 = *(4 + r5); // lwz @ 0x80761C90
    *(8 + r1) = r0; // stw @ 0x80761C98
    *(0x14 + r1) = r8; // stw @ 0x80761C9C
    *(0xc + r1) = r0; // stw @ 0x80761CA0
    FUN_808A1444(r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80761CA8
    return;
}