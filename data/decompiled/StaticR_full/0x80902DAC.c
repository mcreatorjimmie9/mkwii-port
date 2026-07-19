/* Function at 0x80902DAC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80902DAC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80902DBC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80902DC4
    r30 = r3;
    if (==) goto 0x0x80902df8;
    /* lis r4, 0 */ // 0x80902DD0
    /* li r5, 0x14 */ // 0x80902DD4
    r4 = r4 + 0; // 0x80902DD8
    /* li r6, 0xff */ // 0x80902DDC
    r3 = r3 + 0xb00; // 0x80902DE0
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (<=) goto 0x0x80902df8;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80902DFC
    r30 = *(8 + r1); // lwz @ 0x80902E00
}