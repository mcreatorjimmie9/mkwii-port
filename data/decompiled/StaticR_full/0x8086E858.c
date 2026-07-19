/* Function at 0x8086E858, size=40 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_8086E858(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r21 */
    /* stmw r21, 0x24(r1) */ // 0x8086E864
    r30 = r3;
    r4 = *(0 + r3); // lwz @ 0x8086E86C
    r0 = *(0xc + r4); // lwz @ 0x8086E874
    *(0x10 + r1) = r0; // stw @ 0x8086E878
    FUN_805E3430(r3); // bl 0x805E3430
}