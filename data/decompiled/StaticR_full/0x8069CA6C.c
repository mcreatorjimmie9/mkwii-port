/* Function at 0x8069CA6C, size=1080 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8069CA6C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    /* li r3, 0x4b */ // 0x8069CA80
    *(0x18 + r1) = r30; // stw @ 0x8069CA84
    *(0x14 + r1) = r29; // stw @ 0x8069CA88
    FUN_808E6DC0(r3); // bl 0x808E6DC0
    r0 = *(0x6c4 + r3); // lbz @ 0x8069CA90
    if (==) goto 0x0x8069ce88;
    r0 = *(0x1888 + r31); // lwz @ 0x8069CA9C
    if (==) goto 0x0x8069cabc;
    if (==) goto 0x0x8069cc04;
    if (==) goto 0x0x8069cd78;
    /* b 0x8069ce88 */ // 0x8069CAB8
    /* li r6, 2 */ // 0x8069CABC
    /* lis r5, 0 */ // 0x8069CAC0
    /* mulli r7, r6, 0xf0 */ // 0x8069CAC4
    r0 = *(0 + r5); // lwz @ 0x8069CAC8
    /* li r4, 5 */ // 0x8069CACC
    /* li r6, 7 */ // 0x8069CAD0
    r3 = r0 + r7; // 0x8069CAD4
    *(0xc28 + r3) = r4; // stw @ 0x8069CAD8
    r0 = *(0 + r5); // lwz @ 0x8069CADC
    r3 = r0 + r7; // 0x8069CAE0
    *(0xd18 + r3) = r4; // stw @ 0x8069CAE4
    r0 = *(0 + r5); // lwz @ 0x8069CAE8
    r3 = r0 + r7; // 0x8069CAEC
    *(0xe08 + r3) = r4; // stw @ 0x8069CAF0
    r0 = *(0 + r5); // lwz @ 0x8069CAF4
    r3 = r0 + r7; // 0x8069CAF8
    *(0xef8 + r3) = r4; // stw @ 0x8069CAFC
    r0 = *(0 + r5); // lwz @ 0x8069CB00
    r3 = r0 + r7; // 0x8069CB04
    *(0xfe8 + r3) = r4; // stw @ 0x8069CB08
    /* mulli r7, r6, 0xf0 */ // 0x8069CB0C
    r0 = *(0 + r5); // lwz @ 0x8069CB10
    r3 = r0 + r7; // 0x8069CB14
    *(0xc28 + r3) = r4; // stw @ 0x8069CB18
    r0 = *(0 + r5); // lwz @ 0x8069CB1C
    r3 = r0 + r7; // 0x8069CB20
    *(0xd18 + r3) = r4; // stw @ 0x8069CB24
    r0 = *(0 + r5); // lwz @ 0x8069CB28
    r3 = r0 + r7; // 0x8069CB2C
    *(0xe08 + r3) = r4; // stw @ 0x8069CB30
    r0 = *(0 + r5); // lwz @ 0x8069CB34
    r3 = r0 + r7; // 0x8069CB38
    *(0xef8 + r3) = r4; // stw @ 0x8069CB3C
    r0 = *(0 + r5); // lwz @ 0x8069CB40
    r3 = r0 + r7; // 0x8069CB44
    *(0xfe8 + r3) = r4; // stw @ 0x8069CB48
    r3 = *(0x1918 + r31); // lwz @ 0x8069CB4C
    r4 = *(0x191c + r31); // lwz @ 0x8069CB50
    FUN_8066084C(); // bl 0x8066084C
    /* lis r3, 0 */ // 0x8069CB58
    r3 = *(0 + r3); // lwz @ 0x8069CB5C
    r3 = *(0 + r3); // lwz @ 0x8069CB60
    r29 = *(0x2a4 + r3); // lwz @ 0x8069CB64
    if (!=) goto 0x0x8069cb78;
    /* li r29, 0 */ // 0x8069CB70
    /* b 0x8069cbcc */ // 0x8069CB74
    /* lis r30, 0 */ // 0x8069CB78
    r30 = r30 + 0; // 0x8069CB7C
    if (==) goto 0x0x8069cbc8;
    r12 = *(0 + r29); // lwz @ 0x8069CB84
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8069CB8C
    /* mtctr r12 */ // 0x8069CB90
    /* bctrl  */ // 0x8069CB94
    /* b 0x8069cbb0 */ // 0x8069CB98
    if (!=) goto 0x0x8069cbac;
    /* li r0, 1 */ // 0x8069CBA4
    /* b 0x8069cbbc */ // 0x8069CBA8
    r3 = *(0 + r3); // lwz @ 0x8069CBAC
    if (!=) goto 0x0x8069cb9c;
    /* li r0, 0 */ // 0x8069CBB8
    if (==) goto 0x0x8069cbc8;
    /* b 0x8069cbcc */ // 0x8069CBC4
    /* li r29, 0 */ // 0x8069CBC8
    r3 = r29;
    /* li r4, 0 */ // 0x8069CBD0
    /* li r5, 0 */ // 0x8069CBD4
    FUN_8065FA0C(r3, r4, r5); // bl 0x8065FA0C
    r12 = *(0 + r31); // lwz @ 0x8069CBDC
    /* lis r5, 0 */ // 0x8069CBE0
    /* lfs f1, 0(r5) */ // 0x8069CBE4
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x8069CBEC
    /* li r4, 0x1f */ // 0x8069CBF0
    /* li r5, 0 */ // 0x8069CBF4
    /* mtctr r12 */ // 0x8069CBF8
    /* bctrl  */ // 0x8069CBFC
    /* b 0x8069ce88 */ // 0x8069CC00
    /* li r6, 1 */ // 0x8069CC04
    /* lis r5, 0 */ // 0x8069CC08
    /* mulli r7, r6, 0xf0 */ // 0x8069CC0C
    r3 = *(0 + r5); // lwz @ 0x8069CC10
    /* li r0, 0xb */ // 0x8069CC14
    /* li r4, 5 */ // 0x8069CC18
    r3 = r3 + r7; // 0x8069CC1C
    /* li r6, 6 */ // 0x8069CC20
    *(0xc28 + r3) = r4; // stw @ 0x8069CC24
    /* mulli r0, r0, 0xf0 */ // 0x8069CC28
    r3 = *(0 + r5); // lwz @ 0x8069CC2C
    r3 = r3 + r7; // 0x8069CC30
    *(0xd18 + r3) = r4; // stw @ 0x8069CC34
    r3 = *(0 + r5); // lwz @ 0x8069CC38
    r3 = r3 + r7; // 0x8069CC3C
    *(0xe08 + r3) = r4; // stw @ 0x8069CC40
    r3 = *(0 + r5); // lwz @ 0x8069CC44
    r3 = r3 + r7; // 0x8069CC48
    *(0xef8 + r3) = r4; // stw @ 0x8069CC4C
    r3 = *(0 + r5); // lwz @ 0x8069CC50
    r3 = r3 + r7; // 0x8069CC54
    *(0xfe8 + r3) = r4; // stw @ 0x8069CC58
    /* mulli r7, r6, 0xf0 */ // 0x8069CC5C
    r3 = *(0 + r5); // lwz @ 0x8069CC60
    r3 = r3 + r7; // 0x8069CC64
    *(0xc28 + r3) = r4; // stw @ 0x8069CC68
    r3 = *(0 + r5); // lwz @ 0x8069CC6C
    r3 = r3 + r7; // 0x8069CC70
    *(0xd18 + r3) = r4; // stw @ 0x8069CC74
    r3 = *(0 + r5); // lwz @ 0x8069CC78
    r3 = r3 + r7; // 0x8069CC7C
    *(0xe08 + r3) = r4; // stw @ 0x8069CC80
    r3 = *(0 + r5); // lwz @ 0x8069CC84
    r3 = r3 + r7; // 0x8069CC88
    *(0xef8 + r3) = r4; // stw @ 0x8069CC8C
    r3 = *(0 + r5); // lwz @ 0x8069CC90
    r3 = r3 + r7; // 0x8069CC94
    *(0xfe8 + r3) = r4; // stw @ 0x8069CC98
    r3 = *(0 + r5); // lwz @ 0x8069CC9C
    r3 = r3 + r0; // 0x8069CCA0
    *(0xc28 + r3) = r4; // stw @ 0x8069CCA4
    r3 = *(0x1918 + r31); // lwz @ 0x8069CCA8
    r4 = *(0x191c + r31); // lwz @ 0x8069CCAC
    FUN_8066084C(); // bl 0x8066084C
    /* lis r3, 0 */ // 0x8069CCB4
    r3 = *(0 + r3); // lwz @ 0x8069CCB8
    r3 = *(0 + r3); // lwz @ 0x8069CCBC
    r29 = *(0x2a4 + r3); // lwz @ 0x8069CCC0
    if (!=) goto 0x0x8069ccd4;
    /* li r29, 0 */ // 0x8069CCCC
    /* b 0x8069cd28 */ // 0x8069CCD0
    /* lis r30, 0 */ // 0x8069CCD4
    r30 = r30 + 0; // 0x8069CCD8
    if (==) goto 0x0x8069cd24;
    r12 = *(0 + r29); // lwz @ 0x8069CCE0
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8069CCE8
    /* mtctr r12 */ // 0x8069CCEC
    /* bctrl  */ // 0x8069CCF0
    /* b 0x8069cd0c */ // 0x8069CCF4
    if (!=) goto 0x0x8069cd08;
    /* li r0, 1 */ // 0x8069CD00
    /* b 0x8069cd18 */ // 0x8069CD04
    r3 = *(0 + r3); // lwz @ 0x8069CD08
    if (!=) goto 0x0x8069ccf8;
    /* li r0, 0 */ // 0x8069CD14
    if (==) goto 0x0x8069cd24;
    /* b 0x8069cd28 */ // 0x8069CD20
    /* li r29, 0 */ // 0x8069CD24
    r3 = r29;
    FUN_8065FA90(r3); // bl 0x8065FA90
    /* lis r3, 0 */ // 0x8069CD30
    /* li r5, 0 */ // 0x8069CD34
    r3 = *(0 + r3); // lwz @ 0x8069CD38
    /* li r6, 2 */ // 0x8069CD3C
    r4 = *(0x98 + r3); // lwz @ 0x8069CD40
    r3 = r4 + 0x188; // 0x8069CD44
    r4 = r4 + 0x238; // 0x8069CD48
    FUN_8066E6F0(r6, r3, r4); // bl 0x8066E6F0
    r12 = *(0 + r31); // lwz @ 0x8069CD50
    /* lis r5, 0 */ // 0x8069CD54
    /* lfs f1, 0(r5) */ // 0x8069CD58
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x8069CD60
    /* li r4, 0x34 */ // 0x8069CD64
    /* li r5, 0 */ // 0x8069CD68
    /* mtctr r12 */ // 0x8069CD6C
    /* bctrl  */ // 0x8069CD70
    /* b 0x8069ce88 */ // 0x8069CD74
    /* li r12, 1 */ // 0x8069CD78
    /* lis r6, 0 */ // 0x8069CD7C
    /* mulli r29, r12, 0xf0 */ // 0x8069CD80
    r11 = *(0 + r6); // lwz @ 0x8069CD84
    /* li r4, 0xb */ // 0x8069CD88
    /* lis r3, 0 */ // 0x8069CD8C
    r11 = r11 + r29; // 0x8069CD90
    /* li r0, 5 */ // 0x8069CD94
    *(0xc28 + r11) = r0; // stw @ 0x8069CD98
    /* mulli r7, r4, 0xf0 */ // 0x8069CD9C
    /* lfs f1, 0(r3) */ // 0x8069CDA0
    /* li r12, 6 */ // 0x8069CDA4
    r11 = *(0 + r6); // lwz @ 0x8069CDA8
    /* lis r10, 0 */ // 0x8069CDAC
    /* li r9, 0 */ // 0x8069CDB0
    r11 = r11 + r29; // 0x8069CDB4
    /* lis r8, 0 */ // 0x8069CDB8
    *(0xd18 + r11) = r0; // stw @ 0x8069CDBC
    r3 = r31;
    /* li r4, 0x1f */ // 0x8069CDC4
    /* li r5, 0 */ // 0x8069CDC8
    r11 = *(0 + r6); // lwz @ 0x8069CDCC
    r11 = r11 + r29; // 0x8069CDD0
    *(0xe08 + r11) = r0; // stw @ 0x8069CDD4
    r11 = *(0 + r6); // lwz @ 0x8069CDD8
    r11 = r11 + r29; // 0x8069CDDC
    *(0xef8 + r11) = r0; // stw @ 0x8069CDE0
    r11 = *(0 + r6); // lwz @ 0x8069CDE4
    r11 = r11 + r29; // 0x8069CDE8
    *(0xfe8 + r11) = r0; // stw @ 0x8069CDEC
    /* mulli r29, r12, 0xf0 */ // 0x8069CDF0
    r11 = *(0 + r6); // lwz @ 0x8069CDF4
    r11 = r11 + r29; // 0x8069CDF8
    *(0xc28 + r11) = r0; // stw @ 0x8069CDFC
    r11 = *(0 + r6); // lwz @ 0x8069CE00
    r11 = r11 + r29; // 0x8069CE04
    *(0xd18 + r11) = r0; // stw @ 0x8069CE08
    r11 = *(0 + r6); // lwz @ 0x8069CE0C
    r11 = r11 + r29; // 0x8069CE10
    *(0xe08 + r11) = r0; // stw @ 0x8069CE14
    r11 = *(0 + r6); // lwz @ 0x8069CE18
    r11 = r11 + r29; // 0x8069CE1C
    *(0xef8 + r11) = r0; // stw @ 0x8069CE20
    r11 = *(0 + r6); // lwz @ 0x8069CE24
    r11 = r11 + r29; // 0x8069CE28
    *(0xfe8 + r11) = r0; // stw @ 0x8069CE2C
    r11 = *(0 + r6); // lwz @ 0x8069CE30
    r7 = r11 + r7; // 0x8069CE34
    *(0xc28 + r7) = r0; // stw @ 0x8069CE38
    r7 = *(0 + r10); // lwz @ 0x8069CE3C
    r7 = *(0x98 + r7); // lwz @ 0x8069CE40
    *(0x3c4 + r7) = r9; // stw @ 0x8069CE44
    r7 = *(0 + r10); // lwz @ 0x8069CE48
    r9 = *(0 + r6); // lwz @ 0x8069CE4C
    r7 = *(0x98 + r7); // lwz @ 0x8069CE50
    r9 = *(0x1758 + r9); // lwz @ 0x8069CE54
    *(0x3c8 + r7) = r9; // stw @ 0x8069CE58
    r7 = *(0 + r10); // lwz @ 0x8069CE5C
    r8 = *(0 + r8); // lwz @ 0x8069CE60
    r7 = *(0x98 + r7); // lwz @ 0x8069CE64
    r8 = *(0x36 + r8); // lha @ 0x8069CE68
    *(0x3cc + r7) = r8; // stw @ 0x8069CE6C
    r6 = *(0 + r6); // lwz @ 0x8069CE70
    *(0xd18 + r6) = r0; // stw @ 0x8069CE74
    r12 = *(0 + r31); // lwz @ 0x8069CE78
    r12 = *(0x1c + r12); // lwz @ 0x8069CE7C
    /* mtctr r12 */ // 0x8069CE80
    /* bctrl  */ // 0x8069CE84
    r0 = *(0x24 + r1); // lwz @ 0x8069CE88
    r31 = *(0x1c + r1); // lwz @ 0x8069CE8C
    r30 = *(0x18 + r1); // lwz @ 0x8069CE90
    r29 = *(0x14 + r1); // lwz @ 0x8069CE94
    return;
}