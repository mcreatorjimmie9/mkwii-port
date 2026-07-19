/* Function at 0x808E41EC, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_808E41EC(int r3, int r4, int r5)
{
    r0 = r4 rlwinm 4; // rlwinm
    r3 = r3 + r0; // 0x808E41F0
    r0 = *(0x11 + r3); // lbz @ 0x808E41F4
    if (==) goto 0x0x808e4210;
    /* mulli r0, r5, 0x2c */ // 0x808E4200
    r3 = *(8 + r3); // lwz @ 0x808E4204
    r3 = r3 + r0; // 0x808E4208
    return;
    /* li r3, 0 */ // 0x808E4210
    return;
}