/* Function at 0x8060563C, size=256 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8060563C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80605644
    /* lis r3, 0 */ // 0x80605648
    *(0x34 + r1) = r0; // stw @ 0x8060564C
    r6 = r6 + 0; // 0x80605650
    *(0x2c + r1) = r31; // stw @ 0x80605654
    r31 = r6 + 0x9f; // 0x80605658
    /* li r6, 0 */ // 0x8060565C
    *(0x28 + r1) = r30; // stw @ 0x80605660
    r30 = r5;
    r5 = r31;
    *(0x24 + r1) = r29; // stw @ 0x8060566C
    r29 = r4;
    /* li r4, 0 */ // 0x80605674
    r3 = *(0 + r3); // lwz @ 0x80605678
    FUN_805CFD60(r5, r4); // bl 0x805CFD60
    /* clrlwi. r0, r3, 0x1b */ // 0x80605680
    *(0x14 + r1) = r3; // stw @ 0x80605684
    if (==) goto 0x0x806056a8;
    /* lis r3, 0 */ // 0x8060568C
    /* lis r5, 0 */ // 0x80605690
    r3 = r3 + 0; // 0x80605694
    /* li r4, 0x3c */ // 0x80605698
    r5 = r5 + 0; // 0x8060569C
    /* crclr cr1eq */ // 0x806056A0
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r4 = r31;
    /* li r5, 0 */ // 0x806056B0
    /* li r6, 0 */ // 0x806056B4
    FUN_805EB518(r4, r3, r5, r6); // bl 0x805EB518
    /* lis r31, 0 */ // 0x806056BC
    r3 = r29;
    r31 = r31 + 0; // 0x806056C4
    r4 = r31 + 0xb1; // 0x806056CC
    /* li r6, 0 */ // 0x806056D0
    FUN_805EBE08(r3, r5, r4, r6); // bl 0x805EBE08
    r3 = *(0x14 + r1); // lwz @ 0x806056D8
    /* li r0, 0 */ // 0x806056DC
    *(0x10 + r1) = r3; // stw @ 0x806056E0
    r3 = r29;
    r6 = r31 + 0xbd; // 0x806056EC
    *(8 + r1) = r0; // stw @ 0x806056F0
    /* li r4, 0 */ // 0x806056F4
    /* li r7, 0 */ // 0x806056F8
    /* li r8, 0 */ // 0x806056FC
    /* li r9, 0 */ // 0x80605700
    /* li r10, 9 */ // 0x80605704
    FUN_805EDB0C(r4, r7, r8, r9, r10); // bl 0x805EDB0C
    r3 = r30;
    r4 = r31 + 0xc2; // 0x80605710
    /* li r6, 0 */ // 0x80605718
    FUN_805EC240(r3, r4, r5, r6); // bl 0x805EC240
    r0 = *(0x34 + r1); // lwz @ 0x80605720
    r31 = *(0x2c + r1); // lwz @ 0x80605724
    r30 = *(0x28 + r1); // lwz @ 0x80605728
    r29 = *(0x24 + r1); // lwz @ 0x8060572C
    return;
}