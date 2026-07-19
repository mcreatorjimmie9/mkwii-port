/* Function at 0x80675D28, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80675D28(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80675D3C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80675D44
    r29 = r3;
    r0 = *(0x208 + r3); // lwz @ 0x80675D4C
    if (==) goto 0x0x80675dc4;
    if (<) goto 0x0x80675d74;
    /* mulli r0, r0, 0x17c */ // 0x80675D60
    r3 = *(0x294 + r3); // lwz @ 0x80675D64
    /* li r4, 0 */ // 0x80675D68
    r3 = r3 + r0; // 0x80675D6C
    FUN_806765E4(r4); // bl 0x806765E4
    /* mulli r0, r31, 0x17c */ // 0x80675D74
    r3 = *(0x294 + r29); // lwz @ 0x80675D78
    *(0x208 + r29) = r31; // stw @ 0x80675D7C
    /* li r4, 1 */ // 0x80675D80
    r3 = r3 + r0; // 0x80675D84
    FUN_806765E4(r4); // bl 0x806765E4
    r3 = *(0x1fc + r29); // lwz @ 0x80675D8C
    if (==) goto 0x0x80675db4;
    r12 = *(0 + r3); // lwz @ 0x80675D98
    r4 = r29;
    r5 = r30;
    r6 = *(0x208 + r29); // lwz @ 0x80675DA4
    r12 = *(8 + r12); // lwz @ 0x80675DA8
    /* mtctr r12 */ // 0x80675DAC
    /* bctrl  */ // 0x80675DB0
    r3 = r29;
    r5 = r30;
    /* li r4, 0xa */ // 0x80675DBC
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x24 + r1); // lwz @ 0x80675DC4
    r31 = *(0x1c + r1); // lwz @ 0x80675DC8
    r30 = *(0x18 + r1); // lwz @ 0x80675DCC
    r29 = *(0x14 + r1); // lwz @ 0x80675DD0
    return;
}