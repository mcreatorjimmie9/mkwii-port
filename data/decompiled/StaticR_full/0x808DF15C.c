/* Function at 0x808DF15C, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808DF15C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x808DF174
    r29 = r3;
    r31 = *(0 + r4); // lwz @ 0x808DF17C
    /* clrlwi. r0, r31, 0x1b */ // 0x808DF180
    if (==) goto 0x0x808df1a4;
    /* lis r3, 0 */ // 0x808DF188
    /* lis r5, 0 */ // 0x808DF18C
    r3 = r3 + 0; // 0x808DF190
    /* li r4, 0x3c */ // 0x808DF194
    r5 = r5 + 0; // 0x808DF198
    /* crclr cr1eq */ // 0x808DF19C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(4 + r29) = r31; // stw @ 0x808DF1A4
    r4 = r30;
    r3 = r29 + 4; // 0x808DF1AC
    /* li r5, 0 */ // 0x808DF1B0
    /* li r6, 0 */ // 0x808DF1B4
    FUN_805EB518(r4, r3, r5, r6); // bl 0x805EB518
    r0 = *(0x24 + r1); // lwz @ 0x808DF1BC
    r31 = *(0x1c + r1); // lwz @ 0x808DF1C0
    r30 = *(0x18 + r1); // lwz @ 0x808DF1C4
    r29 = *(0x14 + r1); // lwz @ 0x808DF1C8
    return;
}