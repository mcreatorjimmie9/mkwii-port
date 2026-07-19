/* Function at 0x808D994C, size=384 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_808D994C(int r3, int r4, int r5)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    /* lis r30, 0 */ // 0x808D9964
    r30 = r30 + 0; // 0x808D9968
    *(0xa4 + r1) = r29; // stw @ 0x808D996C
    *(0xa0 + r1) = r28; // stw @ 0x808D9970
    r0 = *(0x104 + r3); // lwz @ 0x808D9974
    if (!=) goto 0x0x808d9bb4;
    r0 = *(0x54 + r3); // lbz @ 0x808D9980
    if (==) goto 0x0x808d9994;
    r4 = r3 + 0x48; // 0x808D998C
    /* b 0x808d99c4 */ // 0x808D9990
    /* li r0, 1 */ // 0x808D9994
    *(0x54 + r3) = r0; // stb @ 0x808D9998
    r4 = r31 + 0x58; // 0x808D99A0
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 0x38(r1) */ // 0x808D99A8
    r4 = r31 + 0x48; // 0x808D99AC
    /* stfs f0, 0x48(r31) */ // 0x808D99B0
    /* lfs f0, 0x3c(r1) */ // 0x808D99B4
    /* stfs f0, 0x4c(r31) */ // 0x808D99B8
    /* lfs f0, 0x40(r1) */ // 0x808D99BC
    /* stfs f0, 0x50(r31) */ // 0x808D99C0
    r3 = *(0 + r4); // lwz @ 0x808D99C4
    r0 = *(4 + r4); // lwz @ 0x808D99C8
    *(0x60 + r1) = r0; // stw @ 0x808D99CC
    *(0x5c + r1) = r3; // stw @ 0x808D99D0
    r0 = *(8 + r4); // lwz @ 0x808D99D4
    *(0x64 + r1) = r0; // stw @ 0x808D99D8
    r0 = *(0x54 + r31); // lbz @ 0x808D99DC
    if (==) goto 0x0x808d99f0;
    r3 = r31 + 0x48; // 0x808D99E8
    /* b 0x808d9a20 */ // 0x808D99EC
    /* li r0, 1 */ // 0x808D99F0
    *(0x54 + r31) = r0; // stb @ 0x808D99F4
    r4 = r31 + 0x58; // 0x808D99FC
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 0x2c(r1) */ // 0x808D9A04
    r3 = r31 + 0x48; // 0x808D9A08
    /* stfs f0, 0x48(r31) */ // 0x808D9A0C
    /* lfs f0, 0x30(r1) */ // 0x808D9A10
    /* stfs f0, 0x4c(r31) */ // 0x808D9A14
    /* lfs f0, 0x34(r1) */ // 0x808D9A18
    /* stfs f0, 0x50(r31) */ // 0x808D9A1C
    /* lfs f1, 0(r3) */ // 0x808D9A20
    /* lfs f0, 0x28(r30) */ // 0x808D9A24
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808D9A28
    if (>=) goto 0x0x808d9a38;
    /* stfs f0, 0x5c(r1) */ // 0x808D9A30
    /* b 0x808d9a84 */ // 0x808D9A34
    r0 = *(0x54 + r31); // lbz @ 0x808D9A38
    if (==) goto 0x0x808d9a4c;
    r3 = r31 + 0x48; // 0x808D9A44
    /* b 0x808d9a7c */ // 0x808D9A48
    /* li r0, 1 */ // 0x808D9A4C
    *(0x54 + r31) = r0; // stb @ 0x808D9A50
    r4 = r31 + 0x58; // 0x808D9A58
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 0x20(r1) */ // 0x808D9A60
    r3 = r31 + 0x48; // 0x808D9A64
    /* stfs f0, 0x48(r31) */ // 0x808D9A68
    /* lfs f0, 0x24(r1) */ // 0x808D9A6C
    /* stfs f0, 0x4c(r31) */ // 0x808D9A70
    /* lfs f0, 0x28(r1) */ // 0x808D9A74
    /* stfs f0, 0x50(r31) */ // 0x808D9A78
    /* lfs f0, 0(r3) */ // 0x808D9A7C
    /* stfs f0, 0x5c(r1) */ // 0x808D9A80
    r5 = r31 + 0x30; // 0x808D9A8C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r28 = *(0x10 + r31); // lwz @ 0x808D9A94
    /* li r29, 0 */ // 0x808D9A98
    r3 = *(0x14 + r28); // lwz @ 0x808D9A9C
    r3 = *(0 + r3); // lwz @ 0x808D9AA0
    if (==) goto 0x0x808d9ab8;
    /* li r4, 0 */ // 0x808D9AB0
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r29 = r29 + 1; // 0x808D9AB8
    r28 = r28 + 4; // 0x808D9ABC
    if (<) goto 0x0x808d9a9c;
    r0 = *(0x54 + r31); // lbz @ 0x808D9AC8
}