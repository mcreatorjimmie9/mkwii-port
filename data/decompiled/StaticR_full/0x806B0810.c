/* Function at 0x806B0810, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B0810(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806B0818
    /* li r5, 0 */ // 0x806B081C
    *(0x14 + r1) = r0; // stw @ 0x806B0820
    *(0xc + r1) = r31; // stw @ 0x806B0824
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806B082C
    r12 = *(0x10 + r12); // lwz @ 0x806B0830
    /* mtctr r12 */ // 0x806B0834
    r3 = r3 + 0x44; // 0x806B0838
    /* bctrl  */ // 0x806B083C
    r3 = r31;
    r4 = r31 + 0x44; // 0x806B0844
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806B0850
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r0 = *(0x14 + r1); // lwz @ 0x806B0858
    r31 = *(0xc + r1); // lwz @ 0x806B085C
    return;
}