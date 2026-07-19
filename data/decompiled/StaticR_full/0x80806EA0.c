/* Function at 0x80806EA0, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80806EA0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 4 */ // 0x80806EAC
    *(0x18 + r1) = r30; // stw @ 0x80806EB4
    *(0x14 + r1) = r29; // stw @ 0x80806EB8
    r29 = r3;
    *(0xe0 + r3) = r0; // stw @ 0x80806EC0
    r3 = *(0xb0 + r3); // lwz @ 0x80806EC4
    r12 = *(0 + r3); // lwz @ 0x80806EC8
    r12 = *(0xf8 + r12); // lwz @ 0x80806ECC
    /* mtctr r12 */ // 0x80806ED0
    /* bctrl  */ // 0x80806ED4
    r31 = r29 + 0xb4; // 0x80806ED8
    /* li r30, 0 */ // 0x80806EDC
    r3 = *(0 + r31); // lwz @ 0x80806EE0
    r12 = *(0 + r3); // lwz @ 0x80806EE4
    r12 = *(0xf8 + r12); // lwz @ 0x80806EE8
    /* mtctr r12 */ // 0x80806EEC
    /* bctrl  */ // 0x80806EF0
    r30 = r30 + 1; // 0x80806EF4
    r31 = r31 + 4; // 0x80806EF8
    if (<) goto 0x0x80806ee0;
    /* lis r3, 0 */ // 0x80806F04
    /* lis r4, 0 */ // 0x80806F08
    r5 = *(0 + r3); // lwz @ 0x80806F0C
    r3 = *(0 + r4); // lwz @ 0x80806F10
    r0 = *(0xb70 + r5); // lwz @ 0x80806F14
    if (!=) goto 0x0x80806f5c;
    r0 = *(0xb9e + r5); // lhz @ 0x80806F20
    if (!=) goto 0x0x80806f5c;
    r31 = *(0x10 + r3); // lwz @ 0x80806F2C
    /* li r4, 0x1ab */ // 0x80806F30
    r12 = *(0 + r31); // lwz @ 0x80806F34
    r3 = r31;
    r12 = *(0x38 + r12); // lwz @ 0x80806F3C
    /* mtctr r12 */ // 0x80806F40
    /* bctrl  */ // 0x80806F44
    if (==) goto 0x0x80806f5c;
    r3 = *(8 + r31); // lwz @ 0x80806F50
    r0 = r3 + 1; // 0x80806F54
    *(8 + r31) = r0; // stw @ 0x80806F58
    /* lis r4, 0 */ // 0x80806F5C
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x80806F64
    /* li r4, 0x24d */ // 0x80806F68
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x80806F70
    r31 = *(0x1c + r1); // lwz @ 0x80806F74
    r30 = *(0x18 + r1); // lwz @ 0x80806F78
    r29 = *(0x14 + r1); // lwz @ 0x80806F7C
    return;
}