/* Function at 0x806B8090, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806B8090(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806B809C
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806B80A8
    /* lis r4, 0 */ // 0x806B80AC
    r3 = r3 + 0; // 0x806B80B0
    *(0 + r31) = r3; // stw @ 0x806B80B4
    /* lis r7, 0 */ // 0x806B80B8
    r4 = r4 + 0; // 0x806B80BC
    r6 = *(0 + r7); // lwzu @ 0x806B80C0
    r3 = r31 + 0x58; // 0x806B80C4
    *(8 + r1) = r6; // stw @ 0x806B80C8
    r5 = *(4 + r7); // lwz @ 0x806B80CC
    r0 = *(8 + r7); // lwz @ 0x806B80D0
    *(0xc + r1) = r5; // stw @ 0x806B80D4
    *(0x10 + r1) = r0; // stw @ 0x806B80D8
    *(0x44 + r31) = r4; // stw @ 0x806B80DC
    *(0x48 + r31) = r31; // stw @ 0x806B80E0
    *(0x4c + r31) = r6; // stw @ 0x806B80E4
    *(0x50 + r31) = r5; // stw @ 0x806B80E8
    *(0x54 + r31) = r0; // stw @ 0x806B80EC
    FUN_8066880C(); // bl 0x8066880C
    r3 = r31 + 0x19c; // 0x806B80F4
    FUN_80670A7C(r3); // bl 0x80670A7C
    r3 = r31 + 0x320; // 0x806B80FC
    FUN_80670FA4(r3, r3); // bl 0x80670FA4
    r3 = r31 + 0x494; // 0x806B8104
    FUN_8066D278(r3, r3, r3); // bl 0x8066D278
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806B8110
    r0 = *(0x24 + r1); // lwz @ 0x806B8114
    return;
}