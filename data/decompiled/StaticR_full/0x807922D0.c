/* Function at 0x807922D0, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807922D0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807922D8
    *(0x14 + r1) = r0; // stw @ 0x807922DC
    *(0xc + r1) = r31; // stw @ 0x807922E0
    r31 = r3;
    r5 = *(0 + r4); // lwz @ 0x807922E8
    r4 = *(0x5bc + r5); // lwz @ 0x807922EC
    r5 = r5 + 0x6bc; // 0x807922F0
    FUN_805E3430(r5); // bl 0x805E3430
}