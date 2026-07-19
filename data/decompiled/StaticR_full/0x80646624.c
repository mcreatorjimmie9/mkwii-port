/* Function at 0x80646624, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80646624(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8064662C
    *(0x24 + r1) = r0; // stw @ 0x80646630
    *(0x1c + r1) = r31; // stw @ 0x80646634
    r31 = r3;
    r5 = *(0x16 + r3); // lha @ 0x8064663C
    r0 = *(0 + r4); // lha @ 0x80646640
    if (==) goto 0x0x8064665c;
    /* lis r3, 0 */ // 0x8064664C
    r0 = *(0 + r3); // lha @ 0x80646650
    if (!=) goto 0x0x806466cc;
    r3 = r31;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80646664
    /* clrlwi r0, r3, 0x18 */ // 0x80646668
    r4 = *(0 + r4); // lwz @ 0x8064666C
    /* lis r3, 0 */ // 0x80646670
    /* mulli r0, r0, 0x248 */ // 0x80646674
    r3 = *(0 + r3); // lwz @ 0x80646678
    r6 = *(0x14 + r4); // lwz @ 0x8064667C
    /* li r5, 0 */ // 0x80646684
    r6 = r6 + r0; // 0x80646688
    r0 = *(0x44 + r6); // lbz @ 0x8064668C
    *(8 + r1) = r0; // stb @ 0x80646690
    FUN_805A7E1C(r4, r5); // bl 0x805A7E1C
    r4 = *(0x10 + r31); // lbz @ 0x80646698
    r0 = *(8 + r1); // lbz @ 0x8064669C
    if (==) goto 0x0x806466cc;
    /* clrlwi r0, r3, 0x18 */ // 0x806466A8
    if (==) goto 0x0x806466cc;
    /* li r0, 0xff */ // 0x806466B4
    *(0x11 + r31) = r0; // stb @ 0x806466B8
    r3 = r31;
    r4 = *(8 + r1); // lbz @ 0x806466C0
    *(0x10 + r31) = r4; // stb @ 0x806466C4
    FUN_8064635C(r3); // bl 0x8064635C
    r0 = *(0x24 + r1); // lwz @ 0x806466CC
    r31 = *(0x1c + r1); // lwz @ 0x806466D0
    return;
}