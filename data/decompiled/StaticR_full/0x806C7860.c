/* Function at 0x806C7860, size=1040 bytes */
/* Stack frame: 672 bytes */
/* Saved registers: r14 */
/* Calls: 16 function(s) */

int FUN_806C7860(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -672(r1) */
    /* saved r14 */
    /* lis r8, 0 */ // 0x806C7868
    *(0x2a4 + r1) = r0; // stw @ 0x806C786C
    /* lis r0, 0 */ // 0x806C7870
    r8 = r8 + 0; // 0x806C7874
    /* stmw r14, 0x258(r1) */ // 0x806C7878
    r15 = r4;
    r4 = r0;
    r16 = r7;
    r17 = r6;
    r18 = r5;
    *(0x248 + r1) = r0; // stw @ 0x806C7890
    r4 = r4 + 0; // 0x806C7894
    r3 = r15;
    r5 = r17;
    *(0x248 + r1) = r4; // stw @ 0x806C78A0
    r6 = r16;
    r4 = r8 + 0x154; // 0x806C78A8
    /* li r7, 0 */ // 0x806C78AC
    FUN_806A105C(r5, r6, r4, r7); // bl 0x806A105C
    /* lis r4, 1 */ // 0x806C78B4
    /* lis r3, 0 */ // 0x806C78B8
    r0 = r4 + -0x7340; // 0x806C78BC
    r5 = *(0 + r3); // lwz @ 0x806C78C0
    r0 = r18 * r0; // 0x806C78C4
    /* lis r3, 0x524b */ // 0x806C78C8
    r6 = *(0x14 + r5); // lwz @ 0x806C78CC
    /* li r20, 0 */ // 0x806C78D0
    r3 = r3 + 0x5044; // 0x806C78D4
    r6 = r6 + 8; // 0x806C78D8
    /* lwzx r6, r6, r0 */ // 0x806C78DC
    /* addis r0, r6, -0x524b */ // 0x806C78E0
    /* subf r3, r3, r6 */ // 0x806C78E4
    /* cntlzw r3, r3 */ // 0x806C78E8
    /* srwi r14, r3, 5 */ // 0x806C78F0
    if (!=) goto 0x0x806c7908;
    r0 = r4 + -0x6c10; // 0x806C78F8
    r0 = r18 * r0; // 0x806C78FC
    r3 = r5 + r0; // 0x806C7900
    r20 = r3 + 0x38; // 0x806C7904
    /* lis r18, 0 */ // 0x806C7908
    /* cntlzw r0, r14 */ // 0x806C790C
    r3 = r15;
    /* srwi r5, r0, 5 */ // 0x806C791C
    FUN_806A11CC(r3, r4); // bl 0x806A11CC
    r3 = r15;
    /* li r5, 0x1781 */ // 0x806C792C
    /* li r6, 0 */ // 0x806C7930
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r3 = r15;
    r5 = r14;
    FUN_806A11CC(r6, r3, r5, r4); // bl 0x806A11CC
    if (==) goto 0x0x806c799c;
    r3 = r17;
    r4 = r16;
    FUN_8066E0EC(r3, r4); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x806C795C
    r0 = r0 | r3; // 0x806C7960
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806C7964
    if (==) goto 0x0x806c799c;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r3 = r17;
    r4 = r16;
    FUN_8066E0EC(r3, r3, r4); // bl 0x8066E0EC
    *(0x1cc + r1) = r3; // stw @ 0x806C7980
    r3 = r15;
    /* li r5, 0x251d */ // 0x806C7990
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    /* b 0x806c79b0 */ // 0x806C7998
    /* lis r4, 0 */ // 0x806C799C
    r3 = r15;
    r4 = r4 + 0; // 0x806C79A4
    r4 = r4 + 0x16b; // 0x806C79A8
    FUN_806A0B6C(r4, r3, r4, r4); // bl 0x806A0B6C
    r3 = *(0x248 + r1); // lwz @ 0x806C79B0
    /* li r0, 0 */ // 0x806C79B4
    /* lis r4, 0 */ // 0x806C79B8
    *(0x18 + r1) = r0; // stw @ 0x806C79BC
    r5 = r3 + 0x238; // 0x806C79C0
    r6 = r3 + 0x200; // 0x806C79C4
    r12 = *(4 + r5); // lwz @ 0x806C79C8
    r7 = r3 + 0x248; // 0x806C79CC
    r11 = *(8 + r5); // lwz @ 0x806C79D0
    r4 = r4 + 0; // 0x806C79D4
    r10 = *(0xc + r5); // lwz @ 0x806C79D8
    r4 = r4 + 0x172; // 0x806C79DC
    r5 = *(0x248 + r1); // lwz @ 0x806C79E0
    r23 = *(0x200 + r3); // lwz @ 0x806C79E4
    r18 = *(0x238 + r3); // lwz @ 0x806C79E8
    r9 = *(0x248 + r5); // lwz @ 0x806C79F0
    r22 = *(4 + r6); // lwz @ 0x806C79F4
    r21 = *(8 + r6); // lwz @ 0x806C79F8
    r19 = *(0xc + r6); // lwz @ 0x806C79FC
    r8 = *(4 + r7); // lwz @ 0x806C7A00
    r6 = *(8 + r7); // lwz @ 0x806C7A04
    r5 = *(0xc + r7); // lwz @ 0x806C7A08
    *(0x70 + r1) = r23; // stw @ 0x806C7A0C
    *(0x74 + r1) = r22; // stw @ 0x806C7A10
    *(0x78 + r1) = r21; // stw @ 0x806C7A14
    *(0x7c + r1) = r19; // stw @ 0x806C7A18
    *(0x60 + r1) = r18; // stw @ 0x806C7A1C
    *(0x64 + r1) = r12; // stw @ 0x806C7A20
    *(0x68 + r1) = r11; // stw @ 0x806C7A24
    *(0x6c + r1) = r10; // stw @ 0x806C7A28
    *(0x50 + r1) = r9; // stw @ 0x806C7A2C
    *(0x54 + r1) = r8; // stw @ 0x806C7A30
    *(0x58 + r1) = r6; // stw @ 0x806C7A34
    *(0x5c + r1) = r5; // stw @ 0x806C7A38
    *(0x1c + r1) = r0; // stw @ 0x806C7A3C
    FUN_80665D1C(); // bl 0x80665D1C
    r19 = r3;
    if (!=) goto 0x0x806c7a58;
    /* li r19, 0 */ // 0x806C7A50
    /* b 0x806c7aa8 */ // 0x806C7A54
    /* lis r18, 0 */ // 0x806C7A58
    if (==) goto 0x0x806c7aa4;
    r12 = *(0 + r3); // lwz @ 0x806C7A64
    r12 = *(0xc + r12); // lwz @ 0x806C7A68
    /* mtctr r12 */ // 0x806C7A6C
    /* bctrl  */ // 0x806C7A70
    /* b 0x806c7a8c */ // 0x806C7A74
    if (!=) goto 0x0x806c7a88;
    /* li r0, 1 */ // 0x806C7A80
    /* b 0x806c7a98 */ // 0x806C7A84
    r3 = *(0 + r3); // lwz @ 0x806C7A88
    if (!=) goto 0x0x806c7a78;
    /* li r0, 0 */ // 0x806C7A94
    if (==) goto 0x0x806c7aa4;
    /* b 0x806c7aa8 */ // 0x806C7AA0
    /* li r19, 0 */ // 0x806C7AA4
    /* lis r4, 0 */ // 0x806C7AA8
    *(0x40 + r1) = r19; // stw @ 0x806C7AAC
    r4 = r4 + 0; // 0x806C7AB0
    r4 = r4 + 0x17d; // 0x806C7AB8
    FUN_80665D1C(r4, r4, r3, r4); // bl 0x80665D1C
    r19 = r3;
    if (!=) goto 0x0x806c7ad4;
    /* li r19, 0 */ // 0x806C7ACC
    /* b 0x806c7b24 */ // 0x806C7AD0
    /* lis r18, 0 */ // 0x806C7AD4
    if (==) goto 0x0x806c7b20;
    r12 = *(0 + r3); // lwz @ 0x806C7AE0
    r12 = *(0xc + r12); // lwz @ 0x806C7AE4
    /* mtctr r12 */ // 0x806C7AE8
    /* bctrl  */ // 0x806C7AEC
    /* b 0x806c7b08 */ // 0x806C7AF0
    if (!=) goto 0x0x806c7b04;
    /* li r0, 1 */ // 0x806C7AFC
    /* b 0x806c7b14 */ // 0x806C7B00
    r3 = *(0 + r3); // lwz @ 0x806C7B04
    if (!=) goto 0x0x806c7af4;
    /* li r0, 0 */ // 0x806C7B10
    if (==) goto 0x0x806c7b20;
    /* b 0x806c7b24 */ // 0x806C7B1C
    /* li r19, 0 */ // 0x806C7B20
    /* lis r4, 0 */ // 0x806C7B24
    *(0x44 + r1) = r19; // stw @ 0x806C7B28
    r4 = r4 + 0; // 0x806C7B2C
    r4 = r4 + 0x18a; // 0x806C7B34
    FUN_80665D1C(r4, r4, r3, r4); // bl 0x80665D1C
    r19 = r3;
    if (!=) goto 0x0x806c7b50;
    /* li r19, 0 */ // 0x806C7B48
    /* b 0x806c7ba0 */ // 0x806C7B4C
    /* lis r18, 0 */ // 0x806C7B50
    if (==) goto 0x0x806c7b9c;
    r12 = *(0 + r3); // lwz @ 0x806C7B5C
    r12 = *(0xc + r12); // lwz @ 0x806C7B60
    /* mtctr r12 */ // 0x806C7B64
    /* bctrl  */ // 0x806C7B68
    /* b 0x806c7b84 */ // 0x806C7B6C
    if (!=) goto 0x0x806c7b80;
    /* li r0, 1 */ // 0x806C7B78
    /* b 0x806c7b90 */ // 0x806C7B7C
    r3 = *(0 + r3); // lwz @ 0x806C7B80
    if (!=) goto 0x0x806c7b70;
    /* li r0, 0 */ // 0x806C7B8C
    if (==) goto 0x0x806c7b9c;
    /* b 0x806c7ba0 */ // 0x806C7B98
    /* li r19, 0 */ // 0x806C7B9C
    /* lis r27, 0 */ // 0x806C7BA0
    /* lis r25, 0 */ // 0x806C7BA4
    *(0x48 + r1) = r19; // stw @ 0x806C7BA8
    r27 = r27 + 0; // 0x806C7BAC
    r25 = r25 + 0; // 0x806C7BB0
    /* li r19, 0 */ // 0x806C7BBC
    /* li r31, 0 */ // 0x806C7BC0
    /* li r30, 0 */ // 0x806C7BC4
    if (==) goto 0x0x806c7ea8;
    if (!=) goto 0x0x806c7bf0;
    /* addis r3, r20, 1 */ // 0x806C7BD8
    /* li r4, 0x34 */ // 0x806C7BDC
    r3 = r3 + -0x7008; // 0x806C7BE0
    FUN_805D84B0(r4, r3); // bl 0x805D84B0
    if (==) goto 0x0x806c7ea8;
    /* lwzx r4, r3, r30 */ // 0x806C7BF8
    r3 = r15;
    /* lwzx r5, r5, r30 */ // 0x806C7C00
    /* li r6, 0 */ // 0x806C7C04
    FUN_806A093C(r5, r3, r6); // bl 0x806A093C
    r3 = r20 + r31; // 0x806C7C0C
    r22 = r3 + 0x20; // 0x806C7C14
    /* li r18, 0 */ // 0x806C7C18
    /* li r29, 0 */ // 0x806C7C1C
    /* lwzx r6, r23, r30 */ // 0x806C7C20
    r7 = r18;
    r5 = r27 + 0x197; // 0x806C7C2C
    /* li r4, 0xf */ // 0x806C7C30
    /* crclr cr1eq */ // 0x806C7C34
    FUN_805E3430(r7, r3, r5, r4); // bl 0x805E3430
    r3 = r15;
    /* li r5, 0 */ // 0x806C7C44
    FUN_806A11CC(r3, r4, r5); // bl 0x806A11CC
    if (>=) goto 0x0x806c7c68;
    if (>=) goto 0x0x806c7c80;
    if (>=) goto 0x0x806c7c78;
    /* b 0x806c7cd4 */ // 0x806C7C64
    if (>=) goto 0x0x806c7cd4;
}