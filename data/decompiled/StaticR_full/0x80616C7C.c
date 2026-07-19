/* Function at 0x80616C7C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80616C7C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80616C88
    r31 = r3;
    FUN_8060B298(); // bl 0x8060B298
    r3 = r31;
    FUN_8061ECD4(r3); // bl 0x8061ECD4
    r0 = *(0x14 + r3); // lwz @ 0x80616C9C
    /* xori r0, r0, 0x80 */ // 0x80616CA0
    *(0x14 + r3) = r0; // stw @ 0x80616CA4
    r31 = *(0xc + r1); // lwz @ 0x80616CA8
    r0 = *(0x14 + r1); // lwz @ 0x80616CAC
    return;
}