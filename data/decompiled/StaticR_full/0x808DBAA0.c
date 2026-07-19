/* Function at 0x808DBAA0, size=368 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808DBAA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808DBAA8
    *(0x2c + r1) = r31; // stw @ 0x808DBAB0
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x808DBAB8
    r30 = r3;
    FUN_8089BC74(); // bl 0x8089BC74
    r0 = *(0x54 + r30); // lbz @ 0x808DBAC4
    /* lis r3, 0 */ // 0x808DBAC8
    r3 = r3 + 0; // 0x808DBACC
    *(0 + r30) = r3; // stw @ 0x808DBAD0
    if (==) goto 0x0x808dbae4;
    r3 = r30 + 0x48; // 0x808DBADC
    /* b 0x808dbb14 */ // 0x808DBAE0
    /* li r0, 1 */ // 0x808DBAE4
    *(0x54 + r30) = r0; // stb @ 0x808DBAE8
    r4 = r30 + 0x58; // 0x808DBAF0
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 0x14(r1) */ // 0x808DBAF8
    r3 = r30 + 0x48; // 0x808DBAFC
    /* stfs f0, 0x48(r30) */ // 0x808DBB00
    /* lfs f0, 0x18(r1) */ // 0x808DBB04
    /* stfs f0, 0x4c(r30) */ // 0x808DBB08
    /* lfs f0, 0x1c(r1) */ // 0x808DBB0C
    /* stfs f0, 0x50(r30) */ // 0x808DBB10
    r0 = *(0x54 + r30); // lbz @ 0x808DBB14
    /* lfs f2, 0(r3) */ // 0x808DBB18
    /* lfs f1, 4(r3) */ // 0x808DBB1C
    /* lfs f0, 8(r3) */ // 0x808DBB24
    /* stfs f2, 0x104(r30) */ // 0x808DBB28
    /* stfs f1, 0x108(r30) */ // 0x808DBB2C
    /* stfs f0, 0x10c(r30) */ // 0x808DBB30
    if (==) goto 0x0x808dbb40;
    r4 = r30 + 0x48; // 0x808DBB38
    /* b 0x808dbb70 */ // 0x808DBB3C
    /* li r0, 1 */ // 0x808DBB40
    *(0x54 + r30) = r0; // stb @ 0x808DBB44
    r4 = r30 + 0x58; // 0x808DBB4C
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x808DBB54
    r4 = r30 + 0x48; // 0x808DBB58
    /* stfs f0, 0x48(r30) */ // 0x808DBB5C
    /* lfs f0, 0xc(r1) */ // 0x808DBB60
    /* stfs f0, 0x4c(r30) */ // 0x808DBB64
    /* lfs f0, 0x10(r1) */ // 0x808DBB68
    /* stfs f0, 0x50(r30) */ // 0x808DBB6C
    /* lis r3, 0 */ // 0x808DBB70
    /* lfs f1, 4(r4) */ // 0x808DBB74
    /* lfs f0, 0(r3) */ // 0x808DBB78
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808DBB7C
    /* mfcr r0 */ // 0x808DBB80
    /* lis r4, 0 */ // 0x808DBB84
    /* srwi r0, r0, 0x1f */ // 0x808DBB88
    *(0x110 + r30) = r0; // stb @ 0x808DBB8C
    /* lis r3, 0x4330 */ // 0x808DBB90
    /* lfd f1, 0(r4) */ // 0x808DBB94
    r5 = *(0 + r31); // lwz @ 0x808DBB98
    /* li r0, 0 */ // 0x808DBB9C
    *(0x20 + r1) = r3; // stw @ 0x808DBBA0
    r3 = r30;
    r5 = *(0x2a + r5); // lha @ 0x808DBBA8
    /* xoris r4, r5, 0x8000 */ // 0x808DBBAC
    *(0x24 + r1) = r4; // stw @ 0x808DBBB0
    /* lfd f0, 0x20(r1) */ // 0x808DBBB4
    /* fsubs f0, f0, f1 */ // 0x808DBBB8
    /* stfs f0, 0x114(r30) */ // 0x808DBBBC
    r4 = *(0 + r31); // lwz @ 0x808DBBC0
    r4 = *(0x2c + r4); // lha @ 0x808DBBC4
    *(0x118 + r30) = r4; // stw @ 0x808DBBC8
    /* slwi r5, r4, 1 */ // 0x808DBBCC
    r4 = *(0 + r31); // lwz @ 0x808DBBD0
    r6 = *(0x2e + r4); // lha @ 0x808DBBD4
    *(0x11c + r30) = r6; // stw @ 0x808DBBD8
    r4 = *(0 + r31); // lwz @ 0x808DBBDC
    r4 = *(0x30 + r4); // lha @ 0x808DBBE0
    *(0x120 + r30) = r4; // stw @ 0x808DBBE4
    r4 = r4 + r6; // 0x808DBBE8
    r4 = r5 + r4; // 0x808DBBEC
    *(0x124 + r30) = r4; // stw @ 0x808DBBF0
    *(0x128 + r30) = r0; // stw @ 0x808DBBF4
    r31 = *(0x2c + r1); // lwz @ 0x808DBBF8
    r30 = *(0x28 + r1); // lwz @ 0x808DBBFC
    r0 = *(0x34 + r1); // lwz @ 0x808DBC00
    return;
}