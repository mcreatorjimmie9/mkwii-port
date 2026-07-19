/* Function at 0x806DAF88, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806DAF88(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806DAF94
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806DAFA0
    r3 = r31;
    r4 = r4 + 0; // 0x806DAFA8
    *(0 + r31) = r4; // stw @ 0x806DAFAC
    r12 = *(0 + r31); // lwz @ 0x806DAFB0
    r12 = *(0x3c + r12); // lwz @ 0x806DAFB4
    /* mtctr r12 */ // 0x806DAFB8
    /* bctrl  */ // 0x806DAFBC
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806DAFC4
    r0 = *(0x14 + r1); // lwz @ 0x806DAFC8
    return;
}