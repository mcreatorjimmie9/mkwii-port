/* Function at 0x80726908, size=556 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80726908(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8072691C
    /* lfs f0, 0x6e8(r3) */ // 0x80726920
    /* stfs f0, 0x6ec(r3) */ // 0x80726924
    r3 = *(0x118 + r3); // lwz @ 0x80726928
    FUN_8061EA54(); // bl 0x8061EA54
    /* lfs f5, 0x7bc(r31) */ // 0x80726930
    /* lfs f4, 0x7c0(r31) */ // 0x80726934
    /* lfs f3, 0x7c4(r31) */ // 0x80726938
    /* lfs f2, 0x7c8(r31) */ // 0x8072693C
    /* lfs f1, 0x7cc(r31) */ // 0x80726940
    /* lfs f0, 0x7d0(r31) */ // 0x80726944
    r6 = *(0x164 + r31); // lwz @ 0x80726948
    r5 = *(0x168 + r31); // lwz @ 0x8072694C
    r4 = *(0x16c + r31); // lwz @ 0x80726950
    r0 = *(0x170 + r31); // lwz @ 0x80726954
    *(0x7a0 + r31) = r3; // sth @ 0x80726958
    /* stfs f5, 0x7d4(r31) */ // 0x8072695C
    /* stfs f4, 0x7d8(r31) */ // 0x80726960
    /* stfs f3, 0x7dc(r31) */ // 0x80726964
    /* stfs f2, 0x7e0(r31) */ // 0x80726968
    /* stfs f1, 0x7e4(r31) */ // 0x8072696C
    /* stfs f0, 0x7e8(r31) */ // 0x80726970
    *(0x174 + r31) = r6; // stw @ 0x80726974
    *(0x178 + r31) = r5; // stw @ 0x80726978
    *(0x17c + r31) = r4; // stw @ 0x8072697C
    *(0x180 + r31) = r0; // stw @ 0x80726980
    r0 = *(0x848 + r31); // lbz @ 0x80726984
    if (==) goto 0x0x807269a8;
    /* lfs f0, 0x84c(r31) */ // 0x80726990
    /* stfs f0, 0x87c(r31) */ // 0x80726994
    /* lfs f0, 0x850(r31) */ // 0x80726998
    /* stfs f0, 0x880(r31) */ // 0x8072699C
    /* lfs f0, 0x854(r31) */ // 0x807269A0
    /* stfs f0, 0x884(r31) */ // 0x807269A4
    r0 = *(0x849 + r31); // lbz @ 0x807269A8
    if (==) goto 0x0x807269cc;
    /* lfs f0, 0x858(r31) */ // 0x807269B4
    /* stfs f0, 0x888(r31) */ // 0x807269B8
    /* lfs f0, 0x85c(r31) */ // 0x807269BC
    /* stfs f0, 0x88c(r31) */ // 0x807269C0
    /* lfs f0, 0x860(r31) */ // 0x807269C4
    /* stfs f0, 0x890(r31) */ // 0x807269C8
    r0 = *(0x84a + r31); // lbz @ 0x807269CC
    if (==) goto 0x0x807269f0;
    /* lfs f0, 0x864(r31) */ // 0x807269D8
    /* stfs f0, 0x894(r31) */ // 0x807269DC
    /* lfs f0, 0x868(r31) */ // 0x807269E0
    /* stfs f0, 0x898(r31) */ // 0x807269E4
    /* lfs f0, 0x86c(r31) */ // 0x807269E8
    /* stfs f0, 0x89c(r31) */ // 0x807269EC
    r0 = *(0x84b + r31); // lbz @ 0x807269F0
    if (==) goto 0x0x80726a14;
    /* lfs f0, 0x870(r31) */ // 0x807269FC
    /* stfs f0, 0x8a0(r31) */ // 0x80726A00
    /* lfs f0, 0x874(r31) */ // 0x80726A04
    /* stfs f0, 0x8a4(r31) */ // 0x80726A08
    /* lfs f0, 0x878(r31) */ // 0x80726A0C
    /* stfs f0, 0x8a8(r31) */ // 0x80726A10
    r3 = *(0x118 + r31); // lwz @ 0x80726A14
    /* lis r7, 0 */ // 0x80726A18
    r5 = *(0x90 + r31); // lbz @ 0x80726A1C
    /* li r6, 0 */ // 0x80726A20
    r8 = *(0 + r3); // lwz @ 0x80726A24
    /* lis r4, 0 */ // 0x80726A28
    r0 = *(0x6b + r31); // lbz @ 0x80726A2C
    r3 = r4 + 0; // 0x80726A30
    r8 = *(4 + r8); // lwz @ 0x80726A34
    /* li r30, 0 */ // 0x80726A38
    /* lfs f0, 0(r7) */ // 0x80726A3C
    r7 = *(4 + r8); // lwz @ 0x80726A40
    /* clrlwi r7, r7, 0x1f */ // 0x80726A44
    *(0x96c + r31) = r7; // stb @ 0x80726A48
    /* stfs f0, 0x7ac(r31) */ // 0x80726A4C
    /* stfs f0, 0x7a8(r31) */ // 0x80726A50
    /* stfs f0, 0x7a4(r31) */ // 0x80726A54
    *(0x7b0 + r31) = r6; // stw @ 0x80726A58
    *(0x29 + r31) = r6; // stb @ 0x80726A5C
    *(0x31 + r31) = r6; // stb @ 0x80726A60
    *(0x91 + r31) = r5; // stb @ 0x80726A64
    *(0x90 + r31) = r6; // stb @ 0x80726A68
    *(0xac + r31) = r6; // stb @ 0x80726A6C
    *(0x6c + r31) = r0; // stb @ 0x80726A70
    *(0x6b + r31) = r6; // stb @ 0x80726A74
    *(0x92 + r31) = r6; // stb @ 0x80726A78
    *(0x93 + r31) = r6; // stb @ 0x80726A7C
    *(0x94 + r31) = r6; // stb @ 0x80726A80
    /* lfs f0, 0(r4) */ // 0x80726A84
    /* stfs f0, 0x740(r31) */ // 0x80726A88
    /* lfs f0, 4(r3) */ // 0x80726A8C
    /* stfs f0, 0x744(r31) */ // 0x80726A90
    /* lfs f0, 8(r3) */ // 0x80726A94
    /* stfs f0, 0x748(r31) */ // 0x80726A98
    /* b 0x80726adc */ // 0x80726A9C
    r3 = *(0x118 + r31); // lwz @ 0x80726AA0
    r4 = r30;
    FUN_8061DBB4(r4); // bl 0x8061DBB4
    if (==) goto 0x0x80726ad8;
    r3 = *(0x118 + r31); // lwz @ 0x80726AB4
    r4 = r30;
    FUN_8061E0B0(r4); // bl 0x8061E0B0
    /* lfs f0, 0x10(r3) */ // 0x80726AC0
    /* stfs f0, 0x740(r31) */ // 0x80726AC4
    /* lfs f0, 0x14(r3) */ // 0x80726AC8
    /* stfs f0, 0x744(r31) */ // 0x80726ACC
    /* lfs f0, 0x18(r3) */ // 0x80726AD0
    /* stfs f0, 0x748(r31) */ // 0x80726AD4
    r30 = r30 + 1; // 0x80726AD8
    r3 = *(0x118 + r31); // lwz @ 0x80726ADC
    FUN_8061DB68(); // bl 0x8061DB68
    /* clrlwi r0, r3, 0x10 */ // 0x80726AE4
    if (<) goto 0x0x80726aa0;
    /* lis r4, 0 */ // 0x80726AF0
    r3 = r31 + 0x740; // 0x80726AF4
    r4 = r4 + 0; // 0x80726AF8
    r5 = r31 + 0x74c; // 0x80726AFC
    FUN_80743DF8(r4, r3, r4, r5); // bl 0x80743DF8
    /* lfs f2, 0x6d0(r31) */ // 0x80726B04
    /* lfs f1, 0x6d4(r31) */ // 0x80726B08
    /* lfs f0, 0x6d8(r31) */ // 0x80726B0C
    /* stfs f2, 0x758(r31) */ // 0x80726B10
    /* stfs f1, 0x768(r31) */ // 0x80726B14
    /* stfs f0, 0x778(r31) */ // 0x80726B18
    r31 = *(0xc + r1); // lwz @ 0x80726B1C
    r30 = *(8 + r1); // lwz @ 0x80726B20
    r0 = *(0x14 + r1); // lwz @ 0x80726B24
    return;
}