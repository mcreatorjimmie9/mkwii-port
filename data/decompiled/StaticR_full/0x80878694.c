/* Function at 0x80878694, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80878694(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8087869C
    *(0x14 + r1) = r0; // stw @ 0x808786A0
    *(0xc + r1) = r31; // stw @ 0x808786A4
    r31 = r3;
    r3 = r3 + 0x98; // 0x808786AC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x808786B4
    /* cntlzw r0, r0 */ // 0x808786B8
    /* srwi r0, r0, 5 */ // 0x808786BC
    *(0x80 + r31) = r0; // stb @ 0x808786C0
    r31 = *(0xc + r1); // lwz @ 0x808786C4
    r0 = *(0x14 + r1); // lwz @ 0x808786C8
    return;
}