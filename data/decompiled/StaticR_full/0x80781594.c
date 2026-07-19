/* Function at 0x80781594, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80781594(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x8078159C
    *(0xc + r1) = r31; // stw @ 0x807815A4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807815AC
    r30 = r3;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807815B8
    /* li r3, 0xb0 */ // 0x807815BC
    r4 = r4 + 0; // 0x807815C0
    *(0 + r30) = r4; // stw @ 0x807815C4
    r4 = *(0 + r31); // lwz @ 0x807815C8
    r0 = *(0x28 + r4); // lha @ 0x807815CC
    *(0xb4 + r30) = r0; // stb @ 0x807815D0
    FUN_805E3430(r4); // bl 0x805E3430
}