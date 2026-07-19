/* Function at 0x807DBBD0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DBBD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807DBBDC
    r31 = r3;
    FUN_807D9874(); // bl 0x807D9874
    /* lis r4, 0 */ // 0x807DBBE8
    /* li r0, 0 */ // 0x807DBBEC
    r4 = r4 + 0; // 0x807DBBF0
    *(0x34 + r31) = r0; // stw @ 0x807DBBF4
    r3 = r31;
    *(0 + r31) = r4; // stw @ 0x807DBBFC
    r31 = *(0xc + r1); // lwz @ 0x807DBC00
    r0 = *(0x14 + r1); // lwz @ 0x807DBC04
    return;
}