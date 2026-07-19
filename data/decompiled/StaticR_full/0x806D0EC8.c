/* Function at 0x806D0EC8, size=240 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806D0EC8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806D0ED4
    r31 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x806D0EDC
    if (==) goto 0x0x806d0ef4;
    if (==) goto 0x0x806d0f14;
    /* b 0x806d0fa4 */ // 0x806D0EF0
    /* li r0, 0 */ // 0x806D0EF4
    *(0xa30 + r3) = r0; // stw @ 0x806D0EF8
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806D0F08
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806d0fa4 */ // 0x806D0F10
    /* li r0, 1 */ // 0x806D0F14
    *(0xa30 + r3) = r0; // stw @ 0x806D0F18
    /* lis r3, 0 */ // 0x806D0F1C
    r3 = *(0 + r3); // lwz @ 0x806D0F20
    r3 = *(0 + r3); // lwz @ 0x806D0F24
    r0 = *(0 + r3); // lwz @ 0x806D0F28
    if (==) goto 0x0x806d0f40;
    if (==) goto 0x0x806d0f68;
    /* b 0x806d0f90 */ // 0x806D0F3C
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806D0F48
    r3 = r31;
    /* li r4, 0x7a */ // 0x806D0F50
    /* li r5, 1 */ // 0x806D0F54
    r12 = *(0x1c + r12); // lwz @ 0x806D0F58
    /* mtctr r12 */ // 0x806D0F5C
    /* bctrl  */ // 0x806D0F60
    /* b 0x806d0fa4 */ // 0x806D0F64
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806D0F70
    r3 = r31;
    /* li r4, 0x9e */ // 0x806D0F78
    /* li r5, 1 */ // 0x806D0F7C
    r12 = *(0x1c + r12); // lwz @ 0x806D0F80
    /* mtctr r12 */ // 0x806D0F84
    /* bctrl  */ // 0x806D0F88
    /* b 0x806d0fa4 */ // 0x806D0F8C
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 1 */ // 0x806D0F9C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806D0FA4
    r31 = *(0xc + r1); // lwz @ 0x806D0FA8
    return;
}