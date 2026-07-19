/* Function at 0x8061BA04, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8061BA04(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8061BA14
    r30 = r3;
    r5 = r30;
    r3 = *(0x10 + r3); // lwz @ 0x8061BA20
    r4 = r30 + 0x1c; // 0x8061BA24
    FUN_80625B08(r5, r4); // bl 0x80625B08
    r3 = *(0x10 + r30); // lwz @ 0x8061BA2C
    FUN_806237F4(r5, r4); // bl 0x806237F4
    r3 = *(0x18 + r30); // lwz @ 0x8061BA34
    r12 = *(0x20 + r3); // lwz @ 0x8061BA38
    r12 = *(0xc + r12); // lwz @ 0x8061BA3C
    /* mtctr r12 */ // 0x8061BA40
    /* bctrl  */ // 0x8061BA44
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8061BA50
    r4 = r30;
    /* li r5, 0 */ // 0x8061BA58
    r12 = *(0x120 + r12); // lwz @ 0x8061BA5C
    /* mtctr r12 */ // 0x8061BA60
    /* bctrl  */ // 0x8061BA64
    r3 = r30;
    FUN_8061E2D8(r5, r3); // bl 0x8061E2D8
    r31 = r3;
    r3 = r30;
    FUN_8061E03C(r3, r3); // bl 0x8061E03C
    r12 = *(0 + r3); // lwz @ 0x8061BA7C
    /* clrlwi r4, r31, 0x18 */ // 0x8061BA80
    r12 = *(0xc + r12); // lwz @ 0x8061BA84
    /* mtctr r12 */ // 0x8061BA88
    /* bctrl  */ // 0x8061BA8C
    r0 = *(0x14 + r1); // lwz @ 0x8061BA90
    r31 = *(0xc + r1); // lwz @ 0x8061BA94
    r30 = *(8 + r1); // lwz @ 0x8061BA98
    return;
}