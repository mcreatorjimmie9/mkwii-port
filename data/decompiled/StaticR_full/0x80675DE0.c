/* Function at 0x80675DE0, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80675DE0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80675DF8
    r29 = r3;
    r31 = *(0x208 + r3); // lwz @ 0x80675E00
    r0 = *(0x204 + r3); // lwz @ 0x80675E04
    if (==) goto 0x0x80675e28;
    /* mulli r0, r0, 0x17c */ // 0x80675E10
    r3 = *(0x294 + r3); // lwz @ 0x80675E14
    /* li r4, 0 */ // 0x80675E18
    r3 = r3 + r0; // 0x80675E1C
    FUN_80676408(r4); // bl 0x80676408
    *(0x204 + r29) = r31; // stw @ 0x80675E24
    r0 = *(0x204 + r29); // lwz @ 0x80675E28
    /* li r4, 1 */ // 0x80675E2C
    r3 = *(0x294 + r29); // lwz @ 0x80675E30
    /* mulli r0, r0, 0x17c */ // 0x80675E34
    r3 = r3 + r0; // 0x80675E38
    FUN_80676408(r4); // bl 0x80676408
    r3 = *(0x1f0 + r29); // lwz @ 0x80675E40
    if (==) goto 0x0x80675e68;
    r12 = *(0 + r3); // lwz @ 0x80675E4C
    r4 = r29;
    r5 = r30;
    r6 = *(0x208 + r29); // lwz @ 0x80675E58
    r12 = *(8 + r12); // lwz @ 0x80675E5C
    /* mtctr r12 */ // 0x80675E60
    /* bctrl  */ // 0x80675E64
    r3 = r29;
    r5 = r30;
    /* li r4, 0xb */ // 0x80675E70
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x24 + r1); // lwz @ 0x80675E78
    r31 = *(0x1c + r1); // lwz @ 0x80675E7C
    r30 = *(0x18 + r1); // lwz @ 0x80675E80
    r29 = *(0x14 + r1); // lwz @ 0x80675E84
    return;
}