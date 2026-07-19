/* Function at 0x8080C0D0, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080C0D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8080C0D8
    *(0x14 + r1) = r0; // stw @ 0x8080C0DC
    /* li r0, 4 */ // 0x8080C0E0
    *(0xc + r1) = r31; // stw @ 0x8080C0E4
    r31 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x8080C0EC
    r12 = *(0 + r3); // lwz @ 0x8080C0F0
    r12 = *(0x68 + r12); // lwz @ 0x8080C0F4
    /* mtctr r12 */ // 0x8080C0F8
    /* bctrl  */ // 0x8080C0FC
    /* lis r4, 0 */ // 0x8080C100
    r3 = r31;
    /* lfs f0, 0(r4) */ // 0x8080C108
    /* li r4, 0 */ // 0x8080C10C
    /* stfs f0, 0xcc(r31) */ // 0x8080C110
    /* stfs f0, 0xd0(r31) */ // 0x8080C114
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    /* li r0, 0 */ // 0x8080C11C
    *(0x104 + r31) = r0; // stw @ 0x8080C120
    r31 = *(0xc + r1); // lwz @ 0x8080C124
    r0 = *(0x14 + r1); // lwz @ 0x8080C128
    return;
}