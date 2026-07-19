/* Function at 0x808F6E6C, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808F6E6C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808F6E88
    r28 = r3;
    FUN_808F9040(); // bl 0x808F9040
    /* addis r0, r3, 1 */ // 0x808F6E94
    r31 = r3;
    /* li r30, 0 */ // 0x808F6EA0
    if (==) goto 0x0x808f6f08;
    r3 = *(0x2c + r28); // lwz @ 0x808F6EA8
    if (==) goto 0x0x808f6ecc;
    r12 = *(0 + r3); // lwz @ 0x808F6EB4
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x808F6EBC
    /* mtctr r12 */ // 0x808F6EC0
    /* bctrl  */ // 0x808F6EC4
    /* b 0x808f6eec */ // 0x808F6EC8
    /* lis r3, 0 */ // 0x808F6ECC
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808F6ED4
    r5 = r31;
    r12 = *(0 + r3); // lwz @ 0x808F6EDC
    r12 = *(0xb0 + r12); // lwz @ 0x808F6EE0
    /* mtctr r12 */ // 0x808F6EE4
    /* bctrl  */ // 0x808F6EE8
    r30 = r3;
    if (==) goto 0x0x808f6f08;
    r3 = r28;
    r4 = r31;
    /* li r5, 1 */ // 0x808F6F00
    FUN_808F9218(r3, r4, r5); // bl 0x808F9218
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x808F6F0C
    r30 = *(0x18 + r1); // lwz @ 0x808F6F10
    r29 = *(0x14 + r1); // lwz @ 0x808F6F14
    r28 = *(0x10 + r1); // lwz @ 0x808F6F18
    r0 = *(0x24 + r1); // lwz @ 0x808F6F1C
    return;
}