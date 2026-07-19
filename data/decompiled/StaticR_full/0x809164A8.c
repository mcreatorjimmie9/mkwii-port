/* Function at 0x809164A8, size=148 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_809164A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 1 */ // 0x809164B0
    *(0x88 + r1) = r30; // stw @ 0x809164BC
    *(0x84 + r1) = r29; // stw @ 0x809164C0
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x809164C8
    r12 = *(0x68 + r12); // lwz @ 0x809164CC
    /* mtctr r12 */ // 0x809164D0
    /* bctrl  */ // 0x809164D4
    r3 = *(0x20 + r29); // lwz @ 0x809164D8
    /* lis r30, 0 */ // 0x809164DC
    /* lfs f1, 0(r30) */ // 0x809164E0
    /* li r4, 0 */ // 0x809164E4
    r12 = *(0 + r3); // lwz @ 0x809164E8
    r12 = *(0x10 + r12); // lwz @ 0x809164EC
    /* mtctr r12 */ // 0x809164F0
    /* bctrl  */ // 0x809164F4
    r5 = *(0x20 + r29); // lwz @ 0x809164F8
    /* li r0, 1 */ // 0x809164FC
    /* lis r4, 0 */ // 0x80916500
    *(0x17 + r5) = r0; // stb @ 0x80916508
    r4 = r4 + 0; // 0x8091650C
    r5 = r29 + 0xd0; // 0x80916510
    r6 = *(0x20 + r29); // lwz @ 0x80916514
    /* lfs f0, 0x24(r6) */ // 0x80916518
    /* stfs f0, 0xd0(r29) */ // 0x8091651C
    /* lfs f0, 0x28(r6) */ // 0x80916520
    /* stfs f0, 0xd4(r29) */ // 0x80916524
    /* lfs f0, 0x2c(r6) */ // 0x80916528
    /* stfs f0, 0xd8(r29) */ // 0x8091652C
    FUN_805C6D88(); // bl 0x805C6D88
    FUN_805E3430(r3); // bl 0x805E3430
}