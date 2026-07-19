/* Function at 0x808036DC, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808036DC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808036E4
    *(0x14 + r1) = r0; // stw @ 0x808036E8
    *(0xc + r1) = r31; // stw @ 0x808036EC
    r31 = r3;
    r5 = *(0 + r4); // lwz @ 0x808036F4
    /* lis r4, 0 */ // 0x808036F8
    r0 = *(0x120 + r3); // lbz @ 0x808036FC
    /* subf r0, r5, r0 */ // 0x80803700
    *(0x120 + r3) = r0; // stb @ 0x80803704
    /* clrlwi r5, r0, 0x18 */ // 0x80803708
    r0 = *(0 + r4); // lwz @ 0x8080370C
    if (>=) goto 0x0x80803728;
    /* li r4, 0 */ // 0x80803718
    /* li r0, 3 */ // 0x8080371C
    *(0x120 + r3) = r4; // stb @ 0x80803720
    *(0xb0 + r3) = r0; // stw @ 0x80803724
    r3 = *(8 + r3); // lwz @ 0x80803728
    /* li r4, 3 */ // 0x8080372C
    r5 = *(0x120 + r31); // lbz @ 0x80803730
    FUN_805EF304(r4); // bl 0x805EF304
    r3 = r31;
    FUN_80803754(r4, r3); // bl 0x80803754
    r0 = *(0x14 + r1); // lwz @ 0x80803740
    r31 = *(0xc + r1); // lwz @ 0x80803744
    return;
}