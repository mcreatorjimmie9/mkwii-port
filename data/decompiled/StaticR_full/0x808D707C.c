/* Function at 0x808D707C, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808D707C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808D7084
    /* li r4, 1 */ // 0x808D7088
    *(0x14 + r1) = r0; // stw @ 0x808D708C
    r3 = *(0 + r3); // lwz @ 0x808D7090
    FUN_805C5788(r3, r4); // bl 0x805C5788
    /* cntlzw r0, r3 */ // 0x808D7098
    /* srwi r3, r0, 5 */ // 0x808D709C
    r0 = *(0x14 + r1); // lwz @ 0x808D70A0
    return;
}