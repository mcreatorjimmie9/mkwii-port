/* Function at 0x8086ACF4, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8086ACF4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8086AD00
    r31 = r3;
    FUN_80828A90(); // bl 0x80828A90
    r3 = r31;
    FUN_8086AD28(r3); // bl 0x8086AD28
    r0 = *(0x14 + r1); // lwz @ 0x8086AD14
    r31 = *(0xc + r1); // lwz @ 0x8086AD18
    return;
}