/* Function at 0x8064F568, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8064F568(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8064F570
    r3 = r3 + 0x98; // 0x8064F574
    *(0x24 + r1) = r0; // stw @ 0x8064F578
    *(0x1c + r1) = r31; // stw @ 0x8064F57C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8064F584
    r31 = r3;
    if (==) goto 0x0x8064f5a0;
    if (==) goto 0x0x8064f5f4;
    /* b 0x8064f604 */ // 0x8064F59C
    r3 = *(0 + r3); // lwz @ 0x8064F5A0
    /* slwi r0, r0, 4 */ // 0x8064F5A4
    /* lwzx r3, r3, r0 */ // 0x8064F5A8
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8064F5B0
    /* lis r0, 0x4330 */ // 0x8064F5B4
    *(0xc + r1) = r4; // stw @ 0x8064F5B8
    /* lis r3, 0 */ // 0x8064F5BC
    /* lfd f3, 0(r3) */ // 0x8064F5C0
    /* lis r5, 0 */ // 0x8064F5C4
    *(8 + r1) = r0; // stw @ 0x8064F5C8
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x8064F5D0
}