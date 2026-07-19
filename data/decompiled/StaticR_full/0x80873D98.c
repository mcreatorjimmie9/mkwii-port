/* Function at 0x80873D98, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80873D98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80873DAC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80873DB4
    r29 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x80873DBC
    *(0x143c + r3) = r0; // stw @ 0x80873DC0
    /* li r3, 0x6e */ // 0x80873DC4
    FUN_808BA42C(r3); // bl 0x808BA42C
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_808BAD84(r3, r4, r5, r6); // bl 0x808BAD84
    r0 = *(0x24 + r1); // lwz @ 0x80873DDC
    r31 = *(0x1c + r1); // lwz @ 0x80873DE0
    r30 = *(0x18 + r1); // lwz @ 0x80873DE4
    r29 = *(0x14 + r1); // lwz @ 0x80873DE8
    return;
}