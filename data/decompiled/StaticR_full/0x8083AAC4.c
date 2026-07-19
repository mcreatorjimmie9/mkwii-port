/* Function at 0x8083AAC4, size=68 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8083AAC4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8083AAD0
    r31 = r3;
    r3 = r3 + 0x1a4; // 0x8083AAD8
    r5 = r31 + 0x1b0; // 0x8083AADC
    FUN_808622D8(r3, r5); // bl 0x808622D8
    r5 = *(0x1b0 + r31); // lwz @ 0x8083AAE4
    r3 = r31 + 0x1b0; // 0x8083AAE8
    r0 = *(0x1b4 + r31); // lwz @ 0x8083AAEC
    *(0xc + r1) = r0; // stw @ 0x8083AAF4
    *(8 + r1) = r5; // stw @ 0x8083AAF8
    r0 = *(0x1b8 + r31); // lwz @ 0x8083AAFC
    *(0x10 + r1) = r0; // stw @ 0x8083AB00
    FUN_80816F30(r4); // bl 0x80816F30
}