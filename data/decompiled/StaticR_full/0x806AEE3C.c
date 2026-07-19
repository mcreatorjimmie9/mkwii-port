/* Function at 0x806AEE3C, size=808 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 24 function(s) */

int FUN_806AEE3C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x68 + r1) = r30; // stw @ 0x806AEE50
    /* lis r30, 0 */ // 0x806AEE54
    r3 = *(0 + r30); // lwz @ 0x806AEE58
    r3 = *(0 + r3); // lwz @ 0x806AEE5C
    FUN_80685EA4(); // bl 0x80685EA4
    r3 = *(0 + r30); // lwz @ 0x806AEE64
    /* li r5, 0 */ // 0x806AEE68
    r3 = *(0 + r3); // lwz @ 0x806AEE6C
    r0 = *(0 + r3); // lwz @ 0x806AEE70
    if (==) goto 0x0x806aee98;
    if (==) goto 0x0x806aee98;
    if (==) goto 0x0x806aeea0;
    if (==) goto 0x0x806aeea0;
    /* b 0x806aeea4 */ // 0x806AEE94
    /* li r5, 0 */ // 0x806AEE98
    /* b 0x806aeea4 */ // 0x806AEE9C
    /* li r5, 1 */ // 0x806AEEA0
    r12 = *(0x44 + r31); // lwz @ 0x806AEEA4
    r3 = r31 + 0x44; // 0x806AEEA8
    /* li r4, 1 */ // 0x806AEEAC
    r12 = *(0x10 + r12); // lwz @ 0x806AEEB0
    /* mtctr r12 */ // 0x806AEEB4
    /* bctrl  */ // 0x806AEEB8
    r3 = r31;
    r4 = r31 + 0x44; // 0x806AEEC0
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 4 */ // 0x806AEECC
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x268; // 0x806AEED8
    /* li r4, 0 */ // 0x806AEEDC
    /* li r6, 0 */ // 0x806AEEE0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r31 + 0x268; // 0x806AEEEC
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r30, 0 */ // 0x806AEEF4
    r30 = r30 + 0; // 0x806AEEFC
    /* li r7, 0 */ // 0x806AEF00
    r4 = r30 + 0x83; // 0x806AEF04
    r5 = r30 + 0x8b; // 0x806AEF08
    r6 = r30 + 0x9a; // 0x806AEF0C
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806AEF18
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r31;
    r5 = r31 + 0x3dc; // 0x806AEF24
    /* li r4, 1 */ // 0x806AEF28
    /* li r6, 0 */ // 0x806AEF2C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r3, 0 */ // 0x806AEF34
    r3 = *(0 + r3); // lwz @ 0x806AEF38
    r3 = *(0 + r3); // lwz @ 0x806AEF3C
    r0 = *(0 + r3); // lwz @ 0x806AEF40
    if (<) goto 0x0x806aef54;
    if (<=) goto 0x0x806aef68;
    if (<) goto 0x0x806aefb4;
    if (<=) goto 0x0x806aef8c;
    /* b 0x806aefb4 */ // 0x806AEF64
    r3 = r31 + 0x3dc; // 0x806AEF68
    r4 = r30 + 0xa5; // 0x806AEF6C
    r5 = r30 + 0xac; // 0x806AEF70
    r6 = r30 + 0xba; // 0x806AEF74
    /* li r7, 1 */ // 0x806AEF78
    /* li r8, 0 */ // 0x806AEF7C
    /* li r9, 0 */ // 0x806AEF80
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* b 0x806aefb4 */ // 0x806AEF88
    /* lis r6, 0 */ // 0x806AEF8C
    r3 = r31 + 0x3dc; // 0x806AEF90
    r6 = r6 + 0; // 0x806AEF94
    /* li r7, 1 */ // 0x806AEF98
    r4 = r6 + 0xcd; // 0x806AEF9C
    /* li r8, 0 */ // 0x806AEFA0
    r5 = r6 + 0xd4; // 0x806AEFA4
    r6 = r6 + 0xe2; // 0x806AEFA8
    /* li r9, 0 */ // 0x806AEFAC
    FUN_80649914(r4, r8, r5, r6, r9); // bl 0x80649914
    r3 = r31 + 0x3dc; // 0x806AEFB4
    r4 = r31 + 0xad8; // 0x806AEFB8
    /* li r5, 0 */ // 0x806AEFBC
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r31;
    r5 = r31 + 0x630; // 0x806AEFC8
    /* li r4, 2 */ // 0x806AEFCC
    /* li r6, 0 */ // 0x806AEFD0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r30, 0 */ // 0x806AEFD8
    r12 = *(0 + r30); // lwzu @ 0x806AEFDC
    *(8 + r1) = r12; // stw @ 0x806AEFE0
    r11 = *(4 + r30); // lwz @ 0x806AEFE4
    r10 = *(8 + r30); // lwz @ 0x806AEFE8
    r9 = *(0xc + r30); // lwz @ 0x806AEFEC
    r8 = *(0x10 + r30); // lwz @ 0x806AEFF0
    r7 = *(0x14 + r30); // lwz @ 0x806AEFF4
    r6 = *(0x18 + r30); // lwz @ 0x806AEFF8
    r5 = *(0x1c + r30); // lwz @ 0x806AEFFC
    r4 = *(0x20 + r30); // lwz @ 0x806AF000
    r3 = *(0x24 + r30); // lwz @ 0x806AF004
    r0 = *(0x28 + r30); // lwz @ 0x806AF008
    *(0xc + r1) = r11; // stw @ 0x806AF00C
    *(0x10 + r1) = r10; // stw @ 0x806AF010
    *(0x14 + r1) = r9; // stw @ 0x806AF014
    *(0x18 + r1) = r8; // stw @ 0x806AF018
    *(0x1c + r1) = r7; // stw @ 0x806AF01C
    *(0x20 + r1) = r6; // stw @ 0x806AF020
    *(0x24 + r1) = r5; // stw @ 0x806AF024
    *(0x28 + r1) = r4; // stw @ 0x806AF028
    *(0x2c + r1) = r3; // stw @ 0x806AF02C
    *(0x30 + r1) = r0; // stw @ 0x806AF030
    r3 = *(0x694 + r31); // lwz @ 0x806AF034
    r3 = *(0xc + r3); // lwz @ 0x806AF038
    r0 = *(4 + r3); // lwz @ 0x806AF03C
    if (!=) goto 0x0x806af088;
    /* lis r7, 0 */ // 0x806AF048
    r3 = r31 + 0x630; // 0x806AF04C
    r7 = r7 + 0; // 0x806AF050
    r5 = r7 + 0xf7; // 0x806AF058
    /* li r8, 1 */ // 0x806AF05C
    r6 = r7 + 0xfe; // 0x806AF060
    r7 = r7 + 0x118; // 0x806AF064
    /* li r9, 0 */ // 0x806AF068
    FUN_80649B1C(r5, r8, r6, r7, r9); // bl 0x80649B1C
    /* li r0, 1 */ // 0x806AF070
    *(0x6b0 + r31) = r0; // stb @ 0x806AF074
    r3 = r31 + 0x630; // 0x806AF078
    /* li r4, 0 */ // 0x806AF07C
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x806af0b0 */ // 0x806AF084
    /* lis r7, 0 */ // 0x806AF088
    r3 = r31 + 0x630; // 0x806AF08C
    r7 = r7 + 0; // 0x806AF090
    r5 = r7 + 0x130; // 0x806AF098
    /* li r8, 1 */ // 0x806AF09C
    r6 = r7 + 0x137; // 0x806AF0A0
    r7 = r7 + 0x151; // 0x806AF0A4
    /* li r9, 0 */ // 0x806AF0A8
    FUN_80649B1C(r5, r8, r6, r7, r9); // bl 0x80649B1C
    r3 = r31 + 0x6c8; // 0x806AF0B0
    /* li r4, 4 */ // 0x806AF0B4
    FUN_8069F4A0(r7, r9, r3, r4); // bl 0x8069F4A0
    /* lis r30, 0 */ // 0x806AF0BC
    /* li r4, 0 */ // 0x806AF0C0
    /* lfs f1, 0(r30) */ // 0x806AF0C4
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r31 + 0x6c8; // 0x806AF0CC
    /* li r4, 5 */ // 0x806AF0D0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r30) */ // 0x806AF0D8
    /* li r4, 0 */ // 0x806AF0DC
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r31 + 0x630; // 0x806AF0E4
    r4 = r31 + 0xaec; // 0x806AF0E8
    /* li r5, 0 */ // 0x806AF0EC
    FUN_80649EC4(r4, r3, r4, r5); // bl 0x80649EC4
    r3 = r31;
    r5 = r31 + 0x884; // 0x806AF0F8
    /* li r4, 3 */ // 0x806AF0FC
    /* li r6, 0 */ // 0x806AF100
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r6, 0 */ // 0x806AF108
    r3 = r31 + 0x884; // 0x806AF10C
    r6 = r6 + 0; // 0x806AF110
    /* li r7, 1 */ // 0x806AF114
    r4 = r6 + 0x15e; // 0x806AF118
    /* li r8, 0 */ // 0x806AF11C
    r5 = r6 + 0x165; // 0x806AF120
    r6 = r6 + 0x173; // 0x806AF124
    /* li r9, 0 */ // 0x806AF128
    FUN_80649914(r4, r8, r5, r6, r9); // bl 0x80649914
    r3 = r31 + 0x884; // 0x806AF130
    r4 = r31 + 0xb00; // 0x806AF134
    /* li r5, 0 */ // 0x806AF138
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r31 + 0x3dc; // 0x806AF140
    /* li r4, 0 */ // 0x806AF144
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x74 + r1); // lwz @ 0x806AF14C
    r31 = *(0x6c + r1); // lwz @ 0x806AF150
    r30 = *(0x68 + r1); // lwz @ 0x806AF154
    return;
}