/* Function at 0x808C3D24, size=1008 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r18 */
/* Calls: 5 function(s) */

int FUN_808C3D24(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -144(r1) */
    /* saved r18 */
    /* lis r10, 0 */ // 0x808C3D2C
    /* lis r8, 0 */ // 0x808C3D30
    *(0x94 + r1) = r0; // stw @ 0x808C3D34
    /* li r9, 2 */ // 0x808C3D3C
    /* lis r7, 0 */ // 0x808C3D40
    /* stmw r18, 0x58(r1) */ // 0x808C3D44
    r30 = r3;
    /* li r0, 0 */ // 0x808C3D4C
    r31 = r4;
    r5 = *(0 + r8); // lwz @ 0x808C3D60
    r6 = *(0x98 + r5); // lwz @ 0x808C3D64
    *(0x74 + r6) = r9; // stw @ 0x808C3D6C
    r6 = *(0 + r7); // lwz @ 0x808C3D70
    r3 = *(0x1780 + r6); // lwz @ 0x808C3D74
    r3 = r3 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r3; // stw @ 0x808C3D7C
    r6 = *(0 + r7); // lwz @ 0x808C3D80
    r3 = *(0x1780 + r6); // lwz @ 0x808C3D84
    r3 = r3 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r3; // stw @ 0x808C3D8C
    r6 = *(0 + r7); // lwz @ 0x808C3D90
    r3 = *(0x1780 + r6); // lwz @ 0x808C3D94
    r3 = r3 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r3; // stw @ 0x808C3D9C
    r3 = *(0 + r7); // lwz @ 0x808C3DA0
    *(0x1770 + r3) = r0; // stw @ 0x808C3DA4
    r11 = *(0 + r8); // lwz @ 0x808C3DA8
    r9 = *(0x88 + r10); // lwz @ 0x808C3DAC
    r3 = *(0x90 + r11); // lwz @ 0x808C3DB0
    r8 = *(4 + r5); // lwz @ 0x808C3DB4
    r0 = *(0x14 + r3); // lbz @ 0x808C3DB8
    r7 = *(8 + r5); // lwz @ 0x808C3DBC
    r6 = *(0xc + r5); // lwz @ 0x808C3DC0
    r5 = *(0x10 + r5); // lwz @ 0x808C3DC8
    r3 = *(0x9c + r10); // lwz @ 0x808C3DCC
    r0 = *(4 + r20); // lwz @ 0x808C3DD0
    r18 = *(8 + r20); // lwz @ 0x808C3DD4
    r19 = *(0xc + r20); // lwz @ 0x808C3DD8
    r20 = *(0x10 + r20); // lwz @ 0x808C3DDC
    r21 = *(0xb0 + r10); // lbz @ 0x808C3DE0
    r26 = *(0xb8 + r10); // lwz @ 0x808C3DE4
    r22 = *(1 + r12); // lbz @ 0x808C3DE8
    r23 = *(2 + r12); // lbz @ 0x808C3DEC
    r24 = *(3 + r12); // lbz @ 0x808C3DF0
    r25 = *(4 + r12); // lbz @ 0x808C3DF4
    r27 = *(4 + r28); // lwz @ 0x808C3DF8
    r29 = *(8 + r28); // lwz @ 0x808C3DFC
    r12 = *(0xc + r28); // lwz @ 0x808C3E00
    r10 = *(0x10 + r28); // lwz @ 0x808C3E04
    *(0x38 + r1) = r9; // stw @ 0x808C3E08
    r4 = *(0x240 + r4); // lwz @ 0x808C3E0C
    *(0x3c + r1) = r8; // stw @ 0x808C3E10
    *(0x40 + r1) = r7; // stw @ 0x808C3E14
    *(0x44 + r1) = r6; // stw @ 0x808C3E18
    *(0x48 + r1) = r5; // stw @ 0x808C3E1C
    *(0x24 + r1) = r3; // stw @ 0x808C3E20
    *(0x28 + r1) = r0; // stw @ 0x808C3E24
    *(0x2c + r1) = r18; // stw @ 0x808C3E28
    *(0x30 + r1) = r19; // stw @ 0x808C3E2C
    *(0x34 + r1) = r20; // stw @ 0x808C3E30
    *(8 + r1) = r21; // stb @ 0x808C3E34
    *(9 + r1) = r22; // stb @ 0x808C3E38
    *(0xa + r1) = r23; // stb @ 0x808C3E3C
    *(0xb + r1) = r24; // stb @ 0x808C3E40
    *(0xc + r1) = r25; // stb @ 0x808C3E44
    *(0x10 + r1) = r26; // stw @ 0x808C3E48
    *(0x14 + r1) = r27; // stw @ 0x808C3E4C
    *(0x18 + r1) = r29; // stw @ 0x808C3E50
    *(0x1c + r1) = r12; // stw @ 0x808C3E54
    *(0x20 + r1) = r10; // stw @ 0x808C3E58
    if (==) goto 0x0x808c3f30;
    if (!=) goto 0x0x808c3f30;
    r3 = *(0 + r11); // lwz @ 0x808C3E68
    r19 = *(0x13c + r3); // lwz @ 0x808C3E6C
    if (!=) goto 0x0x808c3e80;
    /* li r19, 0 */ // 0x808C3E78
    /* b 0x808c3ed4 */ // 0x808C3E7C
    /* lis r18, 0 */ // 0x808C3E80
    if (==) goto 0x0x808c3ed0;
    r12 = *(0 + r19); // lwz @ 0x808C3E8C
    r3 = r19;
    r12 = *(0x60 + r12); // lwz @ 0x808C3E94
    /* mtctr r12 */ // 0x808C3E98
    /* bctrl  */ // 0x808C3E9C
    /* b 0x808c3eb8 */ // 0x808C3EA0
    if (!=) goto 0x0x808c3eb4;
    /* li r0, 1 */ // 0x808C3EAC
    /* b 0x808c3ec4 */ // 0x808C3EB0
    r3 = *(0 + r3); // lwz @ 0x808C3EB4
    if (!=) goto 0x0x808c3ea4;
    /* li r0, 0 */ // 0x808C3EC0
    if (==) goto 0x0x808c3ed0;
    /* b 0x808c3ed4 */ // 0x808C3ECC
    /* li r19, 0 */ // 0x808C3ED0
    r12 = *(0 + r19); // lwz @ 0x808C3ED4
    r3 = r19;
    r12 = *(0x64 + r12); // lwz @ 0x808C3EDC
    /* mtctr r12 */ // 0x808C3EE0
    /* bctrl  */ // 0x808C3EE4
    r12 = *(0 + r19); // lwz @ 0x808C3EE8
    r3 = r19;
    /* li r4, 0x816 */ // 0x808C3EF0
    /* li r5, 0 */ // 0x808C3EF4
    r12 = *(0x68 + r12); // lwz @ 0x808C3EF8
    /* mtctr r12 */ // 0x808C3EFC
    /* bctrl  */ // 0x808C3F00
    r12 = *(0 + r30); // lwz @ 0x808C3F04
    r3 = r30;
    /* li r4, 0x4d */ // 0x808C3F0C
    /* li r5, 0 */ // 0x808C3F10
    r12 = *(0x24 + r12); // lwz @ 0x808C3F14
    /* mtctr r12 */ // 0x808C3F18
    /* bctrl  */ // 0x808C3F1C
    r3 = r31;
    /* li r4, 0 */ // 0x808C3F24
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    /* b 0x808c4100 */ // 0x808C3F2C
    if (==) goto 0x0x808c3f4c;
    if (==) goto 0x0x808c3f80;
    if (==) goto 0x0x808c3f80;
    /* b 0x808c3f9c */ // 0x808C3F48
    r3 = r30;
    r5 = r31;
    /* li r4, 0x41 */ // 0x808C3F54
    FUN_808B40C8(r3, r5, r4); // bl 0x808B40C8
    /* lis r4, 0 */ // 0x808C3F5C
    /* li r3, 0x41 */ // 0x808C3F60
    r18 = *(0 + r4); // lwz @ 0x808C3F64
    FUN_80694E54(r4, r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r18;
    /* li r5, 0 */ // 0x808C3F74
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    /* b 0x808c4100 */ // 0x808C3F7C
    /* lis r3, 0 */ // 0x808C3F80
    r3 = *(0 + r3); // lwz @ 0x808C3F88
    /* li r0, 0 */ // 0x808C3F8C
    if (!=) goto 0x0x808c3f98;
    /* li r0, 2 */ // 0x808C3F94
    *(0x175c + r3) = r0; // stw @ 0x808C3F98
    /* li r10, 0 */ // 0x808C3FA0
    /* lbzx r8, r9, r4 */ // 0x808C3FA4
    /* lis r7, 0 */ // 0x808C3FA8
    /* b 0x808c3fd4 */ // 0x808C3FAC
    /* clrlwi r5, r10, 0x18 */ // 0x808C3FB0
    r6 = *(0 + r7); // lwz @ 0x808C3FB4
    /* mulli r3, r5, 0xf0 */ // 0x808C3FB8
    /* neg r0, r5 */ // 0x808C3FC0
    r0 = r0 | r5; // 0x808C3FC4
    r3 = r6 + r3; // 0x808C3FC8
    /* srwi r0, r0, 0x1f */ // 0x808C3FCC
    *(0xc28 + r3) = r0; // stw @ 0x808C3FD0
    /* clrlwi r0, r10, 0x18 */ // 0x808C3FD4
    if (<) goto 0x0x808c3fb0;
    /* lbzx r3, r9, r4 */ // 0x808C3FE0
    /* cmplwi cr1, r3, 0xc */
    if (>=) goto 0x0x808c40c4;
    /* subfic r0, r3, 0xc */ // 0x808C3FEC
    /* clrlwi r0, r0, 0x18 */ // 0x808C3FF0
    if (<=) goto 0x0x808c408c;
    if (>) goto 0x0x808c408c;
    /* subfic r0, r3, 0xb */ // 0x808C4000
    /* lis r7, 0 */ // 0x808C4004
    /* srwi r0, r0, 3 */ // 0x808C4008
    /* li r6, 5 */ // 0x808C400C
    /* mtctr r0 */ // 0x808C4010
    if (>=) goto 0x0x808c408c;
    /* clrlwi r0, r3, 0x18 */ // 0x808C401C
    r3 = r3 + 8; // 0x808C4020
    /* mulli r8, r0, 0xf0 */ // 0x808C4024
    r0 = *(0 + r7); // lwz @ 0x808C4028
    r5 = r0 + r8; // 0x808C402C
    *(0xc28 + r5) = r6; // stw @ 0x808C4030
    r0 = *(0 + r7); // lwz @ 0x808C4034
    r5 = r0 + r8; // 0x808C4038
    *(0xd18 + r5) = r6; // stw @ 0x808C403C
    r0 = *(0 + r7); // lwz @ 0x808C4040
    r5 = r0 + r8; // 0x808C4044
    *(0xe08 + r5) = r6; // stw @ 0x808C4048
    r0 = *(0 + r7); // lwz @ 0x808C404C
    r5 = r0 + r8; // 0x808C4050
    *(0xef8 + r5) = r6; // stw @ 0x808C4054
    r0 = *(0 + r7); // lwz @ 0x808C4058
    r5 = r0 + r8; // 0x808C405C
    *(0xfe8 + r5) = r6; // stw @ 0x808C4060
    r0 = *(0 + r7); // lwz @ 0x808C4064
    r5 = r0 + r8; // 0x808C4068
    *(0x10d8 + r5) = r6; // stw @ 0x808C406C
    r0 = *(0 + r7); // lwz @ 0x808C4070
    r5 = r0 + r8; // 0x808C4074
    *(0x11c8 + r5) = r6; // stw @ 0x808C4078
    r0 = *(0 + r7); // lwz @ 0x808C407C
    r5 = r0 + r8; // 0x808C4080
    *(0x12b8 + r5) = r6; // stw @ 0x808C4084
    if (counter-- != 0) goto 0x0x808c401c;
    /* clrlwi r5, r3, 0x18 */ // 0x808C408C
    /* li r7, 5 */ // 0x808C4090
    /* subfic r0, r5, 0xc */ // 0x808C4094
    /* lis r6, 0 */ // 0x808C4098
    /* mtctr r0 */ // 0x808C409C
    if (>=) goto 0x0x808c40c4;
    /* clrlwi r0, r3, 0x18 */ // 0x808C40A8
    r5 = *(0 + r6); // lwz @ 0x808C40AC
    /* mulli r0, r0, 0xf0 */ // 0x808C40B0
    r3 = r3 + 1; // 0x808C40B4
    r5 = r5 + r0; // 0x808C40B8
    *(0xc28 + r5) = r7; // stw @ 0x808C40BC
    if (counter-- != 0) goto 0x0x808c40a8;
    /* lis r5, 0 */ // 0x808C40C4
    /* slwi r7, r4, 2 */ // 0x808C40C8
    r4 = *(0 + r5); // lwz @ 0x808C40D0
    /* lwzx r0, r3, r7 */ // 0x808C40D4
    *(0x1760 + r4) = r0; // stw @ 0x808C40DC
    /* lwzx r0, r3, r7 */ // 0x808C40E4
    r3 = r30;
    r6 = *(0 + r5); // lwz @ 0x808C40EC
    r5 = r31;
    /* lwzx r4, r4, r7 */ // 0x808C40F4
    *(0x1764 + r6) = r0; // stw @ 0x808C40F8
    FUN_808B38C8(r3, r5); // bl 0x808B38C8
    r0 = *(0x94 + r1); // lwz @ 0x808C4104
    return;
}