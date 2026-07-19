/* Function at 0x806C3584, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806C3584(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806C3590
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806C359C
    /* lis r4, 0 */ // 0x806C35A0
    r3 = r3 + 0; // 0x806C35A4
    *(0 + r31) = r3; // stw @ 0x806C35A8
    /* lis r7, 0 */ // 0x806C35AC
    r4 = r4 + 0; // 0x806C35B0
    r6 = *(0 + r7); // lwzu @ 0x806C35B4
    r3 = r31 + 0x58; // 0x806C35B8
    *(8 + r1) = r6; // stw @ 0x806C35BC
    r5 = *(4 + r7); // lwz @ 0x806C35C0
    r0 = *(8 + r7); // lwz @ 0x806C35C4
    *(0xc + r1) = r5; // stw @ 0x806C35C8
    *(0x10 + r1) = r0; // stw @ 0x806C35CC
    *(0x44 + r31) = r4; // stw @ 0x806C35D0
    *(0x48 + r31) = r31; // stw @ 0x806C35D4
    *(0x4c + r31) = r6; // stw @ 0x806C35D8
    *(0x50 + r31) = r5; // stw @ 0x806C35DC
    *(0x54 + r31) = r0; // stw @ 0x806C35E0
    FUN_80668134(); // bl 0x80668134
    r3 = r31 + 0x70; // 0x806C35E8
    FUN_805ABCB4(r3); // bl 0x805ABCB4
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806C35F4
    r0 = *(0x24 + r1); // lwz @ 0x806C35F8
    return;
}