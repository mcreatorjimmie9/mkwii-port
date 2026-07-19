/* Function at 0x80765A14, size=216 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80765A14(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    *(0x8c + r1) = r31; // stw @ 0x80765A20
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80765A28
    r12 = *(0xb4 + r12); // lwz @ 0x80765A2C
    /* mtctr r12 */ // 0x80765A30
    /* bctrl  */ // 0x80765A34
    if (==) goto 0x0x80765b20;
    r0 = *(0xb0 + r31); // lbz @ 0x80765A40
    if (==) goto 0x0x80765b20;
    /* lis r4, 0 */ // 0x80765A4C
    /* lis r3, 0 */ // 0x80765A50
    /* lfs f1, 0(r3) */ // 0x80765A54
    /* lfs f0, 0(r4) */ // 0x80765A58
    /* stfs f1, 0x14(r1) */ // 0x80765A5C
    /* stfs f0, 0x18(r1) */ // 0x80765A60
    /* stfs f1, 0x1c(r1) */ // 0x80765A64
    r0 = *(0xb8 + r31); // lhz @ 0x80765A68
    if (!=) goto 0x0x80765a94;
    /* lis r3, 0 */ // 0x80765A74
    /* stfs f1, 8(r1) */ // 0x80765A78
    /* lfs f0, 0(r3) */ // 0x80765A7C
    /* stfs f0, 0xc(r1) */ // 0x80765A80
    /* stfs f1, 0x10(r1) */ // 0x80765A84
    /* stfs f1, 0x14(r1) */ // 0x80765A88
    /* stfs f0, 0x18(r1) */ // 0x80765A8C
    /* stfs f1, 0x1c(r1) */ // 0x80765A90
    /* lis r4, 0 */ // 0x80765A94
    /* lfs f0, 0(r4) */ // 0x80765A9C
    /* stfs f0, 0x50(r1) */ // 0x80765AA4
    /* stfs f0, 0x54(r1) */ // 0x80765AA8
    /* stfs f0, 0x58(r1) */ // 0x80765AAC
    /* stfs f0, 0x5c(r1) */ // 0x80765AB0
    /* stfs f0, 0x60(r1) */ // 0x80765AB4
    /* stfs f0, 0x64(r1) */ // 0x80765AB8
    /* stfs f0, 0x68(r1) */ // 0x80765ABC
    /* stfs f0, 0x6c(r1) */ // 0x80765AC0
    /* stfs f0, 0x70(r1) */ // 0x80765AC4
    /* stfs f0, 0x74(r1) */ // 0x80765AC8
    /* stfs f0, 0x78(r1) */ // 0x80765ACC
    /* stfs f0, 0x7c(r1) */ // 0x80765AD0
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = r31 + 0x58; // 0x80765AE0
}