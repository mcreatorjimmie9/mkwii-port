/* Function at 0x805B393C, size=412 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_805B393C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805B3950
    *(0x14 + r1) = r29; // stw @ 0x805B3954
    r29 = r4;
    r0 = *(0x15b8 + r3); // lwz @ 0x805B395C
    if (==) goto 0x0x805b3980;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x805B396C
    r12 = *(0x10 + r12); // lwz @ 0x805B3970
    /* mtctr r12 */ // 0x805B3974
    /* bctrl  */ // 0x805B3978
    /* b 0x805b3984 */ // 0x805B397C
    /* li r3, -1 */ // 0x805B3980
    if (==) goto 0x0x805b3ab8;
    r3 = *(0x15b8 + r31); // lwz @ 0x805B398C
    if (==) goto 0x0x805b39ac;
    r12 = *(0 + r3); // lwz @ 0x805B3998
    r12 = *(0x10 + r12); // lwz @ 0x805B399C
    /* mtctr r12 */ // 0x805B39A0
    /* bctrl  */ // 0x805B39A4
    /* b 0x805b39b0 */ // 0x805B39A8
    /* li r3, -1 */ // 0x805B39AC
    /* li r30, 3 */ // 0x805B39B4
    if (<=) goto 0x0x805b39cc;
    if (!=) goto 0x0x805b39d0;
    /* li r30, 1 */ // 0x805B39C4
    /* b 0x805b39d0 */ // 0x805B39C8
    /* li r30, 0 */ // 0x805B39CC
    r3 = *(0x15bc + r31); // lwz @ 0x805B39D0
    if (==) goto 0x0x805b39f0;
    r12 = *(0 + r3); // lwz @ 0x805B39DC
    r12 = *(0x34 + r12); // lwz @ 0x805B39E0
    /* mtctr r12 */ // 0x805B39E4
    /* bctrl  */ // 0x805B39E8
    /* b 0x805b39f4 */ // 0x805B39EC
    /* li r3, -1 */ // 0x805B39F0
    /* li r5, 0 */ // 0x805B39F8
    if (==) goto 0x0x805b3a0c;
    if (==) goto 0x0x805b3a60;
    /* b 0x805b3ab0 */ // 0x805B3A08
    /* clrlwi r0, r3, 0x18 */ // 0x805B3A0C
    /* mulli r0, r0, 0x920 */ // 0x805B3A10
    r3 = r31 + r0; // 0x805B3A14
    r0 = *(0x1770 + r3); // lbz @ 0x805B3A18
    r4 = r3 + 0x1720; // 0x805B3A1C
    if (==) goto 0x0x805b3ab0;
    /* mulli r30, r29, 0xec */ // 0x805B3A28
    /* li r5, 0 */ // 0x805B3A2C
    r3 = r31 + r30; // 0x805B3A30
    r29 = r3 + 4; // 0x805B3A34
    r3 = r29;
    FUN_805B1180(r5, r3); // bl 0x805B1180
    r4 = r31 + r30; // 0x805B3A40
    r3 = r29 + 0xc8; // 0x805B3A44
    r0 = *(8 + r4); // lwz @ 0x805B3A48
    *(0x10 + r4) = r0; // stw @ 0x805B3A4C
    r4 = *(8 + r4); // lwz @ 0x805B3A50
    FUN_805B1F90(r3); // bl 0x805B1F90
    /* li r5, 1 */ // 0x805B3A58
    /* b 0x805b3ab0 */ // 0x805B3A5C
    /* clrlwi r0, r3, 0x18 */ // 0x805B3A60
    /* mulli r0, r0, 0xb0 */ // 0x805B3A64
    r3 = r31 + r0; // 0x805B3A68
    r0 = *(0x3bf0 + r3); // lbz @ 0x805B3A6C
    r4 = r3 + 0x3ba0; // 0x805B3A70
    if (==) goto 0x0x805b3ab0;
    /* mulli r29, r29, 0xec */ // 0x805B3A7C
    /* li r5, 0 */ // 0x805B3A80
    r3 = r31 + r29; // 0x805B3A84
    r30 = r3 + 4; // 0x805B3A88
    r3 = r30;
    FUN_805B1180(r5, r3); // bl 0x805B1180
    r4 = r31 + r29; // 0x805B3A94
    r3 = r30 + 0xc8; // 0x805B3A98
    r0 = *(8 + r4); // lwz @ 0x805B3A9C
    *(0x10 + r4) = r0; // stw @ 0x805B3AA0
    r4 = *(8 + r4); // lwz @ 0x805B3AA4
    FUN_805B1F90(r3); // bl 0x805B1F90
    /* li r5, 1 */ // 0x805B3AAC
    r3 = r5;
    /* b 0x805b3abc */ // 0x805B3AB4
    /* li r3, 0 */ // 0x805B3AB8
    r0 = *(0x24 + r1); // lwz @ 0x805B3ABC
    r31 = *(0x1c + r1); // lwz @ 0x805B3AC0
    r30 = *(0x18 + r1); // lwz @ 0x805B3AC4
    r29 = *(0x14 + r1); // lwz @ 0x805B3AC8
    return;
}