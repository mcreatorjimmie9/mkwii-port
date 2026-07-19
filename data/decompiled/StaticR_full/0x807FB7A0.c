/* Function at 0x807FB7A0, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807FB7A0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    /* li r5, 0 */ // 0x807FB7B4
    *(8 + r1) = r30; // stw @ 0x807FB7B8
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807FB7C4
    *(0xbc + r30) = r31; // stw @ 0x807FB7C8
    r4 = r4 + 0; // 0x807FB7CC
    r3 = r30;
    *(0 + r30) = r4; // stw @ 0x807FB7D4
    r31 = *(0xc + r1); // lwz @ 0x807FB7D8
    r30 = *(8 + r1); // lwz @ 0x807FB7DC
    r0 = *(0x14 + r1); // lwz @ 0x807FB7E0
    return;
}