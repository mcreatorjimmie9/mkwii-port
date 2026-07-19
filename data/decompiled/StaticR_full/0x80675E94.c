/* Function at 0x80675E94, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80675E94(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0 */ // 0x80675EA8
    *(8 + r1) = r30; // stw @ 0x80675EAC
    r30 = r3;
    r0 = *(0x208 + r3); // lwz @ 0x80675EB4
    r5 = *(0x294 + r3); // lwz @ 0x80675EB8
    /* mulli r0, r0, 0x17c */ // 0x80675EBC
    r3 = r5 + r0; // 0x80675EC0
    FUN_806765E4(); // bl 0x806765E4
    r3 = *(0x208 + r30); // lwz @ 0x80675EC8
    r0 = *(0x200 + r30); // lwz @ 0x80675ECC
    r3 = r3 + 1; // 0x80675ED0
    *(0x208 + r30) = r3; // stw @ 0x80675ED4
    if (<) goto 0x0x80675ee8;
    /* li r0, 0 */ // 0x80675EE0
    *(0x208 + r30) = r0; // stw @ 0x80675EE4
    r0 = *(0x208 + r30); // lwz @ 0x80675EE8
    /* li r4, 1 */ // 0x80675EEC
    r3 = *(0x294 + r30); // lwz @ 0x80675EF0
    /* mulli r0, r0, 0x17c */ // 0x80675EF4
    r3 = r3 + r0; // 0x80675EF8
    FUN_806765E4(r4); // bl 0x806765E4
    r3 = *(0x1fc + r30); // lwz @ 0x80675F00
    if (==) goto 0x0x80675f28;
    r12 = *(0 + r3); // lwz @ 0x80675F0C
    r4 = r30;
    r5 = r31;
    r6 = *(0x208 + r30); // lwz @ 0x80675F18
    r12 = *(8 + r12); // lwz @ 0x80675F1C
    /* mtctr r12 */ // 0x80675F20
    /* bctrl  */ // 0x80675F24
    r3 = r30;
    r5 = r31;
    /* li r4, 0xa */ // 0x80675F30
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x80675F38
    r31 = *(0xc + r1); // lwz @ 0x80675F3C
    r30 = *(8 + r1); // lwz @ 0x80675F40
    return;
}