/* Function at 0x808C7810, size=964 bytes */
/* Stack frame: 320 bytes */
/* Saved registers: r26 */
/* Calls: 33 function(s) */

int FUN_808C7810(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -320(r1) */
    /* saved r26 */
    /* li r4, 0 */ // 0x808C7818
    /* li r5, 0 */ // 0x808C781C
    *(0x144 + r1) = r0; // stw @ 0x808C7820
    /* stmw r26, 0x128(r1) */ // 0x808C7824
    r30 = r3;
    r12 = *(0x32c + r3); // lwz @ 0x808C782C
    r12 = *(0x10 + r12); // lwz @ 0x808C7830
    /* mtctr r12 */ // 0x808C7834
    r3 = r3 + 0x32c; // 0x808C7838
    /* bctrl  */ // 0x808C783C
    r3 = r30;
    r4 = r30 + 0x32c; // 0x808C7844
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    /* lis r3, 0 */ // 0x808C784C
    /* li r4, 2 */ // 0x808C7850
    r5 = *(0 + r3); // lwz @ 0x808C7854
    r3 = *(0 + r5); // lwz @ 0x808C7858
    r0 = *(0 + r3); // lwz @ 0x808C785C
    if (!=) goto 0x0x808c7878;
    r3 = *(0x98 + r5); // lwz @ 0x808C7868
    r0 = *(0x64 + r3); // lwz @ 0x808C786C
    /* slwi r3, r0, 1 */ // 0x808C7870
    r4 = r3 + 2; // 0x808C7874
    r3 = r30;
    FUN_80671C1C(r4, r3); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x44; // 0x808C7884
    /* li r4, 0 */ // 0x808C7888
    /* li r6, 0 */ // 0x808C788C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x44; // 0x808C7898
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r28, 0 */ // 0x808C78A0
    r4 = r28 + 0; // 0x808C78A8
    /* li r7, 0 */ // 0x808C78AC
    r5 = r4 + 5; // 0x808C78B0
    r6 = r4 + 0x11; // 0x808C78B4
    FUN_8064E36C(r3, r4, r7, r5, r6); // bl 0x8064E36C
    /* lis r29, 0 */ // 0x808C78BC
    r3 = *(0 + r29); // lwz @ 0x808C78C0
    r27 = *(0x1758 + r3); // lwz @ 0x808C78C4
    r3 = r27;
    FUN_808AF808(r3); // bl 0x808AF808
    r4 = r3;
    r3 = r30 + 0x44; // 0x808C78D4
    /* li r5, 0 */ // 0x808C78D8
    FUN_806A0A34(r3, r4, r3, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x1b8; // 0x808C78E4
    /* li r4, 1 */ // 0x808C78E8
    /* li r6, 0 */ // 0x808C78EC
    /* li r31, 2 */ // 0x808C78F0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x1b8; // 0x808C78FC
    FUN_8064E324(r6, r3, r4); // bl 0x8064E324
    r28 = r28 + 0; // 0x808C7904
    r4 = r28 + 0x1d; // 0x808C790C
    /* li r7, 0 */ // 0x808C7910
    r5 = r28 + 0x22; // 0x808C7914
    r6 = r28 + 0x2b; // 0x808C7918
    FUN_8064E36C(r3, r4, r7, r5, r6); // bl 0x8064E36C
    r4 = *(0 + r29); // lwz @ 0x808C7920
    r26 = *(0xb8c + r4); // lbz @ 0x808C7928
    FUN_80654ECC(r6, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808C7930
    r4 = *(0 + r3); // lwz @ 0x808C7934
    r3 = *(0 + r4); // lwz @ 0x808C7938
    r0 = *(0 + r3); // lwz @ 0x808C793C
    if (==) goto 0x0x808c7964;
    if (==) goto 0x0x808c79cc;
    if (==) goto 0x0x808c7a64;
    if (==) goto 0x0x808c7af8;
    /* b 0x808c7b04 */ // 0x808C7960
    r3 = r27;
    FUN_808CF808(r3); // bl 0x808CF808
    r27 = r3;
    FUN_808CFFA8(r3); // bl 0x808CFFA8
    r5 = r3;
    r3 = r30 + 0x1b8; // 0x808C7978
    r4 = r28 + 0x34; // 0x808C797C
    FUN_806A0D70(r5, r3, r4); // bl 0x806A0D70
    r3 = *(0 + r29); // lwz @ 0x808C7984
    r0 = *(0xb90 + r3); // lwz @ 0x808C7988
    /* clrlwi. r0, r0, 0x1f */ // 0x808C798C
    if (==) goto 0x0x808c79a0;
    /* li r0, 0x58c */ // 0x808C7994
    *(0x7c + r1) = r0; // stw @ 0x808C7998
    /* b 0x808c79ac */ // 0x808C799C
    r3 = *(0xb6c + r3); // lwz @ 0x808C79A0
    r0 = r3 + 0x589; // 0x808C79A4
    *(0x7c + r1) = r0; // stw @ 0x808C79A8
    r3 = r27;
    FUN_808AF7D8(r3); // bl 0x808AF7D8
    *(0x80 + r1) = r3; // stw @ 0x808C79B4
    r3 = r30 + 0x1b8; // 0x808C79B8
    r4 = r26 + 0x582; // 0x808C79BC
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* b 0x808c7b34 */ // 0x808C79C8
    r3 = r30 + 0x1b8; // 0x808C79CC
    r4 = r28 + 0x3d; // 0x808C79D0
    r5 = r28 + 0x46; // 0x808C79D4
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = *(0 + r29); // lwz @ 0x808C79DC
    r0 = *(0xb90 + r3); // lwz @ 0x808C79E0
    /* clrlwi. r0, r0, 0x1f */ // 0x808C79E4
    if (==) goto 0x0x808c79f8;
    /* li r0, 0x58c */ // 0x808C79EC
    *(0x7c + r1) = r0; // stw @ 0x808C79F0
    /* b 0x808c7a04 */ // 0x808C79F4
    r3 = *(0xb6c + r3); // lwz @ 0x808C79F8
    r0 = r3 + 0x589; // 0x808C79FC
    *(0x7c + r1) = r0; // stw @ 0x808C7A00
    /* lis r8, 0 */ // 0x808C7A04
    /* lis r5, 0 */ // 0x808C7A08
    r6 = *(0 + r8); // lwz @ 0x808C7A0C
    r3 = r30 + 0x1b8; // 0x808C7A10
    /* li r4, 0x586 */ // 0x808C7A14
    r7 = *(0x98 + r6); // lwz @ 0x808C7A18
    r6 = *(0x60 + r7); // lwz @ 0x808C7A1C
    r0 = r6 + 1; // 0x808C7A20
    *(0x60 + r7) = r0; // stw @ 0x808C7A24
    r7 = *(0 + r8); // lwz @ 0x808C7A28
    r5 = *(0 + r5); // lwz @ 0x808C7A2C
    r6 = *(0x98 + r7); // lwz @ 0x808C7A30
    r0 = *(0x60 + r6); // lwz @ 0x808C7A34
    *(0x58 + r1) = r0; // stw @ 0x808C7A38
    r6 = *(0x98 + r7); // lwz @ 0x808C7A3C
    r0 = *(0x64 + r6); // lwz @ 0x808C7A40
    *(0x5c + r1) = r0; // stw @ 0x808C7A44
    r0 = *(0x1780 + r5); // lwz @ 0x808C7A48
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x808C7A4C
    if (==) goto 0x0x808c7a58;
    /* li r4, 0x581 */ // 0x808C7A54
    FUN_806A0A34(r4, r5); // bl 0x806A0A34
    /* b 0x808c7b34 */ // 0x808C7A60
    r4 = *(0x98 + r4); // lwz @ 0x808C7A64
    r3 = *(0x60 + r4); // lwz @ 0x808C7A68
    r0 = r3 + 1; // 0x808C7A6C
    *(0x60 + r4) = r0; // stw @ 0x808C7A70
    r3 = *(0 + r29); // lwz @ 0x808C7A74
    r0 = *(0xb78 + r3); // lwz @ 0x808C7A78
    if (!=) goto 0x0x808c7aa8;
    r3 = r30 + 0x1b8; // 0x808C7A84
    r4 = r28 + 0x53; // 0x808C7A88
    r5 = r28 + 0x5c; // 0x808C7A8C
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r30 + 0x1b8; // 0x808C7A94
    /* li r4, 0x587 */ // 0x808C7A98
    /* li r5, 0 */ // 0x808C7A9C
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* b 0x808c7b34 */ // 0x808C7AA4
    if (!=) goto 0x0x808c7ad4;
    r3 = r30 + 0x1b8; // 0x808C7AB0
    r4 = r28 + 0x6c; // 0x808C7AB4
    r5 = r28 + 0x75; // 0x808C7AB8
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r30 + 0x1b8; // 0x808C7AC0
    /* li r4, 0x588 */ // 0x808C7AC4
    /* li r5, 0 */ // 0x808C7AC8
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* b 0x808c7b34 */ // 0x808C7AD0
    r3 = r30 + 0x1b8; // 0x808C7AD4
    r4 = r28 + 0x82; // 0x808C7AD8
    r5 = r28 + 0x8b; // 0x808C7ADC
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r30 + 0x1b8; // 0x808C7AE4
    /* li r4, 0x270f */ // 0x808C7AE8
    /* li r5, 0 */ // 0x808C7AEC
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* b 0x808c7b34 */ // 0x808C7AF4
    /* li r0, 1 */ // 0x808C7AF8
    *(0x238 + r30) = r0; // stb @ 0x808C7AFC
    /* b 0x808c7b34 */ // 0x808C7B00
    /* li r3, -1 */ // 0x808C7B04
    FUN_808AF7D8(r3); // bl 0x808AF7D8
    r4 = r3;
    r3 = r30 + 0x1b8; // 0x808C7B10
    /* li r5, 0 */ // 0x808C7B14
    FUN_806A0A34(r3, r4, r3, r5); // bl 0x806A0A34
    /* li r3, -1 */ // 0x808C7B1C
    FUN_808CFFA8(r4, r3, r5, r3); // bl 0x808CFFA8
    r5 = r3;
    r3 = r30 + 0x1b8; // 0x808C7B28
    r4 = r28 + 0x9a; // 0x808C7B2C
    FUN_806A0D70(r3, r5, r3, r4); // bl 0x806A0D70
    /* lis r29, 0 */ // 0x808C7B34
    r3 = *(0 + r29); // lwz @ 0x808C7B38
    r3 = *(0 + r3); // lwz @ 0x808C7B3C
    r0 = *(0 + r3); // lwz @ 0x808C7B40
    if (!=) goto 0x0x808c7c28;
    /* lis r28, 0 */ // 0x808C7B4C
    /* li r26, 0 */ // 0x808C7B50
    r28 = r28 + 0; // 0x808C7B54
    /* b 0x808c7ba4 */ // 0x808C7B58
    /* li r3, 0x180 */ // 0x808C7B5C
    FUN_805E3430(r3); // bl 0x805E3430
    r27 = r3;
    if (==) goto 0x0x808c7b78;
    FUN_806A0418(r3); // bl 0x806A0418
    *(0 + r27) = r28; // stw @ 0x808C7B74
    r4 = r31;
    r3 = r30;
    r5 = r27;
    /* li r6, 0 */ // 0x808C7B84
    r31 = r31 + 1; // 0x808C7B88
    FUN_80671C2C(r4, r3, r5, r6); // bl 0x80671C2C
    r3 = r27;
    r5 = r26;
    /* li r4, 0 */ // 0x808C7B98
    FUN_808D5C18(r3, r5, r4); // bl 0x808D5C18
    r26 = r26 + 1; // 0x808C7BA0
    r3 = *(0 + r29); // lwz @ 0x808C7BA4
    r3 = *(0x98 + r3); // lwz @ 0x808C7BA8
    r0 = *(0x64 + r3); // lwz @ 0x808C7BAC
    if (<) goto 0x0x808c7b5c;
    /* lis r28, 0 */ // 0x808C7BB8
    /* li r26, 0 */ // 0x808C7BBC
    r28 = r28 + 0; // 0x808C7BC0
    /* lis r29, 0 */ // 0x808C7BC4
    /* b 0x808c7c14 */ // 0x808C7BC8
    /* li r3, 0x180 */ // 0x808C7BCC
    FUN_805E3430(r3); // bl 0x805E3430
}