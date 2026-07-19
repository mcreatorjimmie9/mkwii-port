/* Function at 0x806E08CC, size=160 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806E08CC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r4 = r3;
    *(0x5c + r1) = r31; // stw @ 0x806E08E0
    *(0x58 + r1) = r30; // stw @ 0x806E08E4
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r30, 0 */ // 0x806E08EC
    r31 = *(0 + r30); // lwzu @ 0x806E08F0
    /* lis r6, 0 */ // 0x806E08F4
    *(8 + r1) = r31; // stw @ 0x806E08F8
    r12 = *(4 + r30); // lwz @ 0x806E08FC
    r6 = r6 + 0; // 0x806E0900
    r11 = *(8 + r30); // lwz @ 0x806E0904
    r10 = *(0xc + r30); // lwz @ 0x806E090C
    r4 = r6 + 0x19; // 0x806E0910
    r9 = *(0x10 + r30); // lwz @ 0x806E0914
    r5 = r6 + 0x24; // 0x806E0918
    r8 = *(0x14 + r30); // lwz @ 0x806E091C
    r6 = r6 + 0x3d; // 0x806E0920
    r0 = *(0x18 + r30); // lwz @ 0x806E0924
    *(0xc + r1) = r12; // stw @ 0x806E092C
    *(0x10 + r1) = r11; // stw @ 0x806E0930
    *(0x14 + r1) = r10; // stw @ 0x806E0934
    *(0x18 + r1) = r9; // stw @ 0x806E0938
    *(0x1c + r1) = r8; // stw @ 0x806E093C
    *(0x20 + r1) = r0; // stw @ 0x806E0940
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806E094C
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x806E0954
    r31 = *(0x5c + r1); // lwz @ 0x806E0958
    r30 = *(0x58 + r1); // lwz @ 0x806E095C
    return;
}