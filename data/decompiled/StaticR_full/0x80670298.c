/* Function at 0x80670298, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80670298(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806702A4
    r31 = r3;
    FUN_805B96F0(); // bl 0x805B96F0
    /* li r4, 0 */ // 0x806702B0
    /* li r0, -1 */ // 0x806702B4
    *(0xc4 + r31) = r4; // stb @ 0x806702B8
    r3 = r31;
    *(0xe8 + r31) = r4; // stw @ 0x806702C0
    *(0xf0 + r31) = r4; // stw @ 0x806702C4
    *(0xf4 + r31) = r0; // stw @ 0x806702C8
    *(0xf8 + r31) = r0; // stw @ 0x806702CC
    *(0xfc + r31) = r4; // stb @ 0x806702D0
    r31 = *(0xc + r1); // lwz @ 0x806702D4
    r0 = *(0x14 + r1); // lwz @ 0x806702D8
    return;
}