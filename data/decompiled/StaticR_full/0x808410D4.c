/* Function at 0x808410D4, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808410D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x808410DC
    /* li r6, 0 */ // 0x808410E0
    *(0x14 + r1) = r0; // stw @ 0x808410E4
    *(0xc + r1) = r31; // stw @ 0x808410E8
    /* lis r31, 0 */ // 0x808410EC
    *(8 + r1) = r30; // stw @ 0x808410F0
    /* lis r30, 0 */ // 0x808410F4
    r30 = r30 + 0; // 0x808410F8
    r3 = *(0 + r31); // lwz @ 0x808410FC
    r5 = r30 + 0xd2; // 0x80841100
    FUN_805CFD60(r5); // bl 0x805CFD60
    if (==) goto 0x0x80841114;
    /* b 0x80841128 */ // 0x80841110
    r3 = *(0 + r31); // lwz @ 0x80841114
    r5 = r30 + 0xf2; // 0x80841118
    /* li r4, 0 */ // 0x8084111C
    /* li r6, 0 */ // 0x80841120
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r0 = *(0x14 + r1); // lwz @ 0x80841128
    r31 = *(0xc + r1); // lwz @ 0x8084112C
    r30 = *(8 + r1); // lwz @ 0x80841130
    return;
}