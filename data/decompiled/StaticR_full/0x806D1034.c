/* Function at 0x806D1034, size=224 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806D1034(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806D1048
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806D1050
    /* lis r5, 0 */ // 0x806D1054
    r4 = r4 + 0; // 0x806D1058
    *(0 + r31) = r4; // stw @ 0x806D105C
    /* lis r3, 0 */ // 0x806D1060
    r5 = r5 + 0; // 0x806D1064
    r10 = *(0 + r3); // lwzu @ 0x806D1068
    /* lis r4, 0 */ // 0x806D106C
    /* lis r7, 0 */ // 0x806D1070
    *(0x14 + r1) = r10; // stw @ 0x806D1074
    r9 = *(4 + r3); // lwz @ 0x806D1078
    r4 = r4 + 0; // 0x806D107C
    r8 = *(8 + r3); // lwz @ 0x806D1080
    r3 = r31 + 0x6c; // 0x806D1084
    *(0x54 + r31) = r8; // stw @ 0x806D1088
    *(0x44 + r31) = r5; // stw @ 0x806D108C
    *(0x48 + r31) = r31; // stw @ 0x806D1090
    *(0x4c + r31) = r10; // stw @ 0x806D1094
    *(0x50 + r31) = r9; // stw @ 0x806D1098
    r6 = *(0 + r7); // lwzu @ 0x806D109C
    *(0x18 + r1) = r9; // stw @ 0x806D10A0
    r5 = *(4 + r7); // lwz @ 0x806D10A4
    r0 = *(8 + r7); // lwz @ 0x806D10A8
    *(0x1c + r1) = r8; // stw @ 0x806D10AC
    *(8 + r1) = r6; // stw @ 0x806D10B0
    *(0xc + r1) = r5; // stw @ 0x806D10B4
    *(0x10 + r1) = r0; // stw @ 0x806D10B8
    *(0x58 + r31) = r4; // stw @ 0x806D10BC
    *(0x5c + r31) = r31; // stw @ 0x806D10C0
    *(0x60 + r31) = r6; // stw @ 0x806D10C4
    *(0x64 + r31) = r5; // stw @ 0x806D10C8
    *(0x68 + r31) = r0; // stw @ 0x806D10CC
    FUN_80669F74(); // bl 0x80669F74
    r30 = r31 + 0x290; // 0x806D10D4
    r3 = r30;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806D10E0
    r3 = r31 + 0x404; // 0x806D10E4
    r4 = r4 + 0; // 0x806D10E8
    *(0 + r30) = r4; // stw @ 0x806D10EC
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    /* lis r4, 0 */ // 0x806D10F4
    /* lis r5, 0 */ // 0x806D10F8
    r3 = r31 + 0x578; // 0x806D10FC
    /* li r6, 0x254 */ // 0x806D1100
    r4 = r4 + 0; // 0x806D1104
    r5 = r5 + 0; // 0x806D1108
    /* li r7, 3 */ // 0x806D110C
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}