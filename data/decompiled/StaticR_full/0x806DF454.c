/* Function at 0x806DF454, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806DF454(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806DF460
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806DF46C
    /* lis r4, 0 */ // 0x806DF470
    r3 = r3 + 0; // 0x806DF474
    *(0 + r31) = r3; // stw @ 0x806DF478
    /* lis r7, 0 */ // 0x806DF47C
    r4 = r4 + 0; // 0x806DF480
    r6 = *(0 + r7); // lwzu @ 0x806DF484
    r3 = r31 + 0x58; // 0x806DF488
    *(8 + r1) = r6; // stw @ 0x806DF48C
    r5 = *(4 + r7); // lwz @ 0x806DF490
    r0 = *(8 + r7); // lwz @ 0x806DF494
    *(0xc + r1) = r5; // stw @ 0x806DF498
    *(0x10 + r1) = r0; // stw @ 0x806DF49C
    *(0x44 + r31) = r4; // stw @ 0x806DF4A0
    *(0x48 + r31) = r31; // stw @ 0x806DF4A4
    *(0x4c + r31) = r6; // stw @ 0x806DF4A8
    *(0x50 + r31) = r5; // stw @ 0x806DF4AC
    *(0x54 + r31) = r0; // stw @ 0x806DF4B0
    FUN_80668134(); // bl 0x80668134
    r3 = r31 + 0x78; // 0x806DF4B8
    FUN_8066D634(r3); // bl 0x8066D634
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806DF4C4
    r0 = *(0x24 + r1); // lwz @ 0x806DF4C8
    return;
}