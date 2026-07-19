/* Function at 0x8069FA5C, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8069FA5C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8069FA68
    r31 = r3;
    r0 = *(0x38 + r3); // lwz @ 0x8069FA70
    r6 = *(0 + r3); // lwz @ 0x8069FA74
    /* slwi r5, r0, 4 */ // 0x8069FA78
    r4 = r6 + r5; // 0x8069FA7C
    r0 = *(0xc + r4); // lbz @ 0x8069FA80
    if (==) goto 0x0x8069fac0;
    /* lwzx r3, r6, r5 */ // 0x8069FA8C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069FA94
    /* lis r0, 0x4330 */ // 0x8069FA98
    /* lis r3, 0 */ // 0x8069FA9C
    *(0xc + r1) = r4; // stw @ 0x8069FAA0
    /* lfd f2, 0(r3) */ // 0x8069FAA4
    *(8 + r1) = r0; // stw @ 0x8069FAA8
    /* lfs f0, 0x3c(r31) */ // 0x8069FAAC
    /* lfd f1, 8(r1) */ // 0x8069FAB0
    /* fsubs f1, f1, f2 */ // 0x8069FAB4
    /* fsubs f0, f1, f0 */ // 0x8069FAB8
    /* b 0x8069fac4 */ // 0x8069FABC
}