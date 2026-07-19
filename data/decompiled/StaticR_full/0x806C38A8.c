/* Function at 0x806C38A8, size=580 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_806C38A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0xe8 + r1) = r30; // stw @ 0x806C38BC
    *(0xe4 + r1) = r29; // stw @ 0x806C38C0
    r0 = *(8 + r3); // lwz @ 0x806C38C4
    if (!=) goto 0x0x806c3ad4;
    r0 = *(0x68 + r3); // lwz @ 0x806C38D0
    if (==) goto 0x0x806c38f0;
    if (==) goto 0x0x806c39f4;
    if (==) goto 0x0x806c3a34;
    /* b 0x806c3ad4 */ // 0x806C38EC
    /* lis r30, 0 */ // 0x806C38F0
    r3 = *(0 + r30); // lwz @ 0x806C38F4
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806c3ad4;
    r3 = *(0 + r30); // lwz @ 0x806C3904
    FUN_806F58E8(); // bl 0x806F58E8
    r0 = r3 + -3; // 0x806C390C
    if (<=) goto 0x0x806c396c;
    if (!=) goto 0x0x806c3ad4;
    r4 = r31 + 0x70; // 0x806C3924
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    /* lis r3, 0 */ // 0x806C392C
    r3 = *(0 + r3); // lwz @ 0x806C3934
    /* li r4, 4 */ // 0x806C3938
    /* li r5, 0 */ // 0x806C393C
    r3 = *(0x90 + r3); // lwz @ 0x806C3940
    FUN_80684670(r6, r4, r5); // bl 0x80684670
    /* li r0, 1 */ // 0x806C3948
    /* lis r4, 0 */ // 0x806C394C
    *(0x68 + r31) = r0; // stw @ 0x806C3950
    r4 = r4 + 0; // 0x806C3958
    /* li r5, 0xc */ // 0x806C395C
    /* li r6, 5 */ // 0x806C3960
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x806c3ad4 */ // 0x806C3968
    /* lis r3, 0 */ // 0x806C396C
    r3 = *(0 + r3); // lwz @ 0x806C3970
    r3 = *(0 + r3); // lwz @ 0x806C3974
    r29 = *(0x148 + r3); // lwz @ 0x806C3978
    if (!=) goto 0x0x806c398c;
    /* li r29, 0 */ // 0x806C3984
    /* b 0x806c39e0 */ // 0x806C3988
    /* lis r30, 0 */ // 0x806C398C
    r30 = r30 + 0; // 0x806C3990
    if (==) goto 0x0x806c39dc;
    r12 = *(0 + r29); // lwz @ 0x806C3998
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C39A0
    /* mtctr r12 */ // 0x806C39A4
    /* bctrl  */ // 0x806C39A8
    /* b 0x806c39c4 */ // 0x806C39AC
    if (!=) goto 0x0x806c39c0;
    /* li r0, 1 */ // 0x806C39B8
    /* b 0x806c39d0 */ // 0x806C39BC
    r3 = *(0 + r3); // lwz @ 0x806C39C0
    if (!=) goto 0x0x806c39b0;
    /* li r0, 0 */ // 0x806C39CC
    if (==) goto 0x0x806c39dc;
    /* b 0x806c39e0 */ // 0x806C39D8
    /* li r29, 0 */ // 0x806C39DC
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 4 */ // 0x806C39E8
    *(0x68 + r31) = r0; // stw @ 0x806C39EC
    /* b 0x806c3ad4 */ // 0x806C39F0
    /* lis r30, 0 */ // 0x806C39F4
    r3 = *(0 + r30); // lwz @ 0x806C39F8
    r3 = *(0x90 + r3); // lwz @ 0x806C39FC
    FUN_806844E8(); // bl 0x806844E8
    if (!=) goto 0x0x806c3ad4;
    r3 = *(0 + r30); // lwz @ 0x806C3A0C
    /* li r4, 4 */ // 0x806C3A10
    /* li r5, 0 */ // 0x806C3A14
    /* li r6, -1 */ // 0x806C3A18
    r3 = *(0x90 + r3); // lwz @ 0x806C3A1C
    /* li r7, 1 */ // 0x806C3A20
    FUN_80684E28(r4, r5, r6, r7); // bl 0x80684E28
    /* li r0, 2 */ // 0x806C3A28
    *(0x68 + r31) = r0; // stw @ 0x806C3A2C
    /* b 0x806c3ad4 */ // 0x806C3A30
    /* lis r30, 0 */ // 0x806C3A34
    r3 = *(0 + r30); // lwz @ 0x806C3A38
    r3 = *(0x90 + r3); // lwz @ 0x806C3A3C
    FUN_806844E8(); // bl 0x806844E8
    if (!=) goto 0x0x806c3ad4;
    /* li r0, 1 */ // 0x806C3A4C
    *(0x6c + r31) = r0; // stb @ 0x806C3A50
    r3 = *(0 + r30); // lwz @ 0x806C3A54
    r3 = *(0 + r3); // lwz @ 0x806C3A58
    r29 = *(0x148 + r3); // lwz @ 0x806C3A5C
    if (!=) goto 0x0x806c3a70;
    /* li r29, 0 */ // 0x806C3A68
    /* b 0x806c3ac4 */ // 0x806C3A6C
    /* lis r30, 0 */ // 0x806C3A70
    r30 = r30 + 0; // 0x806C3A74
    if (==) goto 0x0x806c3ac0;
    r12 = *(0 + r29); // lwz @ 0x806C3A7C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C3A84
    /* mtctr r12 */ // 0x806C3A88
    /* bctrl  */ // 0x806C3A8C
    /* b 0x806c3aa8 */ // 0x806C3A90
    if (!=) goto 0x0x806c3aa4;
    /* li r0, 1 */ // 0x806C3A9C
    /* b 0x806c3ab4 */ // 0x806C3AA0
    r3 = *(0 + r3); // lwz @ 0x806C3AA4
    if (!=) goto 0x0x806c3a94;
    /* li r0, 0 */ // 0x806C3AB0
    if (==) goto 0x0x806c3ac0;
    /* b 0x806c3ac4 */ // 0x806C3ABC
    /* li r29, 0 */ // 0x806C3AC0
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 3 */ // 0x806C3ACC
    *(0x68 + r31) = r0; // stw @ 0x806C3AD0
    r0 = *(0xf4 + r1); // lwz @ 0x806C3AD4
    r31 = *(0xec + r1); // lwz @ 0x806C3AD8
    r30 = *(0xe8 + r1); // lwz @ 0x806C3ADC
    r29 = *(0xe4 + r1); // lwz @ 0x806C3AE0
}