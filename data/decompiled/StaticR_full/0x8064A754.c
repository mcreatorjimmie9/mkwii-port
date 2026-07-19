/* Function at 0x8064A754, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_8064A754(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8064A76C
    r29 = r4;
    /* li r4, 2 */ // 0x8064A774
    *(0x10 + r1) = r28; // stw @ 0x8064A778
    r28 = r3;
    r3 = r3 + 0x98; // 0x8064A780
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8064A788
    /* li r4, 0 */ // 0x8064A78C
    /* lfs f1, 0(r31) */ // 0x8064A790
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r28 + 0x98; // 0x8064A798
    /* li r4, 3 */ // 0x8064A79C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8064A7A4
    /* li r4, 0 */ // 0x8064A7A8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r12 = *(0 + r28); // lwz @ 0x8064A7B0
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r12 = *(0x48 + r12); // lwz @ 0x8064A7C0
    /* mtctr r12 */ // 0x8064A7C4
    /* bctrl  */ // 0x8064A7C8
    r3 = *(0x234 + r28); // lwz @ 0x8064A7CC
    if (==) goto 0x0x8064a7f0;
    r12 = *(0 + r3); // lwz @ 0x8064A7D8
    r4 = r28;
    r5 = r29;
    r12 = *(8 + r12); // lwz @ 0x8064A7E4
    /* mtctr r12 */ // 0x8064A7E8
    /* bctrl  */ // 0x8064A7EC
    r4 = *(0x250 + r28); // lwz @ 0x8064A7F0
    r3 = r28;
    r5 = r29;
    FUN_806A03CC(r3, r5); // bl 0x806A03CC
    /* li r0, 8 */ // 0x8064A800
    *(0x250 + r28) = r0; // stw @ 0x8064A804
    r31 = *(0x1c + r1); // lwz @ 0x8064A808
    r30 = *(0x18 + r1); // lwz @ 0x8064A80C
    r29 = *(0x14 + r1); // lwz @ 0x8064A810
    r28 = *(0x10 + r1); // lwz @ 0x8064A814
    r0 = *(0x24 + r1); // lwz @ 0x8064A818
    return;
}