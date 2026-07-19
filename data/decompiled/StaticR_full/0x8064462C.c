/* Function at 0x8064462C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8064462C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r6, 4 */ // 0x80644634
    *(0xc + r1) = r31; // stw @ 0x8064463C
    r31 = r5;
    /* li r5, 0 */ // 0x80644644
    *(8 + r1) = r30; // stw @ 0x80644648
    r30 = r3;
    FUN_805EFB54(r5); // bl 0x805EFB54
    /* lis r4, 0 */ // 0x80644654
    *(0x14 + r30) = r31; // stb @ 0x80644658
    r4 = r4 + 0; // 0x8064465C
    r3 = r30;
    r0 = r4 + 8; // 0x80644664
    *(0xc + r30) = r4; // stw @ 0x80644668
    *(8 + r30) = r0; // stw @ 0x8064466C
    r31 = *(0xc + r1); // lwz @ 0x80644670
    r30 = *(8 + r1); // lwz @ 0x80644674
    r0 = *(0x14 + r1); // lwz @ 0x80644678
    return;
}