/* Function at 0x806C0934, size=932 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 27 function(s) */

int FUN_806C0934(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806C093C
    /* li r0, 0 */ // 0x806C0944
    /* lfs f0, 0(r4) */ // 0x806C0948
    /* li r4, 0 */ // 0x806C094C
    *(0x1c + r1) = r31; // stw @ 0x806C0950
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806C0958
    *(0x14 + r1) = r29; // stw @ 0x806C095C
    *(0x10 + r1) = r28; // stw @ 0x806C0960
    *(0x248c + r3) = r0; // stb @ 0x806C0964
    /* stfs f0, 0x2490(r3) */ // 0x806C0968
    r3 = r3 + 0x2210; // 0x806C096C
    FUN_80649EEC(r3); // bl 0x80649EEC
    r4 = *(0x247c + r31); // lwz @ 0x806C0974
    r3 = r31 + 0x468; // 0x806C0978
    r0 = r31 + 0xf2c; // 0x806C097C
    *(0x2474 + r31) = r3; // stw @ 0x806C0980
    *(0x2478 + r31) = r0; // stw @ 0x806C0988
    if (==) goto 0x0x806c09a4;
    if (==) goto 0x0x806c0a38;
    if (==) goto 0x0x806c0acc;
    /* b 0x806c0b5c */ // 0x806C09A0
    /* li r0, 0x60 */ // 0x806C09A4
    *(0x2480 + r31) = r0; // stw @ 0x806C09A8
    r28 = r31 + 0x5dc; // 0x806C09AC
    /* li r30, 0 */ // 0x806C09B0
    r3 = r28;
    r4 = r31 + 0x44; // 0x806C09B8
    /* li r5, 0 */ // 0x806C09BC
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r30 = r30 + 1; // 0x806C09C4
    r28 = r28 + 0x254; // 0x806C09C8
    if (<) goto 0x0x806c09b4;
    r28 = r31 + 0x10a0; // 0x806C09D4
    /* li r30, 0 */ // 0x806C09D8
    r3 = r28;
    r4 = r31 + 0x44; // 0x806C09E0
    /* li r5, 0 */ // 0x806C09E4
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r30 = r30 + 1; // 0x806C09EC
    r28 = r28 + 0x254; // 0x806C09F0
    if (<) goto 0x0x806c09dc;
    /* lis r30, 0 */ // 0x806C09FC
    r3 = r31 + 0x2f4; // 0x806C0A00
    r30 = r30 + 0; // 0x806C0A04
    /* li r5, 1 */ // 0x806C0A08
    r4 = r30 + 0x34b; // 0x806C0A0C
    FUN_806A11CC(r3, r5, r4); // bl 0x806A11CC
    r3 = r31 + 0x2f4; // 0x806C0A14
    r4 = r30 + 0x355; // 0x806C0A18
    /* li r5, 0 */ // 0x806C0A1C
    FUN_806A11CC(r4, r3, r4, r5); // bl 0x806A11CC
    r3 = r31 + 0x2f4; // 0x806C0A24
    r4 = r30 + 0x361; // 0x806C0A28
    /* li r5, 0 */ // 0x806C0A2C
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    /* b 0x806c0b5c */ // 0x806C0A34
    /* li r0, 4 */ // 0x806C0A38
    *(0x2480 + r31) = r0; // stw @ 0x806C0A3C
    r28 = r31 + 0x5dc; // 0x806C0A40
    /* li r30, 0 */ // 0x806C0A44
    r3 = r28;
    r4 = r31 + 0x58; // 0x806C0A4C
    /* li r5, 0 */ // 0x806C0A50
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r30 = r30 + 1; // 0x806C0A58
    r28 = r28 + 0x254; // 0x806C0A5C
    if (<) goto 0x0x806c0a48;
    r28 = r31 + 0x10a0; // 0x806C0A68
    /* li r30, 0 */ // 0x806C0A6C
    r3 = r28;
    r4 = r31 + 0x58; // 0x806C0A74
    /* li r5, 0 */ // 0x806C0A78
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r30 = r30 + 1; // 0x806C0A80
    r28 = r28 + 0x254; // 0x806C0A84
    if (<) goto 0x0x806c0a70;
    /* lis r30, 0 */ // 0x806C0A90
    r3 = r31 + 0x2f4; // 0x806C0A94
    r30 = r30 + 0; // 0x806C0A98
    /* li r5, 0 */ // 0x806C0A9C
    r4 = r30 + 0x36b; // 0x806C0AA0
    FUN_806A11CC(r3, r5, r4); // bl 0x806A11CC
    r3 = r31 + 0x2f4; // 0x806C0AA8
    r4 = r30 + 0x375; // 0x806C0AAC
    /* li r5, 0 */ // 0x806C0AB0
    FUN_806A11CC(r4, r3, r4, r5); // bl 0x806A11CC
    r3 = r31 + 0x2f4; // 0x806C0AB8
    r4 = r30 + 0x381; // 0x806C0ABC
    /* li r5, 1 */ // 0x806C0AC0
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    /* b 0x806c0b5c */ // 0x806C0AC8
    r0 = *(0x2670 + r31); // lwz @ 0x806C0ACC
    r28 = r31 + 0x5dc; // 0x806C0AD0
    *(0x2480 + r31) = r0; // stw @ 0x806C0AD4
    /* li r30, 0 */ // 0x806C0AD8
    r3 = r28;
    r4 = r31 + 0x6c; // 0x806C0AE0
    /* li r5, 0 */ // 0x806C0AE4
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r30 = r30 + 1; // 0x806C0AEC
    r28 = r28 + 0x254; // 0x806C0AF0
    if (<) goto 0x0x806c0adc;
    r28 = r31 + 0x10a0; // 0x806C0AFC
    /* li r30, 0 */ // 0x806C0B00
    r3 = r28;
    r4 = r31 + 0x6c; // 0x806C0B08
    /* li r5, 0 */ // 0x806C0B0C
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r30 = r30 + 1; // 0x806C0B14
    r28 = r28 + 0x254; // 0x806C0B18
    if (<) goto 0x0x806c0b04;
    /* lis r30, 0 */ // 0x806C0B24
    r3 = r31 + 0x2f4; // 0x806C0B28
    r30 = r30 + 0; // 0x806C0B2C
    /* li r5, 0 */ // 0x806C0B30
    r4 = r30 + 0x38b; // 0x806C0B34
    FUN_806A11CC(r3, r5, r4); // bl 0x806A11CC
    r3 = r31 + 0x2f4; // 0x806C0B3C
    r4 = r30 + 0x395; // 0x806C0B40
    /* li r5, 1 */ // 0x806C0B44
    FUN_806A11CC(r4, r3, r4, r5); // bl 0x806A11CC
    r3 = r31 + 0x2f4; // 0x806C0B4C
    r4 = r30 + 0x3a1; // 0x806C0B50
    /* li r5, 0 */ // 0x806C0B54
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    r3 = *(0x2480 + r31); // lwz @ 0x806C0B5C
    r0 = *(0x247c + r31); // lwz @ 0x806C0B60
    r3 = r3 + -1; // 0x806C0B64
    r3 = r3 >> 2; // srawi
    /* addze r3, r3 */ // 0x806C0B70
    r0 = r3 + 1; // 0x806C0B74
    *(0x2484 + r31) = r0; // stw @ 0x806C0B78
    if (!=) goto 0x0x806c0b8c;
    r0 = *(0x2674 + r31); // lwz @ 0x806C0B80
    *(0x2488 + r31) = r0; // stw @ 0x806C0B84
    /* b 0x806c0b94 */ // 0x806C0B88
    /* li r0, 0 */ // 0x806C0B8C
    *(0x2488 + r31) = r0; // stw @ 0x806C0B90
    r5 = *(0x2484 + r31); // lwz @ 0x806C0B94
    r3 = r31 + 0x19f0; // 0x806C0B98
    /* xori r0, r5, 1 */ // 0x806C0B9C
    r4 = r0 >> 1; // srawi
    r5 = r0 & r5; // 0x806C0BA4
    r0 = r0 >> 1; // srawi
    /* subf r4, r5, r4 */ // 0x806C0BAC
    /* subf r0, r5, r0 */ // 0x806C0BB0
    /* srwi r4, r4, 0x1f */ // 0x806C0BB4
    /* srwi r5, r0, 0x1f */ // 0x806C0BB8
    FUN_8069946C(); // bl 0x8069946C
    r3 = r31;
    FUN_806C1070(r3); // bl 0x806C1070
    r29 = *(0x2474 + r31); // lwz @ 0x806C0BC8
    /* li r4, 0 */ // 0x806C0BCC
    r3 = r29 + 0x98; // 0x806C0BD0
    FUN_8069F4A0(r3, r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C0BD8
    /* li r4, 3 */ // 0x806C0BDC
    /* lfs f1, 0(r5) */ // 0x806C0BE0
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r28 = r29 + 0x174; // 0x806C0BE8
    /* li r30, 0 */ // 0x806C0BEC
    r0 = *(0x3b4 + r29); // lwz @ 0x806C0BF0
    if (<) goto 0x0x806c0c0c;
    r3 = r28;
    /* li r4, 1 */ // 0x806C0C00
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x806c0c18 */ // 0x806C0C08
    r3 = r28;
    /* li r4, 0 */ // 0x806C0C10
    FUN_80649FD0(r4, r3, r4); // bl 0x80649FD0
    r30 = r30 + 1; // 0x806C0C18
    r28 = r28 + 0x254; // 0x806C0C1C
    r29 = r29 + 0x254; // 0x806C0C24
    if (<) goto 0x0x806c0bf0;
    r30 = *(0x2478 + r31); // lwz @ 0x806C0C2C
    /* li r4, 0 */ // 0x806C0C30
    r3 = r30 + 0x98; // 0x806C0C34
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C0C3C
    /* li r4, 0 */ // 0x806C0C40
    /* lfs f1, 0(r5) */ // 0x806C0C44
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r29 = r30 + 0x174; // 0x806C0C4C
    /* li r30, 0 */ // 0x806C0C50
    r3 = r29;
    /* li r4, 0 */ // 0x806C0C58
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r30 = r30 + 1; // 0x806C0C60
    r29 = r29 + 0x254; // 0x806C0C64
    if (<) goto 0x0x806c0c54;
    r0 = *(0x2480 + r31); // lwz @ 0x806C0C70
    if (<=) goto 0x0x806c0cb8;
    r0 = *(0x247c + r31); // lwz @ 0x806C0C7C
    if (!=) goto 0x0x806c0ca8;
    r0 = *(0x2678 + r31); // lwz @ 0x806C0C88
    /* li r4, 0 */ // 0x806C0C8C
    r3 = *(0x2474 + r31); // lwz @ 0x806C0C90
    /* mulli r0, r0, 0x254 */ // 0x806C0C94
    r3 = r3 + r0; // 0x806C0C98
    r3 = r3 + 0x174; // 0x806C0C9C
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    /* b 0x806c0cb8 */ // 0x806C0CA4
    r3 = *(0x2474 + r31); // lwz @ 0x806C0CA8
    /* li r4, 0 */ // 0x806C0CAC
    r3 = r3 + 0x174; // 0x806C0CB0
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r0 = *(0x24 + r1); // lwz @ 0x806C0CB8
    r31 = *(0x1c + r1); // lwz @ 0x806C0CBC
    r30 = *(0x18 + r1); // lwz @ 0x806C0CC0
    r29 = *(0x14 + r1); // lwz @ 0x806C0CC4
    r28 = *(0x10 + r1); // lwz @ 0x806C0CC8
    return;
}