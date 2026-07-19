/* Function at 0x8069E724, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8069E724(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069E72C
    r3 = r3 + 0x98; // 0x8069E730
    *(0x24 + r1) = r0; // stw @ 0x8069E734
    *(0x1c + r1) = r31; // stw @ 0x8069E738
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069E740
    r31 = r3;
    if (==) goto 0x0x8069e75c;
    if (==) goto 0x0x8069e7b0;
    /* b 0x8069e7c0 */ // 0x8069E758
    r3 = *(0 + r3); // lwz @ 0x8069E75C
    /* slwi r0, r0, 4 */ // 0x8069E760
    /* lwzx r3, r3, r0 */ // 0x8069E764
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069E76C
    /* lis r0, 0x4330 */ // 0x8069E770
    *(0xc + r1) = r4; // stw @ 0x8069E774
    /* lis r3, 0 */ // 0x8069E778
    /* lfd f3, 0(r3) */ // 0x8069E77C
    /* lis r5, 0 */ // 0x8069E780
    *(8 + r1) = r0; // stw @ 0x8069E784
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x8069E78C
}