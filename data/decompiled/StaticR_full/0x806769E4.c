/* Function at 0x806769E4, size=252 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806769E4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x806769F8
    r30 = r30 + 0; // 0x806769FC
    *(0xa4 + r1) = r29; // stw @ 0x80676A00
    r29 = r3;
    *(0x190 + r3) = r4; // stw @ 0x80676A08
    r4 = r29;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    r3 = r30 + 0xc0; // 0x80676A18
    /* li r0, 0xc */ // 0x80676A1C
    r4 = r3 + -4; // 0x80676A24
    /* mtctr r0 */ // 0x80676A28
    r3 = *(4 + r4); // lwz @ 0x80676A2C
    r0 = *(8 + r4); // lwzu @ 0x80676A30
    *(4 + r5) = r3; // stw @ 0x80676A34
    *(8 + r5) = r0; // stwu @ 0x80676A38
    if (counter-- != 0) goto 0x0x80676a2c;
    /* lis r31, 0 */ // 0x80676A40
    r31 = r31 + 0; // 0x80676A48
    r4 = r31 + 0x15; // 0x80676A50
    r5 = r31 + 0x1b; // 0x80676A54
    r6 = r31 + 0x30; // 0x80676A58
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    r4 = r31 + 0x45; // 0x80676A60
    r3 = r29 + 0xa8; // 0x80676A64
    FUN_80665D1C(r5, r6, r4, r3); // bl 0x80665D1C
    *(0x188 + r29) = r3; // stw @ 0x80676A6C
    /* lis r4, 0 */ // 0x80676A70
    r4 = *(0 + r4); // lwz @ 0x80676A74
    r0 = *(0x58 + r4); // lwz @ 0x80676A78
    if (!=) goto 0x0x80676a98;
    /* lfs f0, 0x120(r30) */ // 0x80676A84
    /* stfs f0, 0x44(r3) */ // 0x80676A88
    /* stfs f0, 8(r1) */ // 0x80676A8C
    /* stfs f0, 0xc(r1) */ // 0x80676A90
    /* stfs f0, 0x48(r3) */ // 0x80676A94
    r3 = *(0x190 + r29); // lwz @ 0x80676A98
    /* lis r0, 0x4330 */ // 0x80676A9C
    *(0x98 + r1) = r0; // stw @ 0x80676AA0
    /* li r4, 0 */ // 0x80676AA4
    /* xoris r0, r3, 0x8000 */ // 0x80676AA8
    /* lfd f3, 0x138(r30) */ // 0x80676AAC
    *(0x9c + r1) = r0; // stw @ 0x80676AB0
    /* lfs f2, 0x128(r30) */ // 0x80676AB4
    /* lfd f0, 0x98(r1) */ // 0x80676AB8
    /* lfs f1, 0x12c(r30) */ // 0x80676ABC
    /* fsubs f3, f0, f3 */ // 0x80676AC0
    /* lfs f0, 0x124(r30) */ // 0x80676AC4
    *(0x18c + r29) = r4; // stw @ 0x80676AC8
    /* fmuls f2, f3, f2 */ // 0x80676ACC
    /* fdivs f1, f2, f1 */ // 0x80676AD0
    /* fsubs f1, f0, f1 */ // 0x80676AD4
    /* stfs f1, 0x19c(r29) */ // 0x80676AD8
    FUN_805E3430(); // bl 0x805E3430
}