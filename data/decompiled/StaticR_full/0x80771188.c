/* Function at 0x80771188, size=72 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80771188(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x80771198
    r31 = r3;
    r5 = r31 + 0x10; // 0x807711A0
    r7 = *(0 + r3); // lwz @ 0x807711A4
    r6 = *(0x10 + r7); // lwz @ 0x807711AC
    r0 = *(0x14 + r7); // lwz @ 0x807711B0
    *(0x30 + r1) = r0; // stw @ 0x807711B4
    *(0x2c + r1) = r6; // stw @ 0x807711B8
    r0 = *(0x18 + r7); // lwz @ 0x807711BC
    *(0x34 + r1) = r0; // stw @ 0x807711C0
    FUN_805A4498(); // bl 0x805A4498
    FUN_805E3430(r3); // bl 0x805E3430
}