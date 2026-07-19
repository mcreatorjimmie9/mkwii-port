/* Function at 0x807ED264, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807ED264(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807ED274
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807ED27C
    r30 = r3;
    if (==) goto 0x0x807ed2c0;
    r0 = *(8 + r3); // lwz @ 0x807ED288
    /* lis r4, 0 */ // 0x807ED28C
    r4 = r4 + 0; // 0x807ED290
    *(0 + r3) = r4; // stw @ 0x807ED294
    if (==) goto 0x0x807ed2b0;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807ED2A8
    *(8 + r30) = r0; // stw @ 0x807ED2AC
    if (<=) goto 0x0x807ed2c0;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807ED2C4
    r30 = *(8 + r1); // lwz @ 0x807ED2C8
    r0 = *(0x14 + r1); // lwz @ 0x807ED2CC
}