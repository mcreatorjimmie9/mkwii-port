/* Function at 0x80773E78, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80773E78(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80773E84
    r31 = r3;
    r6 = *(0xc + r3); // lwz @ 0x80773E8C
    r4 = *(0x10 + r3); // lbz @ 0x80773E90
    r5 = *(0 + r6); // lwz @ 0x80773E98
    r0 = r4 + -1; // 0x80773E9C
    /* slwi r0, r0, 2 */ // 0x80773EA0
    r4 = r5 + 0x10; // 0x80773EA4
    /* lwzx r5, r6, r0 */ // 0x80773EA8
    r5 = r5 + 0x10; // 0x80773EAC
    FUN_805A4498(r4, r5); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x80773EB4
    r3 = r31 + 0x34; // 0x80773EB8
    /* stfs f0, 0x34(r31) */ // 0x80773EBC
    /* lfs f0, 0xc(r1) */ // 0x80773EC0
    /* stfs f0, 0x38(r31) */ // 0x80773EC4
    /* lfs f0, 0x10(r1) */ // 0x80773EC8
    /* stfs f0, 0x3c(r31) */ // 0x80773ECC
    FUN_805E3430(); // bl 0x805E3430
}