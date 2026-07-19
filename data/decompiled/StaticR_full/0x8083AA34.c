/* Function at 0x8083AA34, size=68 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8083AA34(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8083AA40
    r31 = r3;
    r3 = r3 + 0x50; // 0x8083AA48
    r5 = r31 + 0x1b0; // 0x8083AA4C
    FUN_808622D8(r3, r5); // bl 0x808622D8
    r5 = *(0x1b0 + r31); // lwz @ 0x8083AA54
    r3 = r31 + 0x1b0; // 0x8083AA58
    r0 = *(0x1b4 + r31); // lwz @ 0x8083AA5C
    *(0xc + r1) = r0; // stw @ 0x8083AA64
    *(8 + r1) = r5; // stw @ 0x8083AA68
    r0 = *(0x1b8 + r31); // lwz @ 0x8083AA6C
    *(0x10 + r1) = r0; // stw @ 0x8083AA70
    FUN_80816F30(r4); // bl 0x80816F30
}