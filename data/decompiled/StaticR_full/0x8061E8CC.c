/* Function at 0x8061E8CC, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E8CC(int r3, int r4, int r5, int r6, int r7)
{
    r3 = *(0 + r3); // lwz @ 0x8061E8CC
    r0 = r5;
    r7 = r6;
    r5 = r4;
    r3 = *(8 + r3); // lwz @ 0x8061E8DC
    r6 = r0;
    /* li r4, 9 */ // 0x8061E8E4
    /* b 0x805fbdac */ // 0x8061E8E8
}