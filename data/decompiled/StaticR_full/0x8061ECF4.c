/* Function at 0x8061ECF4, size=68 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8061ECF4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    r6 = *(0 + r4); // lwz @ 0x8061ECFC
    *(0x24 + r1) = r0; // stw @ 0x8061ED00
    r5 = *(4 + r4); // lwz @ 0x8061ED04
    r0 = *(8 + r4); // lwz @ 0x8061ED08
    *(8 + r1) = r6; // stw @ 0x8061ED10
    *(0xc + r1) = r5; // stw @ 0x8061ED14
    *(0x10 + r1) = r0; // stw @ 0x8061ED18
    r3 = *(0 + r3); // lwz @ 0x8061ED1C
    r3 = *(0x28 + r3); // lwz @ 0x8061ED20
    FUN_8060EF5C(); // bl 0x8060EF5C
    r0 = *(0x24 + r1); // lwz @ 0x8061ED28
    return;
}