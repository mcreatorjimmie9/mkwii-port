/* Function at 0x8074C740, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8074C740(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x8074C74C
    *(0xc + r1) = r31; // stw @ 0x8074C750
    /* lis r31, 0 */ // 0x8074C754
    /* lfs f0, 0(r31) */ // 0x8074C758
    *(8 + r1) = r30; // stw @ 0x8074C75C
    r30 = r3;
    *(0x120 + r3) = r0; // stw @ 0x8074C764
    /* stfs f0, 0x124(r3) */ // 0x8074C768
    r12 = *(0 + r3); // lwz @ 0x8074C76C
    r12 = *(0x90 + r12); // lwz @ 0x8074C770
    /* mtctr r12 */ // 0x8074C774
    /* bctrl  */ // 0x8074C778
    r3 = *(8 + r30); // lwz @ 0x8074C77C
    /* lis r5, 0 */ // 0x8074C780
    /* lfs f1, 0(r31) */ // 0x8074C784
    /* li r4, 5 */ // 0x8074C788
    r3 = *(0x28 + r3); // lwz @ 0x8074C78C
    /* lfs f2, 0(r5) */ // 0x8074C790
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = r30;
    /* li r4, 0x293 */ // 0x8074C79C
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    r0 = *(0x14 + r1); // lwz @ 0x8074C7A4
    r31 = *(0xc + r1); // lwz @ 0x8074C7A8
    r30 = *(8 + r1); // lwz @ 0x8074C7AC
    return;
}