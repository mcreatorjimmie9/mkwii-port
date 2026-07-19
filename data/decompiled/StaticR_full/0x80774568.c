/* Function at 0x80774568, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80774568(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x18(r1) */ // 0x80774574
    /* fmr f31, f1 */ // 0x80774578
    *(0x14 + r1) = r31; // stw @ 0x8077457C
    /* li r31, 0 */ // 0x80774580
    *(0x10 + r1) = r30; // stw @ 0x80774584
    r30 = r3;
    /* b 0x807745a4 */ // 0x8077458C
    r3 = r30;
    /* clrlwi r4, r31, 0x18 */ // 0x80774594
    FUN_805E3430(r3); // bl 0x805E3430
    /* stfs f31, 0x64(r3) */ // 0x8077459C
    r31 = r31 + 1; // 0x807745A0
    r0 = *(0x10 + r30); // lbz @ 0x807745A4
    if (<) goto 0x0x80774590;
    r0 = *(0x24 + r1); // lwz @ 0x807745B0
    /* lfd f31, 0x18(r1) */ // 0x807745B4
    r31 = *(0x14 + r1); // lwz @ 0x807745B8
    r30 = *(0x10 + r1); // lwz @ 0x807745BC
}