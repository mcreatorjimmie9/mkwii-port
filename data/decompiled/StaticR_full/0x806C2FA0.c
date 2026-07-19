/* Function at 0x806C2FA0, size=280 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806C2FA0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806C2FB4
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806C2FBC
    /* lis r5, 0 */ // 0x806C2FC0
    r4 = r4 + 0; // 0x806C2FC4
    *(0 + r31) = r4; // stw @ 0x806C2FC8
    /* lis r3, 0 */ // 0x806C2FCC
    r5 = r5 + 0; // 0x806C2FD0
    r10 = *(0 + r3); // lwzu @ 0x806C2FD4
    /* lis r4, 0 */ // 0x806C2FD8
    /* lis r7, 0 */ // 0x806C2FDC
    *(0x14 + r1) = r10; // stw @ 0x806C2FE0
    r9 = *(4 + r3); // lwz @ 0x806C2FE4
    r4 = r4 + 0; // 0x806C2FE8
    r8 = *(8 + r3); // lwz @ 0x806C2FEC
    r3 = r31 + 0x6c; // 0x806C2FF0
    *(0x54 + r31) = r8; // stw @ 0x806C2FF4
    *(0x44 + r31) = r5; // stw @ 0x806C2FF8
    *(0x48 + r31) = r31; // stw @ 0x806C2FFC
    *(0x4c + r31) = r10; // stw @ 0x806C3000
    *(0x50 + r31) = r9; // stw @ 0x806C3004
    r6 = *(0 + r7); // lwzu @ 0x806C3008
    *(0x18 + r1) = r9; // stw @ 0x806C300C
    r5 = *(4 + r7); // lwz @ 0x806C3010
    r0 = *(8 + r7); // lwz @ 0x806C3014
    *(0x1c + r1) = r8; // stw @ 0x806C3018
    *(8 + r1) = r6; // stw @ 0x806C301C
    *(0xc + r1) = r5; // stw @ 0x806C3020
    *(0x10 + r1) = r0; // stw @ 0x806C3024
    *(0x58 + r31) = r4; // stw @ 0x806C3028
    *(0x5c + r31) = r31; // stw @ 0x806C302C
    *(0x60 + r31) = r6; // stw @ 0x806C3030
    *(0x64 + r31) = r5; // stw @ 0x806C3034
    *(0x68 + r31) = r0; // stw @ 0x806C3038
    FUN_80669F74(); // bl 0x80669F74
    r30 = r31 + 0x290; // 0x806C3040
    r3 = r30;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806C304C
    r3 = r31 + 0x404; // 0x806C3050
    r4 = r4 + 0; // 0x806C3054
    *(0 + r30) = r4; // stw @ 0x806C3058
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    r3 = r31 + 0x578; // 0x806C3060
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r30 = r31 + 0x7cc; // 0x806C3068
    r3 = r30;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806C3074
    /* lis r5, 0 */ // 0x806C3078
    /* lfs f0, 0(r3) */ // 0x806C307C
    r5 = r5 + 0; // 0x806C3080
    /* li r4, 0x7d1 */ // 0x806C3084
    /* li r0, 0 */ // 0x806C3088
    *(0 + r30) = r5; // stw @ 0x806C308C
    r3 = r31;
    *(0x254 + r30) = r4; // stw @ 0x806C3094
    *(0x258 + r30) = r0; // stw @ 0x806C3098
    /* stfs f0, 0x25c(r30) */ // 0x806C309C
    r31 = *(0x2c + r1); // lwz @ 0x806C30A0
    r30 = *(0x28 + r1); // lwz @ 0x806C30A4
    r0 = *(0x34 + r1); // lwz @ 0x806C30A8
    return;
}