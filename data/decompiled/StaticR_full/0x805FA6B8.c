/* Function at 0x805FA6B8, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805FA6B8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x805FA6D0
    r28 = r3;
    FUN_8061E2BC(); // bl 0x8061E2BC
    r31 = r3;
    /* li r30, 0 */ // 0x805FA6E0
    r29 = r31;
    /* b 0x805fa70c */ // 0x805FA6E8
    r12 = *(0xc + r28); // lwz @ 0x805FA6EC
    r3 = r28;
    r4 = *(0xd8 + r29); // lwz @ 0x805FA6F4
    r12 = *(8 + r12); // lwz @ 0x805FA6F8
    /* mtctr r12 */ // 0x805FA6FC
    /* bctrl  */ // 0x805FA700
    r29 = r29 + 4; // 0x805FA704
    r30 = r30 + 1; // 0x805FA708
    r0 = *(0xf0 + r31); // lwz @ 0x805FA70C
    if (<) goto 0x0x805fa6ec;
    /* lis r4, 0 */ // 0x805FA718
    r3 = r28;
    r4 = r4 + 0; // 0x805FA720
    FUN_8061EDB4(r4, r3, r4); // bl 0x8061EDB4
    r0 = *(0x24 + r1); // lwz @ 0x805FA728
    r31 = *(0x1c + r1); // lwz @ 0x805FA72C
    r30 = *(0x18 + r1); // lwz @ 0x805FA730
    r29 = *(0x14 + r1); // lwz @ 0x805FA734
    r28 = *(0x10 + r1); // lwz @ 0x805FA738
    return;
}