/* Function at 0x8060454C, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8060454C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80604564
    r29 = r3;
    r31 = *(0 + r4); // lwz @ 0x8060456C
    /* clrlwi. r0, r31, 0x1b */ // 0x80604570
    if (==) goto 0x0x80604594;
    /* lis r3, 0 */ // 0x80604578
    /* lis r5, 0 */ // 0x8060457C
    r3 = r3 + 0; // 0x80604580
    /* li r4, 0x3c */ // 0x80604584
    r5 = r5 + 0; // 0x80604588
    /* crclr cr1eq */ // 0x8060458C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(4 + r29) = r31; // stw @ 0x80604594
    r4 = r30;
    r3 = r29 + 4; // 0x8060459C
    /* li r5, 0 */ // 0x806045A0
    /* li r6, 0 */ // 0x806045A4
    FUN_805EB518(r4, r3, r5, r6); // bl 0x805EB518
    r0 = *(0x24 + r1); // lwz @ 0x806045AC
    r31 = *(0x1c + r1); // lwz @ 0x806045B0
    r30 = *(0x18 + r1); // lwz @ 0x806045B4
    r29 = *(0x14 + r1); // lwz @ 0x806045B8
    return;
}