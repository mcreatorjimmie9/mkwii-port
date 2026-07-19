/* Function at 0x80770EB0, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80770EB0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* slwi r0, r4, 2 */ // 0x80770EBC
    *(0xc + r1) = r31; // stw @ 0x80770EC0
    r31 = r4;
    r4 = r5;
    *(8 + r1) = r30; // stw @ 0x80770ECC
    r30 = r3;
    r6 = *(4 + r3); // lwz @ 0x80770ED4
    /* lwzx r3, r6, r0 */ // 0x80770ED8
    FUN_8076CF54(r4); // bl 0x8076CF54
    r3 = *(0xc + r30); // lha @ 0x80770EE0
    r0 = *(0x10 + r30); // lbz @ 0x80770EE4
    r4 = *(8 + r30); // lwz @ 0x80770EE8
    /* subf r0, r0, r3 */ // 0x80770EEC
    if (<) goto 0x0x80770f0c;
    r0 = *(0xe + r30); // lha @ 0x80770EF8
    /* subf r3, r31, r3 */ // 0x80770EFC
    /* subf r0, r3, r0 */ // 0x80770F00
    /* extsh r0, r0 */ // 0x80770F04
    /* b 0x80770f18 */ // 0x80770F08
    r0 = *(0x17 + r30); // lbz @ 0x80770F0C
    r0 = r31 * r0; // 0x80770F10
    /* extsh r0, r0 */ // 0x80770F14
    /* slwi r0, r0, 2 */ // 0x80770F18
    /* lwzx r3, r4, r0 */ // 0x80770F1C
    r12 = *(0 + r3); // lwz @ 0x80770F20
    r12 = *(0xc + r12); // lwz @ 0x80770F24
    /* mtctr r12 */ // 0x80770F28
    /* bctrl  */ // 0x80770F2C
    r0 = *(0x14 + r1); // lwz @ 0x80770F30
    r31 = *(0xc + r1); // lwz @ 0x80770F34
    r30 = *(8 + r1); // lwz @ 0x80770F38
    return;
}