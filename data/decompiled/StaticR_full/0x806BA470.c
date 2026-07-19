/* Function at 0x806BA470, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806BA470(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806BA47C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806BA488
    /* lis r4, 0 */ // 0x806BA48C
    r3 = r3 + 0; // 0x806BA490
    *(0 + r31) = r3; // stw @ 0x806BA494
    /* lis r7, 0 */ // 0x806BA498
    r4 = r4 + 0; // 0x806BA49C
    r6 = *(0 + r7); // lwzu @ 0x806BA4A0
    r3 = r31 + 0x58; // 0x806BA4A4
    *(8 + r1) = r6; // stw @ 0x806BA4A8
    r5 = *(4 + r7); // lwz @ 0x806BA4AC
    r0 = *(8 + r7); // lwz @ 0x806BA4B0
    *(0xc + r1) = r5; // stw @ 0x806BA4B4
    *(0x10 + r1) = r0; // stw @ 0x806BA4B8
    *(0x44 + r31) = r4; // stw @ 0x806BA4BC
    *(0x48 + r31) = r31; // stw @ 0x806BA4C0
    *(0x4c + r31) = r6; // stw @ 0x806BA4C4
    *(0x50 + r31) = r5; // stw @ 0x806BA4C8
    *(0x54 + r31) = r0; // stw @ 0x806BA4CC
    FUN_80668134(); // bl 0x80668134
    /* lis r4, 0 */ // 0x806BA4D4
    /* lis r5, 0 */ // 0x806BA4D8
    r3 = r31 + 0x68; // 0x806BA4DC
    /* li r6, 0x174 */ // 0x806BA4E0
    r4 = r4 + 0; // 0x806BA4E4
    r5 = r5 + 0; // 0x806BA4E8
    /* li r7, 2 */ // 0x806BA4EC
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}