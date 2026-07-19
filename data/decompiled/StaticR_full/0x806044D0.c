/* Function at 0x806044D0, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806044D0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806044E8
    r29 = r3;
    r31 = *(0 + r4); // lwz @ 0x806044F0
    /* clrlwi. r0, r31, 0x1b */ // 0x806044F4
    if (==) goto 0x0x80604518;
    /* lis r3, 0 */ // 0x806044FC
    /* lis r5, 0 */ // 0x80604500
    r3 = r3 + 0; // 0x80604504
    /* li r4, 0x3c */ // 0x80604508
    r5 = r5 + 0; // 0x8060450C
    /* crclr cr1eq */ // 0x80604510
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0 + r29) = r31; // stw @ 0x80604518
    r3 = r29;
    r4 = r30;
    /* li r5, 0 */ // 0x80604524
    /* li r6, 0 */ // 0x80604528
    FUN_805EB518(r3, r4, r5, r6); // bl 0x805EB518
    r0 = *(0x24 + r1); // lwz @ 0x80604530
    r31 = *(0x1c + r1); // lwz @ 0x80604534
    r30 = *(0x18 + r1); // lwz @ 0x80604538
    r29 = *(0x14 + r1); // lwz @ 0x8060453C
    return;
}