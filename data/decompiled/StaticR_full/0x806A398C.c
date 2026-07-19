/* Function at 0x806A398C, size=240 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806A398C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r7 = r4;
    *(0xc + r1) = r31; // stw @ 0x806A399C
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x806A39A4
    r30 = r3;
    r0 = *(0x178 + r3); // lwz @ 0x806A39AC
    r6 = *(0x464 + r3); // lwz @ 0x806A39B0
    r4 = *(0x468 + r3); // lwz @ 0x806A39B4
    *(0x464 + r3) = r4; // stw @ 0x806A39BC
    *(0x468 + r3) = r6; // stw @ 0x806A39C0
    if (==) goto 0x0x806a39e0;
    r3 = r0;
    r5 = r7;
    r12 = *(0 + r3); // lwz @ 0x806A39D0
    r12 = *(8 + r12); // lwz @ 0x806A39D4
    /* mtctr r12 */ // 0x806A39D8
    /* bctrl  */ // 0x806A39DC
    if (==) goto 0x0x806a3a28;
    r3 = *(0x464 + r30); // lwz @ 0x806A39E8
    /* li r4, 3 */ // 0x806A39EC
    r3 = r3 + 0x98; // 0x806A39F0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A39F8
    /* li r4, 1 */ // 0x806A39FC
    /* lfs f1, 0(r31) */ // 0x806A3A00
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = *(0x468 + r30); // lwz @ 0x806A3A08
    /* li r4, 3 */ // 0x806A3A0C
    r3 = r3 + 0x98; // 0x806A3A10
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A3A18
    /* li r4, 5 */ // 0x806A3A1C
    FUN_8069F59C(r4, r3, r4); // bl 0x8069F59C
    /* b 0x806a3a64 */ // 0x806A3A24
    r3 = *(0x464 + r30); // lwz @ 0x806A3A28
    /* li r4, 3 */ // 0x806A3A2C
    r3 = r3 + 0x98; // 0x806A3A30
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A3A38
    /* li r4, 2 */ // 0x806A3A3C
    /* lfs f1, 0(r31) */ // 0x806A3A40
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = *(0x468 + r30); // lwz @ 0x806A3A48
    /* li r4, 3 */ // 0x806A3A4C
    r3 = r3 + 0x98; // 0x806A3A50
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A3A58
    /* li r4, 4 */ // 0x806A3A5C
    FUN_8069F59C(r4, r3, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806A3A64
    r31 = *(0xc + r1); // lwz @ 0x806A3A68
    r30 = *(8 + r1); // lwz @ 0x806A3A6C
    return;
}