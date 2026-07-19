/* Function at 0x808E4008, size=88 bytes */
/* Stack frame: 0 bytes */

int FUN_808E4008(int r3, int r4, int r5, int r6, int r7, int r8)
{
    r0 = r4 rlwinm 4; // rlwinm
    r6 = r3 + r0; // 0x808E400C
    r0 = *(0x11 + r6); // lbz @ 0x808E4010
    /* beqlr  */ // 0x808E4018
    r7 = *(4 + r3); // lbz @ 0x808E401C
    /* li r8, 0 */ // 0x808E4020
    /* b 0x808e4050 */ // 0x808E4024
    /* clrlwi r4, r8, 0x18 */ // 0x808E4028
    r3 = *(8 + r6); // lwz @ 0x808E402C
    /* mulli r0, r4, 0x2c */ // 0x808E4030
    r3 = r3 + r0; // 0x808E4034
    r0 = *(8 + r3); // lwz @ 0x808E4038
    if (!=) goto 0x0x808e404c;
    *(0xc + r6) = r4; // stw @ 0x808E4044
    return;
    r8 = r8 + 1; // 0x808E404C
    /* clrlwi r0, r8, 0x18 */ // 0x808E4050
    if (<) goto 0x0x808e4028;
    return;
}