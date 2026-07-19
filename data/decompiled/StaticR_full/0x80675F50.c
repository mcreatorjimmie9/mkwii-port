/* Function at 0x80675F50, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80675F50(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0 */ // 0x80675F64
    *(8 + r1) = r30; // stw @ 0x80675F68
    r30 = r3;
    r0 = *(0x208 + r3); // lwz @ 0x80675F70
    r5 = *(0x294 + r3); // lwz @ 0x80675F74
    /* mulli r0, r0, 0x17c */ // 0x80675F78
    r3 = r5 + r0; // 0x80675F7C
    FUN_806765E4(); // bl 0x806765E4
    r3 = *(0x208 + r30); // lwz @ 0x80675F84
    /* addic. r0, r3, -1 */ // 0x80675F88
    *(0x208 + r30) = r0; // stw @ 0x80675F8C
    if (>=) goto 0x0x80675fa0;
    r3 = *(0x200 + r30); // lwz @ 0x80675F94
    r0 = r3 + -1; // 0x80675F98
    *(0x208 + r30) = r0; // stw @ 0x80675F9C
    r0 = *(0x208 + r30); // lwz @ 0x80675FA0
    /* li r4, 1 */ // 0x80675FA4
    r3 = *(0x294 + r30); // lwz @ 0x80675FA8
    /* mulli r0, r0, 0x17c */ // 0x80675FAC
    r3 = r3 + r0; // 0x80675FB0
    FUN_806765E4(r4); // bl 0x806765E4
    r3 = *(0x1fc + r30); // lwz @ 0x80675FB8
    if (==) goto 0x0x80675fe0;
    r12 = *(0 + r3); // lwz @ 0x80675FC4
    r4 = r30;
    r5 = r31;
    r6 = *(0x208 + r30); // lwz @ 0x80675FD0
    r12 = *(8 + r12); // lwz @ 0x80675FD4
    /* mtctr r12 */ // 0x80675FD8
    /* bctrl  */ // 0x80675FDC
    r3 = r30;
    r5 = r31;
    /* li r4, 0xa */ // 0x80675FE8
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x80675FF0
    r31 = *(0xc + r1); // lwz @ 0x80675FF4
    r30 = *(8 + r1); // lwz @ 0x80675FF8
    return;
}