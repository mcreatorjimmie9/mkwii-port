/* Function at 0x8077DA58, size=300 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8077DA58(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8077DA60
    r4 = *(0x20 + r3); // lwz @ 0x8077DA64
    r0 = *(0x46 + r4); // lha @ 0x8077DA68
    r4 = *(8 + r4); // lwz @ 0x8077DA6C
    /* slwi r0, r0, 4 */ // 0x8077DA70
    r4 = r4 + r0; // 0x8077DA74
    r0 = *(0xe + r4); // lhz @ 0x8077DA78
    if (!=) goto 0x0x8077dae4;
    r4 = *(0x165 + r3); // lbz @ 0x8077DA84
    r0 = r4 + 1; // 0x8077DA88
    *(0x165 + r3) = r0; // stb @ 0x8077DA8C
    /* clrlwi r0, r0, 0x18 */ // 0x8077DA90
    if (!=) goto 0x0x8077dad0;
    /* lis r4, 0 */ // 0x8077DA9C
    /* lfs f0, 0x154(r3) */ // 0x8077DAA0
    r4 = *(0 + r4); // lwz @ 0x8077DAA4
    r4 = *(0xc + r4); // lwz @ 0x8077DAA8
    r4 = *(0 + r4); // lwz @ 0x8077DAAC
    /* lfs f1, 0xc(r4) */ // 0x8077DAB0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8077DAB4
    /* mfcr r0 */ // 0x8077DAB8
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8077DABC
    if (==) goto 0x0x8077db74;
    /* li r0, 1 */ // 0x8077DAC4
    *(0x116 + r3) = r0; // stb @ 0x8077DAC8
    /* b 0x8077db74 */ // 0x8077DACC
    if (!=) goto 0x0x8077db74;
    /* li r0, 1 */ // 0x8077DAD8
    *(0x116 + r3) = r0; // stb @ 0x8077DADC
    /* b 0x8077db74 */ // 0x8077DAE0
    if (!=) goto 0x0x8077db50;
    r4 = *(0xc + r4); // lhz @ 0x8077DAEC
    /* lis r0, 0x4330 */ // 0x8077DAF0
    *(0xc + r1) = r4; // stw @ 0x8077DAF4
    /* lis r4, 0 */ // 0x8077DAF8
    /* lfd f2, 0(r4) */ // 0x8077DAFC
    /* lis r5, 0 */ // 0x8077DB00
    *(8 + r1) = r0; // stw @ 0x8077DB04
    /* lis r4, 0 */ // 0x8077DB08
    /* lfs f0, 0(r5) */ // 0x8077DB0C
    /* lfd f1, 8(r1) */ // 0x8077DB10
    /* fsubs f1, f1, f2 */ // 0x8077DB14
    /* fdivs f0, f1, f0 */ // 0x8077DB18
    /* stfs f0, 0x1a8(r3) */ // 0x8077DB1C
    r4 = *(0 + r4); // lwz @ 0x8077DB20
    r4 = *(0xc + r4); // lwz @ 0x8077DB24
    r4 = *(0 + r4); // lwz @ 0x8077DB28
    /* lfs f1, 0xc(r4) */ // 0x8077DB2C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8077DB30
    /* mfcr r0 */ // 0x8077DB34
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8077DB38
    if (==) goto 0x0x8077db74;
    /* li r0, 1 */ // 0x8077DB40
    *(0x116 + r3) = r0; // stb @ 0x8077DB44
    *(0x1a4 + r3) = r0; // stb @ 0x8077DB48
    /* b 0x8077db74 */ // 0x8077DB4C
    if (!=) goto 0x0x8077db74;
    r0 = *(0x165 + r3); // lbz @ 0x8077DB58
    if (<) goto 0x0x8077db74;
    /* li r0, 1 */ // 0x8077DB64
    *(0x116 + r3) = r0; // stb @ 0x8077DB68
    *(0x1ac + r3) = r0; // stb @ 0x8077DB6C
    FUN_807558E8(); // bl 0x807558E8
    r0 = *(0x14 + r1); // lwz @ 0x8077DB74
    return;
}