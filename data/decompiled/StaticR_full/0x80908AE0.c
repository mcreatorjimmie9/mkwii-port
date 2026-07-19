/* Function at 0x80908AE0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80908AE0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    r7 = r5;
    *(0x14 + r1) = r0; // stw @ 0x80908AF0
    /* li r4, 4 */ // 0x80908AF4
    /* li r5, 6 */ // 0x80908AF8
    *(0xc + r1) = r31; // stw @ 0x80908AFC
    r31 = r3;
    r3 = r3 + 4; // 0x80908B04
    FUN_805BCA84(r4, r5, r3); // bl 0x805BCA84
    /* lis r4, 0 */ // 0x80908B0C
    /* lfs f1, 4(r31) */ // 0x80908B10
    /* lfs f0, 0(r4) */ // 0x80908B14
    /* fadds f0, f1, f0 */ // 0x80908B18
    /* stfs f0, 4(r31) */ // 0x80908B1C
    r31 = *(0xc + r1); // lwz @ 0x80908B20
    r0 = *(0x14 + r1); // lwz @ 0x80908B24
    return;
}