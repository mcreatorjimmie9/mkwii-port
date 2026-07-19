/* Function at 0x80680060, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80680060(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8068006C
    r31 = r3;
    FUN_806724EC(); // bl 0x806724EC
    /* lis r4, 0 */ // 0x80680078
    r3 = r31 + 0x44; // 0x8068007C
    r4 = r4 + 0; // 0x80680080
    *(0 + r31) = r4; // stw @ 0x80680084
    FUN_80670A7C(r4, r3, r4); // bl 0x80670A7C
    r3 = r31 + 0x1c8; // 0x8068008C
    FUN_80670FA4(r3, r4, r3); // bl 0x80670FA4
    r3 = r31 + 0x33c; // 0x80680094
    FUN_8066D278(r3, r3); // bl 0x8066D278
    /* li r0, 0 */ // 0x8068009C
    *(0x4b0 + r31) = r0; // stw @ 0x806800A0
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806800A8
    r0 = *(0x14 + r1); // lwz @ 0x806800AC
    return;
}