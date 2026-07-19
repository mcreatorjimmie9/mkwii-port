/* Function at 0x808509A0, size=284 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808509A0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x808509B4
    r29 = r3;
    FUN_8061ED38(); // bl 0x8061ED38
    /* lfs f0, 0(r3) */ // 0x808509C0
    /* stfs f0, 0xbc(r29) */ // 0x808509C4
    r0 = *(0xa8 + r29); // lbz @ 0x808509C8
    /* lfs f0, 4(r3) */ // 0x808509CC
    /* stfs f0, 0xc0(r29) */ // 0x808509D0
    /* lfs f0, 8(r3) */ // 0x808509D8
    /* stfs f0, 0xc4(r29) */ // 0x808509DC
    if (==) goto 0x0x80850b4c;
    r3 = *(0 + r29); // lwz @ 0x808509E4
    r3 = *(0 + r3); // lwz @ 0x808509E8
    r0 = *(8 + r3); // lwz @ 0x808509EC
    if (!=) goto 0x0x80850a04;
    r3 = r29;
    FUN_8061DAE0(r3); // bl 0x8061DAE0
    /* b 0x80850a0c */ // 0x80850A00
    r3 = r29;
    FUN_8061DAF4(r3, r3); // bl 0x8061DAF4
    /* lis r4, 0 */ // 0x80850A0C
    /* lfs f0, 0xbc(r29) */ // 0x80850A10
    /* lfs f1, 0(r4) */ // 0x80850A14
    /* fcmpu cr0, f1, f0 */ // 0x80850A18
    if (!=) goto 0x0x80850a48;
    /* lfs f0, 0xc0(r29) */ // 0x80850A20
    /* fcmpu cr0, f1, f0 */ // 0x80850A24
    if (!=) goto 0x0x80850a48;
    /* lfs f0, 0xc4(r29) */ // 0x80850A2C
    /* fcmpu cr0, f1, f0 */ // 0x80850A30
    if (!=) goto 0x0x80850a48;
    r4 = r29 + 0x78; // 0x80850A38
    r5 = r29 + 0x114; // 0x80850A3C
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* b 0x80850ab4 */ // 0x80850A44
    /* lfs f1, 0x84(r29) */ // 0x80850A48
    r4 = r29 + 0x78; // 0x80850A4C
    /* lfs f0, 0xbc(r29) */ // 0x80850A50
    r5 = r29 + 0x114; // 0x80850A54
    /* lfs f3, 0x94(r29) */ // 0x80850A58
    /* fmuls f4, f1, f0 */ // 0x80850A5C
    /* lfs f2, 0xc0(r29) */ // 0x80850A60
    /* lfs f5, 0x84(r29) */ // 0x80850A64
    /* lfs f6, 0x94(r29) */ // 0x80850A68
    /* fmuls f2, f3, f2 */ // 0x80850A6C
    /* lfs f7, 0xa4(r29) */ // 0x80850A70
    /* lfs f1, 0xa4(r29) */ // 0x80850A74
    /* lfs f0, 0xc4(r29) */ // 0x80850A78
    /* stfs f5, 8(r1) */ // 0x80850A7C
    /* fmuls f0, f1, f0 */ // 0x80850A80
    /* stfs f6, 0xc(r1) */ // 0x80850A84
    /* stfs f7, 0x10(r1) */ // 0x80850A88
    /* stfs f4, 0x84(r29) */ // 0x80850A8C
    /* stfs f2, 0x94(r29) */ // 0x80850A90
    /* stfs f0, 0xa4(r29) */ // 0x80850A94
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f2, 8(r1) */ // 0x80850A9C
    /* lfs f1, 0xc(r1) */ // 0x80850AA0
    /* lfs f0, 0x10(r1) */ // 0x80850AA4
    /* stfs f2, 0x84(r29) */ // 0x80850AA8
    /* stfs f1, 0x94(r29) */ // 0x80850AAC
    /* stfs f0, 0xa4(r29) */ // 0x80850AB0
    r3 = *(0x74 + r29); // lwz @ 0x80850AB4
}