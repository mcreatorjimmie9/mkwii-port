/* Function at 0x806045C8, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806045C8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x806045D0
    /* li r6, 0 */ // 0x806045D4
    *(0x1c + r1) = r31; // stw @ 0x806045DC
    *(0x18 + r1) = r30; // stw @ 0x806045E0
    /* lis r30, 0 */ // 0x806045E4
    r30 = r30 + 0; // 0x806045E8
    *(0x14 + r1) = r29; // stw @ 0x806045EC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806045F4
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806045FC
    r5 = r30;
    FUN_805CFF2C(r5); // bl 0x805CFF2C
    /* clrlwi. r0, r3, 0x1b */ // 0x80604608
    r31 = r3;
    if (==) goto 0x0x80604630;
    /* lis r3, 0 */ // 0x80604614
    /* lis r5, 0 */ // 0x80604618
    r3 = r3 + 0; // 0x8060461C
    /* li r4, 0x3c */ // 0x80604620
    r5 = r5 + 0; // 0x80604624
    /* crclr cr1eq */ // 0x80604628
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0 + r28) = r31; // stw @ 0x80604630
    r3 = r28;
    r4 = r30;
    /* li r5, 0 */ // 0x8060463C
    /* li r6, 0 */ // 0x80604640
    FUN_805EB518(r3, r4, r5, r6); // bl 0x805EB518
    r0 = *(0x12 + r28); // lbz @ 0x80604648
    if (==) goto 0x0x806046ac;
    /* lis r3, 0 */ // 0x80604654
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x8060465C
    r5 = r30;
    /* li r6, 0 */ // 0x80604664
    FUN_805CFF9C(r3, r4, r5, r6); // bl 0x805CFF9C
    /* clrlwi. r0, r3, 0x1b */ // 0x8060466C
    r31 = r3;
    if (==) goto 0x0x80604694;
    /* lis r3, 0 */ // 0x80604678
    /* lis r5, 0 */ // 0x8060467C
    r3 = r3 + 0; // 0x80604680
    /* li r4, 0x3c */ // 0x80604684
    r5 = r5 + 0; // 0x80604688
    /* crclr cr1eq */ // 0x8060468C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(4 + r28) = r31; // stw @ 0x80604694
    r4 = r30;
    r3 = r28 + 4; // 0x8060469C
    /* li r5, 0 */ // 0x806046A0
    /* li r6, 0 */ // 0x806046A4
    FUN_805EB518(r4, r3, r5, r6); // bl 0x805EB518
    r0 = *(0x24 + r1); // lwz @ 0x806046AC
    r31 = *(0x1c + r1); // lwz @ 0x806046B0
    r30 = *(0x18 + r1); // lwz @ 0x806046B4
    r29 = *(0x14 + r1); // lwz @ 0x806046B8
    r28 = *(0x10 + r1); // lwz @ 0x806046BC
    return;
}