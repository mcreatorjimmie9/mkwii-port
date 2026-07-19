/* Function at 0x8069AC98, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8069AC98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8069ACAC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8069ACB4
    r29 = r3;
    r0 = *(0x180 + r3); // lwz @ 0x8069ACBC
    if (==) goto 0x0x8069ad1c;
    /* mulli r0, r0, 0x240 */ // 0x8069ACC8
    r3 = *(0x188 + r3); // lwz @ 0x8069ACCC
    /* li r4, 0 */ // 0x8069ACD0
    r3 = r3 + r0; // 0x8069ACD4
    FUN_8069B530(r4); // bl 0x8069B530
    /* mulli r0, r31, 0x240 */ // 0x8069ACDC
    r3 = *(0x188 + r29); // lwz @ 0x8069ACE0
    /* li r4, 1 */ // 0x8069ACE4
    r3 = r3 + r0; // 0x8069ACE8
    FUN_8069B530(r4); // bl 0x8069B530
    r3 = *(0x174 + r29); // lwz @ 0x8069ACF0
    *(0x180 + r29) = r31; // stw @ 0x8069ACF4
    if (==) goto 0x0x8069ad1c;
    r12 = *(0 + r3); // lwz @ 0x8069AD00
    r4 = r29;
    r5 = r30;
    r6 = r31;
    r12 = *(8 + r12); // lwz @ 0x8069AD10
    /* mtctr r12 */ // 0x8069AD14
    /* bctrl  */ // 0x8069AD18
    r0 = *(0x24 + r1); // lwz @ 0x8069AD1C
    r31 = *(0x1c + r1); // lwz @ 0x8069AD20
    r30 = *(0x18 + r1); // lwz @ 0x8069AD24
    r29 = *(0x14 + r1); // lwz @ 0x8069AD28
    return;
}