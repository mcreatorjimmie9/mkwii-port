/* Function at 0x805FB5E4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805FB5E4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    /* li r5, 3 */ // 0x805FB5F8
    *(8 + r1) = r30; // stw @ 0x805FB5FC
    r30 = r3;
    FUN_806200C4(r5); // bl 0x806200C4
    /* lis r3, 0 */ // 0x805FB608
    /* lis r4, 0 */ // 0x805FB60C
    /* lfs f0, 0(r3) */ // 0x805FB610
    r4 = r4 + 0; // 0x805FB614
    *(0xc + r30) = r4; // stw @ 0x805FB618
    r3 = r30;
    *(0x90 + r30) = r31; // stw @ 0x805FB620
    /* stfs f0, 0x94(r30) */ // 0x805FB624
    /* stfs f0, 0x98(r30) */ // 0x805FB628
    /* stfs f0, 0x9c(r30) */ // 0x805FB62C
    /* stfs f0, 0xa0(r30) */ // 0x805FB630
    r31 = *(0xc + r1); // lwz @ 0x805FB634
    r30 = *(8 + r1); // lwz @ 0x805FB638
    r0 = *(0x14 + r1); // lwz @ 0x805FB63C
    return;
}