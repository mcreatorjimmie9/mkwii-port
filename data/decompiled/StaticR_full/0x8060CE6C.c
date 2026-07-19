/* Function at 0x8060CE6C, size=376 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_8060CE6C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0x80c */ // 0x8060CE74
    /* li r5, 1 */ // 0x8060CE78
    *(0x14 + r1) = r0; // stw @ 0x8060CE7C
    r0 = r4 + 0x100; // 0x8060CE80
    /* li r6, 1 */ // 0x8060CE84
    /* li r7, 1 */ // 0x8060CE88
    *(0xc + r1) = r31; // stw @ 0x8060CE8C
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8060CE94
    r8 = *(0 + r3); // lwz @ 0x8060CE98
    r9 = *(4 + r8); // lwz @ 0x8060CE9C
    r4 = *(0xc + r9); // lwz @ 0x8060CEA0
    /* and. r0, r4, r0 */ // 0x8060CEA4
    if (!=) goto 0x0x8060cebc;
    r0 = *(4 + r9); // lwz @ 0x8060CEAC
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060CEB0
    if (!=) goto 0x0x8060cebc;
    /* li r7, 0 */ // 0x8060CEB8
    if (!=) goto 0x0x8060ced4;
    r0 = *(0x14 + r9); // lwz @ 0x8060CEC4
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060CEC8
    if (!=) goto 0x0x8060ced4;
    /* li r6, 0 */ // 0x8060CED0
    if (!=) goto 0x0x8060ceec;
    r0 = *(8 + r9); // lwz @ 0x8060CEDC
    /* clrlwi. r0, r0, 0x1f */ // 0x8060CEE0
    if (!=) goto 0x0x8060ceec;
    /* li r5, 0 */ // 0x8060CEE8
    if (!=) goto 0x0x8060cfcc;
    r5 = *(4 + r8); // lwz @ 0x8060CEF4
    /* lis r4, 0 */ // 0x8060CEF8
    r0 = *(4 + r5); // lwz @ 0x8060CEFC
    r0 = r0 | 0x8000; // 0x8060CF00
    *(4 + r5) = r0; // stw @ 0x8060CF04
    r4 = *(0 + r4); // lha @ 0x8060CF08
    r0 = *(0x148 + r3); // lha @ 0x8060CF0C
    *(0x1c4 + r3) = r4; // sth @ 0x8060CF10
    if (<=) goto 0x0x8060cf20;
    *(0x148 + r3) = r4; // sth @ 0x8060CF1C
    r4 = *(0 + r3); // lwz @ 0x8060CF20
    r3 = r31;
    r4 = *(4 + r4); // lwz @ 0x8060CF28
    r0 = *(8 + r4); // lwz @ 0x8060CF2C
    r0 = r0 | 0x80; // 0x8060CF30
    *(8 + r4) = r0; // stw @ 0x8060CF34
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_80796444(); // bl 0x80796444
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r30, 0 */ // 0x8060CF48
    /* lis r4, 0 */ // 0x8060CF4C
    r5 = *(0 + r30); // lwz @ 0x8060CF50
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lhz @ 0x8060CF58
    r3 = *(0x68 + r5); // lwz @ 0x8060CF5C
    /* lwzx r3, r3, r0 */ // 0x8060CF60
    FUN_807336DC(); // bl 0x807336DC
    /* lis r4, 0 */ // 0x8060CF68
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8060CF70
    /* li r4, 4 */ // 0x8060CF74
    /* li r5, 1 */ // 0x8060CF78
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r4 = *(0 + r31); // lwz @ 0x8060CF80
    r3 = *(4 + r4); // lwz @ 0x8060CF84
    r0 = *(0xc + r3); // lwz @ 0x8060CF88
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x8060CF8C
    if (==) goto 0x0x8060cfcc;
    r5 = *(4 + r4); // lwz @ 0x8060CF94
    /* li r0, 0 */ // 0x8060CF98
    r3 = r31;
    r4 = *(0xc + r5); // lwz @ 0x8060CFA0
    r4 = r4 rlwinm 0; // rlwinm
    *(0xc + r5) = r4; // stw @ 0x8060CFA8
    *(0x18e + r31) = r0; // sth @ 0x8060CFAC
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    r4 = *(0 + r30); // lwz @ 0x8060CFB4
    r0 = r3 rlwinm 2; // rlwinm
    /* li r5, 1 */ // 0x8060CFBC
    r3 = *(0x68 + r4); // lwz @ 0x8060CFC0
    /* lwzx r3, r3, r0 */ // 0x8060CFC4
    *(0x10d + r3) = r5; // stb @ 0x8060CFC8
    r0 = *(0x14 + r1); // lwz @ 0x8060CFCC
    r31 = *(0xc + r1); // lwz @ 0x8060CFD0
    r30 = *(8 + r1); // lwz @ 0x8060CFD4
    return;
}