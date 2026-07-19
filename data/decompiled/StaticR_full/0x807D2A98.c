/* Function at 0x807D2A98, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807D2A98(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807D2AA0
    *(0xc + r1) = r31; // stw @ 0x807D2AA8
    *(8 + r1) = r30; // stw @ 0x807D2AAC
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x807D2AB4
    /* li r4, 0 */ // 0x807D2AB8
    r31 = *(0x94 + r3); // lwz @ 0x807D2ABC
    r3 = r31;
    FUN_807D1E48(r4, r3); // bl 0x807D1E48
    r4 = *(4 + r30); // lwz @ 0x807D2AC8
    r5 = r3;
    r3 = r30;
    FUN_807D2DBC(r3, r5, r3); // bl 0x807D2DBC
    r3 = r31;
    /* li r4, 1 */ // 0x807D2ADC
    FUN_807D1E48(r5, r3, r3, r4); // bl 0x807D1E48
    r4 = *(8 + r30); // lwz @ 0x807D2AE4
    r5 = r3;
    r3 = r30;
    FUN_807D2DBC(r4, r5, r3); // bl 0x807D2DBC
    r0 = *(0x14 + r1); // lwz @ 0x807D2AF4
    r31 = *(0xc + r1); // lwz @ 0x807D2AF8
    r30 = *(8 + r1); // lwz @ 0x807D2AFC
    return;
}