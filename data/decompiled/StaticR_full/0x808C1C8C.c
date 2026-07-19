/* Function at 0x808C1C8C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808C1C8C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 1 */ // 0x808C1C98
    *(0xc + r1) = r31; // stw @ 0x808C1C9C
    r31 = r3;
    *(0x3dc + r3) = r0; // stb @ 0x808C1CA4
    *(0x6bc + r3) = r0; // stw @ 0x808C1CA8
    *(0x6c0 + r3) = r0; // stw @ 0x808C1CAC
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r4, r3, 0x18 */ // 0x808C1CB4
    /* lis r3, 0 */ // 0x808C1CB8
    r0 = r4 + 0x7ec; // 0x808C1CBC
    *(0x3e4 + r31) = r0; // stw @ 0x808C1CC0
    r3 = *(0 + r3); // lwz @ 0x808C1CC4
    r3 = *(0 + r3); // lwz @ 0x808C1CC8
    FUN_80685E54(r3); // bl 0x80685E54
    r3 = r31;
    FUN_808B2D44(r3); // bl 0x808B2D44
    r0 = *(0x14 + r1); // lwz @ 0x808C1CD8
    r31 = *(0xc + r1); // lwz @ 0x808C1CDC
    return;
}