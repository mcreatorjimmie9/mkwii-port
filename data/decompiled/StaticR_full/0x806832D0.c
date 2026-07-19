/* Function at 0x806832D0, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806832D0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806832DC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806832E8
    /* lis r4, 0 */ // 0x806832EC
    r3 = r3 + 0; // 0x806832F0
    *(0 + r31) = r3; // stw @ 0x806832F4
    /* lis r7, 0 */ // 0x806832F8
    r4 = r4 + 0; // 0x806832FC
    r6 = *(0 + r7); // lwzu @ 0x80683300
    r3 = r31 + 0x58; // 0x80683304
    *(8 + r1) = r6; // stw @ 0x80683308
    r5 = *(4 + r7); // lwz @ 0x8068330C
    r0 = *(8 + r7); // lwz @ 0x80683310
    *(0xc + r1) = r5; // stw @ 0x80683314
    *(0x10 + r1) = r0; // stw @ 0x80683318
    *(0x44 + r31) = r4; // stw @ 0x8068331C
    *(0x48 + r31) = r31; // stw @ 0x80683320
    *(0x4c + r31) = r6; // stw @ 0x80683324
    *(0x50 + r31) = r5; // stw @ 0x80683328
    *(0x54 + r31) = r0; // stw @ 0x8068332C
    FUN_80668134(); // bl 0x80668134
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x80683338
    r0 = *(0x24 + r1); // lwz @ 0x8068333C
    return;
}