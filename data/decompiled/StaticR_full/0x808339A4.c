/* Function at 0x808339A4, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808339A4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x808339B8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808339C0
    r29 = r3;
    FUN_8083A96C(); // bl 0x8083A96C
    r3 = r29;
    r4 = r30;
    r5 = r31;
    FUN_8083B8F8(r3, r4, r5); // bl 0x8083B8F8
    /* li r0, 1 */ // 0x808339DC
    *(0x2b8 + r29) = r0; // stw @ 0x808339E0
    r31 = *(0x1c + r1); // lwz @ 0x808339E4
    r30 = *(0x18 + r1); // lwz @ 0x808339E8
    r29 = *(0x14 + r1); // lwz @ 0x808339EC
    r0 = *(0x24 + r1); // lwz @ 0x808339F0
    return;
}