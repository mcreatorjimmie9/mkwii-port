/* Function at 0x805D8578, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D8578(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0x2800 */ // 0x805D8580
    /* li r7, 1 */ // 0x805D8584
    *(0x14 + r1) = r0; // stw @ 0x805D8588
    *(0xc + r1) = r31; // stw @ 0x805D858C
    r31 = r3;
    /* lis r3, 0 */ // 0x805D8594
    r3 = *(0 + r3); // lwz @ 0x805D8598
    r4 = *(0x18 + r31); // lwz @ 0x805D859C
    r6 = *(0x20 + r31); // lwz @ 0x805D85A0
    FUN_805BBCDC(r3); // bl 0x805BBCDC
    /* addis r4, r31, 2 */ // 0x805D85A8
    /* li r0, 0 */ // 0x805D85AC
    *(0x5000 + r4) = r0; // stb @ 0x805D85B0
    *(0x5004 + r4) = r3; // stw @ 0x805D85B4
    r0 = *(0x14 + r1); // lwz @ 0x805D85B8
    r31 = *(0xc + r1); // lwz @ 0x805D85BC
    return;
}