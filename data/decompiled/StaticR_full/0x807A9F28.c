/* Function at 0x807A9F28, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807A9F28(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807A9F30
    *(0x14 + r1) = r0; // stw @ 0x807A9F34
    *(0xc + r1) = r31; // stw @ 0x807A9F38
    r31 = r3;
    r5 = *(0 + r4); // lwz @ 0x807A9F40
    r4 = *(0x5bc + r5); // lwz @ 0x807A9F44
    r5 = r5 + 0x6bc; // 0x807A9F48
    FUN_805E3430(r5); // bl 0x805E3430
}