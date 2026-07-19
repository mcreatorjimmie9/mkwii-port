/* Function at 0x807DBEB4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DBEB4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807DBEBC
    *(0x14 + r1) = r0; // stw @ 0x807DBEC0
    *(0xc + r1) = r31; // stw @ 0x807DBEC4
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x807DBECC
    FUN_805A47A8(r5); // bl 0x805A47A8
    r4 = *(4 + r3); // lwz @ 0x807DBED4
    r0 = *(0x10 + r4); // lha @ 0x807DBED8
    *(4 + r31) = r0; // stw @ 0x807DBEDC
    r4 = *(4 + r3); // lwz @ 0x807DBEE0
    r0 = *(0x12 + r4); // lbz @ 0x807DBEE4
    *(8 + r31) = r0; // stw @ 0x807DBEE8
    r3 = *(4 + r3); // lwz @ 0x807DBEEC
    r0 = *(0x13 + r3); // lbz @ 0x807DBEF0
    *(0xc + r31) = r0; // stb @ 0x807DBEF4
    r31 = *(0xc + r1); // lwz @ 0x807DBEF8
    r0 = *(0x14 + r1); // lwz @ 0x807DBEFC
    return;
}