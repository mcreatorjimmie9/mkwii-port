/* Function at 0x807EE8B4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EE8B4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807EE8C0
    r31 = r3;
    FUN_808A9244(); // bl 0x808A9244
    /* li r0, 0 */ // 0x807EE8CC
    *(0xc8 + r31) = r0; // stw @ 0x807EE8D0
    /* li r3, 0 */ // 0x807EE8D4
    r31 = *(0xc + r1); // lwz @ 0x807EE8D8
    r0 = *(0x14 + r1); // lwz @ 0x807EE8DC
    return;
}