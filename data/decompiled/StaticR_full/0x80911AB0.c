/* Function at 0x80911AB0, size=536 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80911AB0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x80911AC8
    /* lis r29, 0 */ // 0x80911ACC
    r29 = r29 + 0; // 0x80911AD0
    r0 = *(0x17c + r3); // lwz @ 0x80911AD4
    r4 = *(0x178 + r3); // lwz @ 0x80911AD8
    /* slwi r0, r0, 4 */ // 0x80911ADC
    r4 = r4 + r0; // 0x80911AE0
    r31 = *(4 + r4); // lwz @ 0x80911AE4
    r0 = *(2 + r31); // lbz @ 0x80911AE8
    if (==) goto 0x0x80911b4c;
    r5 = *(0x6c + r29); // lwz @ 0x80911AF4
    r4 = *(0x1d0 + r3); // lwz @ 0x80911AF8
    if (>=) goto 0x0x80911b4c;
    /* lis r0, 0x4330 */ // 0x80911B04
    *(0xc + r1) = r4; // stw @ 0x80911B08
    /* lis r4, 0 */ // 0x80911B0C
    /* lfs f1, 4(r29) */ // 0x80911B10
    *(8 + r1) = r0; // stw @ 0x80911B14
    /* lfd f3, 0(r4) */ // 0x80911B18
    /* lfd f0, 8(r1) */ // 0x80911B1C
    *(0x14 + r1) = r5; // stw @ 0x80911B20
    /* lfs f4, 0(r29) */ // 0x80911B24
    /* fsubs f2, f0, f3 */ // 0x80911B28
    *(0x10 + r1) = r0; // stw @ 0x80911B2C
    /* fsubs f0, f1, f4 */ // 0x80911B30
    /* lfd f1, 0x10(r1) */ // 0x80911B34
    /* fsubs f1, f1, f3 */ // 0x80911B38
    /* fdivs f1, f2, f1 */ // 0x80911B3C
    /* fmuls f0, f1, f0 */ // 0x80911B40
    /* fadds f0, f4, f0 */ // 0x80911B44
    /* stfs f0, 0xb4(r3) */ // 0x80911B48
    r4 = *(0 + r31); // lbz @ 0x80911B4C
    r3 = r30;
    r5 = *(1 + r31); // lbz @ 0x80911B54
    /* li r6, 0 */ // 0x80911B58
    FUN_8090FD04(r3, r6); // bl 0x8090FD04
    r12 = *(0 + r30); // lwz @ 0x80911B60
    r3 = r30;
    /* li r4, 1 */ // 0x80911B68
    r12 = *(0x68 + r12); // lwz @ 0x80911B6C
    /* mtctr r12 */ // 0x80911B70
    /* bctrl  */ // 0x80911B74
    r3 = *(0x1d0 + r30); // lwz @ 0x80911B78
    r3 = r3 + 1; // 0x80911B7C
    *(0x1d0 + r30) = r3; // stw @ 0x80911B80
    r0 = *(0x6c + r29); // lwz @ 0x80911B84
    if (>) goto 0x0x80911cac;
    r3 = *(0x17c + r30); // lwz @ 0x80911B90
    /* li r5, 1 */ // 0x80911B94
    r0 = *(0x180 + r30); // lwz @ 0x80911B98
    /* li r4, 0 */ // 0x80911B9C
    *(0x185 + r30) = r5; // stb @ 0x80911BA0
    if (!=) goto 0x0x80911bb8;
    if (==) goto 0x0x80911bb8;
    r4 = r5;
    if (==) goto 0x0x80911cac;
    r3 = *(0x1cc + r30); // lwz @ 0x80911BC0
    r5 = *(1 + r31); // lbz @ 0x80911BC4
    r0 = r3 + 1; // 0x80911BC8
    r4 = *(0 + r31); // lbz @ 0x80911BCC
    /* clrlwi r3, r0, 0x1c */ // 0x80911BD0
    r0 = r0 rlwinm 2; // rlwinm
    *(0x1cc + r30) = r3; // stw @ 0x80911BD8
    /* subf r0, r3, r0 */ // 0x80911BDC
    r3 = r30 + r0; // 0x80911BE0
    *(0x19c + r3) = r4; // stb @ 0x80911BE4
    r3 = *(0x1cc + r30); // lwz @ 0x80911BE8
    /* slwi r0, r3, 2 */ // 0x80911BEC
    /* subf r0, r3, r0 */ // 0x80911BF0
    r3 = r30 + r0; // 0x80911BF4
    *(0x19d + r3) = r5; // stb @ 0x80911BF8
    r8 = *(0x180 + r30); // lwz @ 0x80911BFC
    r0 = *(0x174 + r30); // lwz @ 0x80911C00
    r6 = r8 + 1; // 0x80911C04
    r5 = *(0x1cc + r30); // lwz @ 0x80911C08
    /* subfc r3, r0, r6 */ // 0x80911C0C
    r0 = *(0x17c + r30); // lwz @ 0x80911C10
    /* subfe r3, r3, r3 */ // 0x80911C14
    /* slwi r4, r5, 2 */ // 0x80911C18
    r7 = r6 & r3; // 0x80911C1C
    /* subf r3, r5, r4 */ // 0x80911C20
    r3 = r30 + r3; // 0x80911C24
    r6 = r3 + 0x19c; // 0x80911C2C
    if (==) goto 0x0x80911cac;
    r5 = *(0x178 + r30); // lwz @ 0x80911C34
    /* slwi r0, r8, 4 */ // 0x80911C38
    r3 = *(0x188 + r30); // lwz @ 0x80911C3C
    /* lwzx r0, r5, r0 */ // 0x80911C40
    /* slwi r0, r0, 2 */ // 0x80911C44
    /* lwzx r3, r3, r0 */ // 0x80911C48
    r0 = *(2 + r3); // lbz @ 0x80911C4C
    if (==) goto 0x0x80911cac;
    *(0x180 + r30) = r7; // stw @ 0x80911C58
    /* slwi r0, r7, 4 */ // 0x80911C5C
    /* li r3, 2 */ // 0x80911C60
    /* li r4, -1 */ // 0x80911C64
    /* stwx r3, r5, r0 */ // 0x80911C68
    r0 = *(0x180 + r30); // lwz @ 0x80911C6C
    r3 = *(0x178 + r30); // lwz @ 0x80911C70
    /* slwi r0, r0, 4 */ // 0x80911C74
    r3 = r3 + r0; // 0x80911C78
    *(4 + r3) = r6; // stw @ 0x80911C7C
    r0 = *(0x180 + r30); // lwz @ 0x80911C80
    r3 = *(0x178 + r30); // lwz @ 0x80911C84
    /* slwi r0, r0, 4 */ // 0x80911C88
    r3 = r3 + r0; // 0x80911C8C
    *(8 + r3) = r4; // stw @ 0x80911C90
    r0 = *(0x180 + r30); // lwz @ 0x80911C94
    r3 = *(0x178 + r30); // lwz @ 0x80911C98
    /* slwi r0, r0, 4 */ // 0x80911C9C
    r4 = *(0x174 + r30); // lwz @ 0x80911CA0
    r3 = r3 + r0; // 0x80911CA4
    *(0xc + r3) = r4; // stw @ 0x80911CA8
    r0 = *(0x34 + r1); // lwz @ 0x80911CAC
    r31 = *(0x2c + r1); // lwz @ 0x80911CB0
    r30 = *(0x28 + r1); // lwz @ 0x80911CB4
    r29 = *(0x24 + r1); // lwz @ 0x80911CB8
    return;
}