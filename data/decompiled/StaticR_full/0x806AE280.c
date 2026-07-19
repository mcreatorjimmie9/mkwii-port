/* Function at 0x806AE280, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806AE280(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AE294
    r30 = r3;
    r0 = *(4 + r3); // lwz @ 0x806AE29C
    if (==) goto 0x0x806ae2b4;
    if (==) goto 0x0x806ae2d4;
    /* b 0x806ae314 */ // 0x806AE2B0
    /* li r0, 0x8b */ // 0x806AE2B4
    *(0xf30 + r3) = r0; // stw @ 0x806AE2B8
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 1 */ // 0x806AE2C8
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806ae314 */ // 0x806AE2D0
    /* li r0, -1 */ // 0x806AE2D4
    *(0xf30 + r3) = r0; // stw @ 0x806AE2D8
    /* li r4, 0x87 */ // 0x806AE2DC
    /* li r5, 0 */ // 0x806AE2E0
    r12 = *(0 + r3); // lwz @ 0x806AE2E4
    r12 = *(0x24 + r12); // lwz @ 0x806AE2E8
    /* mtctr r12 */ // 0x806AE2EC
    /* bctrl  */ // 0x806AE2F0
    /* lis r3, 0 */ // 0x806AE2F4
    r3 = *(0 + r3); // lwz @ 0x806AE2F8
    FUN_806E69B4(r3); // bl 0x806E69B4
    if (==) goto 0x0x806ae314;
    r3 = r31;
    /* li r4, 0 */ // 0x806AE30C
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    r0 = *(0x14 + r1); // lwz @ 0x806AE314
    r31 = *(0xc + r1); // lwz @ 0x806AE318
    r30 = *(8 + r1); // lwz @ 0x806AE31C
    return;
}