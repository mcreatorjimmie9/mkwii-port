/* Function at 0x80908B34, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80908B34(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    r7 = r5;
    *(0x14 + r1) = r0; // stw @ 0x80908B44
    /* li r4, 3 */ // 0x80908B48
    /* li r5, 7 */ // 0x80908B4C
    *(0xc + r1) = r31; // stw @ 0x80908B50
    r31 = r3;
    r3 = r3 + 4; // 0x80908B58
    FUN_805BCA84(r4, r5, r3); // bl 0x805BCA84
    /* lis r4, 0 */ // 0x80908B60
    /* lfs f1, 4(r31) */ // 0x80908B64
    /* lfs f0, 0(r4) */ // 0x80908B68
    /* fadds f0, f1, f0 */ // 0x80908B6C
    /* stfs f0, 4(r31) */ // 0x80908B70
    r31 = *(0xc + r1); // lwz @ 0x80908B74
    r0 = *(0x14 + r1); // lwz @ 0x80908B78
    return;
}