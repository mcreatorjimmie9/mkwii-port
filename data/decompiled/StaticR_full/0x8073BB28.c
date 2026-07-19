/* Function at 0x8073BB28, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073BB28(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073BB38
    r30 = r3;
    r31 = *(0x228 + r3); // lwz @ 0x8073BB40
    if (==) goto 0x0x8073bb84;
    r12 = *(0 + r31); // lwz @ 0x8073BB4C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8073BB54
    /* mtctr r12 */ // 0x8073BB58
    /* bctrl  */ // 0x8073BB5C
    r0 = *(0xb0 + r30); // lbz @ 0x8073BB60
    if (==) goto 0x0x8073bb84;
    r12 = *(0 + r31); // lwz @ 0x8073BB6C
    r3 = r31;
    r4 = r30 + 0x72c; // 0x8073BB74
    r12 = *(0x70 + r12); // lwz @ 0x8073BB78
    /* mtctr r12 */ // 0x8073BB7C
    /* bctrl  */ // 0x8073BB80
    r3 = *(0x118 + r30); // lwz @ 0x8073BB84
    FUN_8061E010(r4); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8073BB8C
    /* lis r4, 0 */ // 0x8073BB90
    /* lfs f1, 0(r4) */ // 0x8073BB94
    /* li r4, 0x2f8 */ // 0x8073BB98
    r12 = *(0xe4 + r12); // lwz @ 0x8073BB9C
    /* mtctr r12 */ // 0x8073BBA0
    /* bctrl  */ // 0x8073BBA4
    r0 = *(0x14 + r1); // lwz @ 0x8073BBA8
    r31 = *(0xc + r1); // lwz @ 0x8073BBAC
    r30 = *(8 + r1); // lwz @ 0x8073BBB0
    return;
}