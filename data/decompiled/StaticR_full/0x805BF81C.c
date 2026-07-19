/* Function at 0x805BF81C, size=744 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_805BF81C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x805BF828
    r31 = r3;
    r3 = r3 + 0xc10; // 0x805BF830
    r4 = r31 + 0x20; // 0x805BF834
    FUN_805BF0E8(r3, r4); // bl 0x805BF0E8
    r9 = *(0xc14 + r31); // lbz @ 0x805BF83C
    r4 = r31 + 0x28; // 0x805BF840
    r8 = *(0xc15 + r31); // lbz @ 0x805BF844
    r3 = r31 + 0xc18; // 0x805BF848
    r7 = *(0xc16 + r31); // lbz @ 0x805BF84C
    r5 = r31 + 0xb68; // 0x805BF850
    r6 = *(0xc17 + r31); // lbz @ 0x805BF854
    /* li r0, 0x26 */ // 0x805BF858
    *(0x24 + r31) = r9; // stb @ 0x805BF85C
    *(0x25 + r31) = r8; // stb @ 0x805BF860
    *(0x26 + r31) = r7; // stb @ 0x805BF864
    *(0x27 + r31) = r6; // stb @ 0x805BF868
    r6 = *(4 + r3); // lbz @ 0x805BF86C
    r9 = r4 + 0x23; // 0x805BF870
    *(4 + r4) = r6; // stb @ 0x805BF874
    r8 = r3 + 0x23; // 0x805BF878
    r6 = *(5 + r3); // lbz @ 0x805BF87C
    *(5 + r4) = r6; // stb @ 0x805BF880
    r6 = *(6 + r3); // lbz @ 0x805BF884
    *(6 + r4) = r6; // stb @ 0x805BF888
    r6 = *(8 + r3); // lwz @ 0x805BF88C
    *(8 + r4) = r6; // stw @ 0x805BF890
    r6 = *(0xc + r3); // lwz @ 0x805BF894
    *(0xc + r4) = r6; // stw @ 0x805BF898
    r6 = *(0x10 + r3); // lwz @ 0x805BF89C
    *(0x10 + r4) = r6; // stw @ 0x805BF8A0
    r6 = *(0x18 + r3); // lwz @ 0x805BF8A4
    *(0x18 + r4) = r6; // stw @ 0x805BF8A8
    r6 = *(0x1c + r3); // lbz @ 0x805BF8AC
    *(0x1c + r4) = r6; // stb @ 0x805BF8B0
    r6 = *(0x1d + r3); // lbz @ 0x805BF8B4
    *(0x1d + r4) = r6; // stb @ 0x805BF8B8
    r6 = *(0x20 + r3); // lwz @ 0x805BF8BC
    *(0x20 + r4) = r6; // stw @ 0x805BF8C0
    /* mtctr r0 */ // 0x805BF8C4
    r7 = *(1 + r8); // lbz @ 0x805BF8C8
    /* lbzu r6, 2(r8) */ // 0x805BF8CC
    *(1 + r9) = r7; // stb @ 0x805BF8D0
    /* stbu r6, 2(r9) */ // 0x805BF8D4
    if (counter-- != 0) goto 0x0x805bf8c8;
    r6 = *(0x70 + r3); // lwz @ 0x805BF8DC
    *(0x70 + r4) = r6; // stw @ 0x805BF8E0
    r6 = *(0x74 + r3); // lbz @ 0x805BF8E4
    *(0x74 + r4) = r6; // stb @ 0x805BF8E8
    r6 = *(0x75 + r3); // lbz @ 0x805BF8EC
    *(0x75 + r4) = r6; // stb @ 0x805BF8F0
    r6 = *(0x76 + r3); // lbz @ 0x805BF8F4
    *(0x76 + r4) = r6; // stb @ 0x805BF8F8
    r6 = *(0x77 + r3); // lbz @ 0x805BF8FC
    *(0x77 + r4) = r6; // stb @ 0x805BF900
    r6 = *(0x78 + r3); // lwz @ 0x805BF904
    *(0x78 + r4) = r6; // stw @ 0x805BF908
    r6 = *(0x80 + r3); // lwz @ 0x805BF90C
    r7 = *(0x7c + r3); // lwz @ 0x805BF910
    *(0x7c + r4) = r7; // stw @ 0x805BF914
    *(0x80 + r4) = r6; // stw @ 0x805BF918
    r6 = *(0x88 + r3); // lwz @ 0x805BF91C
    r7 = *(0x84 + r3); // lwz @ 0x805BF920
    *(0x84 + r4) = r7; // stw @ 0x805BF924
    *(0x88 + r4) = r6; // stw @ 0x805BF928
    r6 = *(0x90 + r3); // lwz @ 0x805BF92C
    r7 = *(0x8c + r3); // lwz @ 0x805BF930
    *(0x8c + r4) = r7; // stw @ 0x805BF934
    *(0x90 + r4) = r6; // stw @ 0x805BF938
    r6 = *(0x98 + r3); // lwz @ 0x805BF93C
    r7 = *(0x94 + r3); // lwz @ 0x805BF940
    *(0x94 + r4) = r7; // stw @ 0x805BF944
    *(0x98 + r4) = r6; // stw @ 0x805BF948
    r6 = *(0xa0 + r3); // lwz @ 0x805BF94C
    r7 = *(0x9c + r3); // lwz @ 0x805BF950
    *(0x9c + r4) = r7; // stw @ 0x805BF954
    *(0xa0 + r4) = r6; // stw @ 0x805BF958
    r6 = *(0xa8 + r3); // lwz @ 0x805BF95C
    r7 = *(0xa4 + r3); // lwz @ 0x805BF960
    *(0xa4 + r4) = r7; // stw @ 0x805BF964
    *(0xa8 + r4) = r6; // stw @ 0x805BF968
    r6 = *(0xb0 + r3); // lwz @ 0x805BF96C
    r7 = *(0xac + r3); // lwz @ 0x805BF970
    *(0xac + r4) = r7; // stw @ 0x805BF974
    *(0xb0 + r4) = r6; // stw @ 0x805BF978
    r6 = *(0xb4 + r3); // lwz @ 0x805BF97C
    *(0xb4 + r4) = r6; // stw @ 0x805BF980
    r6 = *(0xb8 + r3); // lbz @ 0x805BF984
    *(0xb8 + r4) = r6; // stb @ 0x805BF988
    r6 = *(0xb9 + r3); // lbz @ 0x805BF98C
    *(0xb9 + r4) = r6; // stb @ 0x805BF990
    r6 = *(0xba + r3); // lbz @ 0x805BF994
    *(0xba + r4) = r6; // stb @ 0x805BF998
    r6 = *(0xbc + r3); // lwz @ 0x805BF99C
    *(0xbc + r4) = r6; // stw @ 0x805BF9A0
    r6 = *(0xc0 + r3); // lbz @ 0x805BF9A4
    *(0xc0 + r4) = r6; // stb @ 0x805BF9A8
    r6 = *(0xc1 + r3); // lbz @ 0x805BF9AC
    *(0xc1 + r4) = r6; // stb @ 0x805BF9B0
    r6 = *(0xc2 + r3); // lbz @ 0x805BF9B4
    *(0xc2 + r4) = r6; // stb @ 0x805BF9B8
    r6 = *(0xc4 + r3); // lwz @ 0x805BF9BC
    *(0xc4 + r4) = r6; // stw @ 0x805BF9C0
    r6 = *(0xc8 + r3); // lwz @ 0x805BF9C4
    *(0xc8 + r4) = r6; // stw @ 0x805BF9C8
    r6 = *(0xcc + r3); // lwz @ 0x805BF9CC
    *(0xcc + r4) = r6; // stw @ 0x805BF9D0
    r6 = *(0xd0 + r3); // lwz @ 0x805BF9D4
    *(0xd0 + r4) = r6; // stw @ 0x805BF9D8
    r6 = *(0xd4 + r3); // lwz @ 0x805BF9DC
    *(0xd4 + r4) = r6; // stw @ 0x805BF9E0
    r6 = *(0xd8 + r3); // lhz @ 0x805BF9E4
    *(0xd8 + r4) = r6; // sth @ 0x805BF9E8
    r6 = *(0xda + r3); // lhz @ 0x805BF9EC
    *(0xda + r4) = r6; // sth @ 0x805BF9F0
    r6 = *(0xdc + r3); // lhz @ 0x805BF9F4
    *(0xdc + r4) = r6; // sth @ 0x805BF9F8
    r6 = *(0xde + r3); // lha @ 0x805BF9FC
    *(0xde + r4) = r6; // sth @ 0x805BFA00
    r6 = *(0xe0 + r3); // lbz @ 0x805BFA04
    *(0xe0 + r4) = r6; // stb @ 0x805BFA08
    r6 = *(0xe1 + r3); // lbz @ 0x805BFA0C
    *(0xe1 + r4) = r6; // stb @ 0x805BFA10
    r6 = *(0xe2 + r3); // lbz @ 0x805BFA14
    *(0xe2 + r4) = r6; // stb @ 0x805BFA18
    r6 = *(0xe8 + r3); // lhz @ 0x805BFA1C
    *(0xe8 + r4) = r6; // sth @ 0x805BFA20
    r6 = *(0xec + r3); // lbz @ 0x805BFA24
    r3 = r3 + 0xf0; // 0x805BFA28
    *(0xec + r4) = r6; // stb @ 0x805BFA2C
    r4 = r4 + 0xf0; // 0x805BFA30
    if (<) goto 0x0x805bf86c;
    r22 = *(0x1758 + r31); // lwz @ 0x805BFA3C
    /* li r0, 0xe */ // 0x805BFA40
    r23 = *(0x175c + r31); // lwz @ 0x805BFA44
    r5 = r31 + 0xb98; // 0x805BFA48
    r24 = *(0x1760 + r31); // lwz @ 0x805BFA4C
    r4 = r31 + 0x1788; // 0x805BFA50
    r25 = *(0x1764 + r31); // lwz @ 0x805BFA54
    r26 = *(0x1768 + r31); // lwz @ 0x805BFA58
    r27 = *(0x176c + r31); // lwz @ 0x805BFA5C
    r28 = *(0x1770 + r31); // lwz @ 0x805BFA60
    r29 = *(0x1774 + r31); // lbz @ 0x805BFA64
    r30 = *(0x1775 + r31); // lbz @ 0x805BFA68
    r12 = *(0x1776 + r31); // lbz @ 0x805BFA6C
    r11 = *(0x1777 + r31); // lbz @ 0x805BFA70
    r10 = *(0x1778 + r31); // lwz @ 0x805BFA74
    r9 = *(0x177c + r31); // lbz @ 0x805BFA78
    r8 = *(0x177d + r31); // lbz @ 0x805BFA7C
    r7 = *(0x1780 + r31); // lwz @ 0x805BFA80
    r6 = *(0x1784 + r31); // lwz @ 0x805BFA84
    r3 = *(0x1788 + r31); // lwz @ 0x805BFA88
    *(0xb68 + r31) = r22; // stw @ 0x805BFA8C
    *(0xb6c + r31) = r23; // stw @ 0x805BFA90
    *(0xb70 + r31) = r24; // stw @ 0x805BFA94
    *(0xb74 + r31) = r25; // stw @ 0x805BFA98
    *(0xb78 + r31) = r26; // stw @ 0x805BFA9C
    *(0xb7c + r31) = r27; // stw @ 0x805BFAA0
    *(0xb80 + r31) = r28; // stw @ 0x805BFAA4
    *(0xb84 + r31) = r29; // stb @ 0x805BFAA8
    *(0xb85 + r31) = r30; // stb @ 0x805BFAAC
    *(0xb86 + r31) = r12; // stb @ 0x805BFAB0
    *(0xb87 + r31) = r11; // stb @ 0x805BFAB4
    *(0xb88 + r31) = r10; // stw @ 0x805BFAB8
    *(0xb8c + r31) = r9; // stb @ 0x805BFABC
    *(0xb8d + r31) = r8; // stb @ 0x805BFAC0
    *(0xb90 + r31) = r7; // stw @ 0x805BFAC4
    *(0xb94 + r31) = r6; // stw @ 0x805BFAC8
    *(0xb98 + r31) = r3; // stw @ 0x805BFACC
    /* mtctr r0 */ // 0x805BFAD0
    r3 = *(4 + r4); // lwz @ 0x805BFAD4
    r0 = *(8 + r4); // lwzu @ 0x805BFAD8
    *(4 + r5) = r3; // stw @ 0x805BFADC
    *(8 + r5) = r0; // stwu @ 0x805BFAE0
    if (counter-- != 0) goto 0x0x805bfad4;
    r0 = *(0x17fc + r31); // lwz @ 0x805BFAE8
    *(0xc0c + r31) = r0; // stw @ 0x805BFAEC
    r0 = *(0x34 + r1); // lwz @ 0x805BFAF4
    return;
}