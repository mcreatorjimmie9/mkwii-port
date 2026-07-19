/* Function at 0x80908A8C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80908A8C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    r7 = r5;
    *(0x14 + r1) = r0; // stw @ 0x80908A9C
    /* li r4, 5 */ // 0x80908AA0
    /* li r5, 8 */ // 0x80908AA4
    *(0xc + r1) = r31; // stw @ 0x80908AA8
    r31 = r3;
    r3 = r3 + 4; // 0x80908AB0
    FUN_805BCA84(r4, r5, r3); // bl 0x805BCA84
    /* lis r4, 0 */ // 0x80908AB8
    /* lfs f1, 4(r31) */ // 0x80908ABC
    /* lfs f0, 0(r4) */ // 0x80908AC0
    /* fadds f0, f1, f0 */ // 0x80908AC4
    /* stfs f0, 4(r31) */ // 0x80908AC8
    r31 = *(0xc + r1); // lwz @ 0x80908ACC
    r0 = *(0x14 + r1); // lwz @ 0x80908AD0
    return;
}