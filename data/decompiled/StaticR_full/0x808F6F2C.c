/* Function at 0x808F6F2C, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808F6F2C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808F6F48
    r28 = r3;
    FUN_808F90F0(); // bl 0x808F90F0
    /* addis r0, r3, 1 */ // 0x808F6F54
    r31 = r3;
    /* li r30, 0 */ // 0x808F6F60
    if (==) goto 0x0x808f6fc8;
    r3 = *(0x2c + r28); // lwz @ 0x808F6F68
    if (==) goto 0x0x808f6f8c;
    r12 = *(0 + r3); // lwz @ 0x808F6F74
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x808F6F7C
    /* mtctr r12 */ // 0x808F6F80
    /* bctrl  */ // 0x808F6F84
    /* b 0x808f6fac */ // 0x808F6F88
    /* lis r3, 0 */ // 0x808F6F8C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808F6F94
    r5 = r31;
    r12 = *(0 + r3); // lwz @ 0x808F6F9C
    r12 = *(0xb0 + r12); // lwz @ 0x808F6FA0
    /* mtctr r12 */ // 0x808F6FA4
    /* bctrl  */ // 0x808F6FA8
    r30 = r3;
    if (==) goto 0x0x808f6fc8;
    r3 = r28;
    r4 = r31;
    /* li r5, 1 */ // 0x808F6FC0
    FUN_808F9218(r3, r4, r5); // bl 0x808F9218
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x808F6FCC
    r30 = *(0x18 + r1); // lwz @ 0x808F6FD0
    r29 = *(0x14 + r1); // lwz @ 0x808F6FD4
    r28 = *(0x10 + r1); // lwz @ 0x808F6FD8
    r0 = *(0x24 + r1); // lwz @ 0x808F6FDC
    return;
}