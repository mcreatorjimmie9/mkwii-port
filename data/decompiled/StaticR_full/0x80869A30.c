/* Function at 0x80869A30, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80869A30(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80869A3C
    r31 = r3;
    r3 = *(4 + r3); // lwz @ 0x80869A44
    r4 = *(8 + r31); // lwz @ 0x80869A48
    FUN_805ECA18(); // bl 0x805ECA18
    /* li r0, 3 */ // 0x80869A50
    *(0 + r31) = r0; // stw @ 0x80869A54
    r31 = *(0xc + r1); // lwz @ 0x80869A58
    r0 = *(0x14 + r1); // lwz @ 0x80869A5C
    return;
}