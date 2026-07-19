/* Function at 0x8069E674, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8069E674(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069E67C
    r3 = r3 + 0x98; // 0x8069E680
    *(0x24 + r1) = r0; // stw @ 0x8069E684
    *(0x1c + r1) = r31; // stw @ 0x8069E688
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069E690
    r31 = r3;
    if (==) goto 0x0x8069e6ac;
    if (==) goto 0x0x8069e6c0;
    /* b 0x8069e710 */ // 0x8069E6A8
    /* lis r5, 0 */ // 0x8069E6AC
    /* li r4, 1 */ // 0x8069E6B0
    /* lfs f1, 0(r5) */ // 0x8069E6B4
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8069e710 */ // 0x8069E6BC
    r3 = *(0 + r3); // lwz @ 0x8069E6C0
    /* slwi r0, r0, 4 */ // 0x8069E6C4
    /* lwzx r3, r3, r0 */ // 0x8069E6C8
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069E6D0
    /* lis r0, 0x4330 */ // 0x8069E6D4
    *(0xc + r1) = r4; // stw @ 0x8069E6D8
    /* lis r3, 0 */ // 0x8069E6DC
    /* lfd f3, 0(r3) */ // 0x8069E6E0
}