/* Function at 0x8060F1A8, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8060F1A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8060F1B0
    r4 = *(0 + r3); // lwz @ 0x8060F1B4
    r4 = *(4 + r4); // lwz @ 0x8060F1B8
    r0 = *(8 + r4); // lwz @ 0x8060F1BC
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x8060F1C4
    FUN_8061E908(); // bl 0x8061E908
    /* li r4, 1 */ // 0x8060F1CC
    FUN_805FA020(r4); // bl 0x805FA020
    r0 = *(0x14 + r1); // lwz @ 0x8060F1D4
    return;
}