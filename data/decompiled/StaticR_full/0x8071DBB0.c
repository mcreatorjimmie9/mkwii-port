/* Function at 0x8071DBB0, size=1060 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_8071DBB0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x8071DBB8
    r5 = r5 + 0; // 0x8071DBC0
    *(0x48 + r1) = r30; // stw @ 0x8071DBC8
    *(0x44 + r1) = r29; // stw @ 0x8071DBCC
    r29 = r4;
    *(0x40 + r1) = r28; // stw @ 0x8071DBD4
    r28 = r3;
    *(0 + r3) = r5; // stw @ 0x8071DBDC
    r3 = r29;
    FUN_8061E28C(r3); // bl 0x8061E28C
    r0 = r3 + -2; // 0x8071DBE8
    r3 = r29;
    /* cntlzw r0, r0 */ // 0x8071DBF0
    /* srwi r0, r0, 5 */ // 0x8071DBF4
    *(0xd + r28) = r0; // stb @ 0x8071DBF8
    r4 = *(0 + r29); // lwz @ 0x8071DBFC
    r4 = *(4 + r4); // lwz @ 0x8071DC00
    r0 = *(0x14 + r4); // lwz @ 0x8071DC04
    r0 = r0 rlwinm 0x1c; // rlwinm
    *(0xe + r28) = r0; // stb @ 0x8071DC0C
    *(0x118 + r28) = r29; // stw @ 0x8071DC10
    FUN_8061E2F8(); // bl 0x8061E2F8
    *(0x11c + r28) = r3; // stw @ 0x8071DC18
    r3 = r29;
    r4 = *(0 + r29); // lwz @ 0x8071DC20
    r4 = *(0 + r4); // lwz @ 0x8071DC24
    r0 = *(8 + r4); // lwz @ 0x8071DC28
    *(0x120 + r28) = r0; // stw @ 0x8071DC2C
    FUN_8061E2E8(r3); // bl 0x8061E2E8
    *(0x124 + r28) = r3; // stw @ 0x8071DC34
    r3 = r29;
    FUN_8061E2A4(r3); // bl 0x8061E2A4
    r0 = r3 + -3; // 0x8071DC40
    r3 = r29;
    /* cntlzw r0, r0 */ // 0x8071DC48
    /* srwi r0, r0, 5 */ // 0x8071DC4C
    *(0x128 + r28) = r0; // stb @ 0x8071DC50
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    *(0x12e + r28) = r3; // stb @ 0x8071DC58
    /* lis r4, 0 */ // 0x8071DC5C
    /* li r5, 1 */ // 0x8071DC60
    /* li r6, 1 */ // 0x8071DC64
    r3 = *(0 + r4); // lwz @ 0x8071DC68
    r3 = *(0xb74 + r3); // lwz @ 0x8071DC6C
    r0 = r3 + -5; // 0x8071DC70
    /* cntlzw r0, r0 */ // 0x8071DC74
    /* srwi r0, r0, 5 */ // 0x8071DC78
    *(0x138 + r28) = r0; // stb @ 0x8071DC7C
    r3 = *(0 + r4); // lwz @ 0x8071DC80
    r3 = *(0xb74 + r3); // lwz @ 0x8071DC84
    r0 = r3 + -1; // 0x8071DC88
    /* cntlzw r0, r0 */ // 0x8071DC8C
    /* srwi r0, r0, 5 */ // 0x8071DC90
    *(0x139 + r28) = r0; // stb @ 0x8071DC94
    r3 = *(0 + r4); // lwz @ 0x8071DC98
    r0 = *(0xb74 + r3); // lwz @ 0x8071DC9C
    if (==) goto 0x0x8071dcb4;
    if (==) goto 0x0x8071dcb4;
    /* li r6, 0 */ // 0x8071DCB0
    if (!=) goto 0x0x8071dcc8;
    if (==) goto 0x0x8071dcc8;
    /* li r5, 0 */ // 0x8071DCC4
    *(0x13a + r28) = r5; // stb @ 0x8071DCC8
    /* lis r31, 0 */ // 0x8071DCCC
    r3 = *(0 + r31); // lwz @ 0x8071DCD0
    r3 = *(0xb74 + r3); // lwz @ 0x8071DCD4
    r0 = r3 + -6; // 0x8071DCD8
    /* cntlzw r0, r0 */ // 0x8071DCDC
    /* srwi r0, r0, 5 */ // 0x8071DCE0
    *(0x13b + r28) = r0; // stb @ 0x8071DCE4
    r3 = *(0 + r31); // lwz @ 0x8071DCE8
    r0 = *(0xb90 + r3); // lwz @ 0x8071DCEC
    r0 = r0 rlwinm 0x1e; // rlwinm
    *(0x13c + r28) = r0; // stb @ 0x8071DCF4
    r3 = *(0 + r31); // lwz @ 0x8071DCF8
    r3 = *(0xb70 + r3); // lwz @ 0x8071DCFC
    r0 = r3 + -1; // 0x8071DD00
    /* cntlzw r0, r0 */ // 0x8071DD04
    /* srwi r0, r0, 5 */ // 0x8071DD08
    *(0x13d + r28) = r0; // stb @ 0x8071DD0C
    r3 = *(0 + r31); // lwz @ 0x8071DD10
    r3 = *(0xb68 + r3); // lwz @ 0x8071DD14
    r0 = r3 + -6; // 0x8071DD18
    /* cntlzw r0, r0 */ // 0x8071DD1C
    /* srwi r0, r0, 5 */ // 0x8071DD20
    *(0x13e + r28) = r0; // stb @ 0x8071DD24
    r3 = *(0 + r31); // lwz @ 0x8071DD28
    r3 = *(0xb68 + r3); // lwz @ 0x8071DD2C
    r0 = r3 + -3; // 0x8071DD30
    /* cntlzw r0, r0 */ // 0x8071DD34
    /* srwi r0, r0, 5 */ // 0x8071DD38
    *(0x13f + r28) = r0; // stb @ 0x8071DD3C
    r3 = *(0 + r31); // lwz @ 0x8071DD40
    r3 = *(0xb68 + r3); // lwz @ 0x8071DD44
    r0 = r3 + -0xb; // 0x8071DD48
    /* cntlzw r0, r0 */ // 0x8071DD4C
    /* srwi r0, r0, 5 */ // 0x8071DD50
    *(0x140 + r28) = r0; // stb @ 0x8071DD54
    r3 = *(0 + r31); // lwz @ 0x8071DD58
    r3 = *(0xb68 + r3); // lwz @ 0x8071DD5C
    r0 = r3 + -2; // 0x8071DD60
    /* cntlzw r0, r0 */ // 0x8071DD64
    /* srwi r0, r0, 5 */ // 0x8071DD68
    *(0x141 + r28) = r0; // stb @ 0x8071DD6C
    r3 = *(0 + r31); // lwz @ 0x8071DD70
    r3 = *(0xb68 + r3); // lwz @ 0x8071DD74
    r0 = r3 + -0xe; // 0x8071DD78
    /* cntlzw r0, r0 */ // 0x8071DD7C
    /* srwi r0, r0, 5 */ // 0x8071DD80
    *(0x142 + r28) = r0; // stb @ 0x8071DD84
    r3 = *(0 + r31); // lwz @ 0x8071DD88
    r3 = *(0xb68 + r3); // lwz @ 0x8071DD8C
    r0 = r3 + -0x13; // 0x8071DD90
    /* cntlzw r0, r0 */ // 0x8071DD94
    /* srwi r0, r0, 5 */ // 0x8071DD98
    *(0x143 + r28) = r0; // stb @ 0x8071DD9C
    r3 = *(0 + r31); // lwz @ 0x8071DDA0
    r3 = *(0xb68 + r3); // lwz @ 0x8071DDA4
    r0 = r3 + -9; // 0x8071DDA8
    /* cntlzw r0, r0 */ // 0x8071DDAC
    /* srwi r0, r0, 5 */ // 0x8071DDB0
    *(0x144 + r28) = r0; // stb @ 0x8071DDB4
    r3 = *(0 + r31); // lwz @ 0x8071DDB8
    r3 = *(0xb68 + r3); // lwz @ 0x8071DDBC
    r0 = r3 + -5; // 0x8071DDC0
    /* cntlzw r0, r0 */ // 0x8071DDC4
    /* srwi r0, r0, 5 */ // 0x8071DDC8
    *(0x145 + r28) = r0; // stb @ 0x8071DDCC
    r3 = *(0 + r31); // lwz @ 0x8071DDD0
    r3 = *(0xb68 + r3); // lwz @ 0x8071DDD4
    r0 = r3 + -4; // 0x8071DDD8
    /* cntlzw r0, r0 */ // 0x8071DDDC
    /* srwi r0, r0, 5 */ // 0x8071DDE0
    *(0x146 + r28) = r0; // stb @ 0x8071DDE4
    r3 = *(0 + r31); // lwz @ 0x8071DDE8
    r3 = *(0xb68 + r3); // lwz @ 0x8071DDEC
    r0 = r3 + -0x1c; // 0x8071DDF0
    /* cntlzw r0, r0 */ // 0x8071DDF4
    /* srwi r0, r0, 5 */ // 0x8071DDF8
    *(0x147 + r28) = r0; // stb @ 0x8071DDFC
    r4 = *(0 + r31); // lwz @ 0x8071DE00
    /* lis r5, 0 */ // 0x8071DE04
    /* lis r3, 0 */ // 0x8071DE08
    /* li r30, 0 */ // 0x8071DE0C
    r4 = *(0xb68 + r4); // lwz @ 0x8071DE10
    r0 = r4 + -0x1e; // 0x8071DE14
    /* cntlzw r0, r0 */ // 0x8071DE18
    /* srwi r0, r0, 5 */ // 0x8071DE1C
    *(0x148 + r28) = r0; // stb @ 0x8071DE20
    r4 = *(0 + r31); // lwz @ 0x8071DE24
    r4 = *(0xb68 + r4); // lwz @ 0x8071DE28
    r0 = r4 + -0x1d; // 0x8071DE2C
    /* cntlzw r0, r0 */ // 0x8071DE30
    /* srwi r0, r0, 5 */ // 0x8071DE34
    *(0x149 + r28) = r0; // stb @ 0x8071DE38
    r4 = *(0 + r31); // lwz @ 0x8071DE3C
    r4 = *(0xb68 + r4); // lwz @ 0x8071DE40
    r0 = r4 + -0x20; // 0x8071DE44
    /* cntlzw r0, r0 */ // 0x8071DE48
    /* srwi r0, r0, 5 */ // 0x8071DE4C
    *(0x14a + r28) = r0; // stb @ 0x8071DE50
    r4 = *(0 + r31); // lwz @ 0x8071DE54
    r4 = *(0xb68 + r4); // lwz @ 0x8071DE58
    r0 = r4 + -0x36; // 0x8071DE5C
    /* cntlzw r0, r0 */ // 0x8071DE60
    /* srwi r0, r0, 5 */ // 0x8071DE64
    *(0x14b + r28) = r0; // stb @ 0x8071DE68
    r4 = *(0 + r5); // lwz @ 0x8071DE6C
    r0 = *(0x14 + r4); // lbz @ 0x8071DE70
    *(0x14c + r28) = r0; // stb @ 0x8071DE74
    r4 = *(0 + r5); // lwz @ 0x8071DE78
    r0 = *(0x15 + r4); // lbz @ 0x8071DE7C
    *(0x14d + r28) = r0; // stb @ 0x8071DE80
    r4 = *(0 + r5); // lwz @ 0x8071DE84
    r0 = *(0x16 + r4); // lbz @ 0x8071DE88
    *(0x14e + r28) = r0; // stb @ 0x8071DE8C
    r4 = *(0 + r5); // lwz @ 0x8071DE90
    r0 = *(0x17 + r4); // lbz @ 0x8071DE94
    *(0x14f + r28) = r0; // stb @ 0x8071DE98
    r3 = *(0 + r3); // lwz @ 0x8071DE9C
    r3 = *(0x50 + r3); // lwz @ 0x8071DEA0
    /* neg r0, r3 */ // 0x8071DEA4
    r0 = r0 | r3; // 0x8071DEA8
    /* srwi r0, r0, 0x1f */ // 0x8071DEAC
    *(0x150 + r28) = r0; // stb @ 0x8071DEB0
    r3 = *(0 + r31); // lwz @ 0x8071DEB4
    r3 = *(0xb68 + r3); // lwz @ 0x8071DEB8
    r0 = r3 + -0x1b; // 0x8071DEBC
    /* cntlzw r0, r0 */ // 0x8071DEC0
    /* srwi r0, r0, 5 */ // 0x8071DEC4
    *(0x151 + r28) = r0; // stb @ 0x8071DEC8
    r3 = *(0 + r5); // lwz @ 0x8071DECC
    r0 = *(0x18 + r3); // lbz @ 0x8071DED0
    *(0x152 + r28) = r0; // stb @ 0x8071DED4
    r3 = *(0 + r5); // lwz @ 0x8071DED8
    r0 = *(0x19 + r3); // lbz @ 0x8071DEDC
    *(0x153 + r28) = r0; // stb @ 0x8071DEE0
    r3 = *(0 + r31); // lwz @ 0x8071DEE4
    r0 = *(0xb90 + r3); // lwz @ 0x8071DEE8
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8071DEEC
    if (==) goto 0x0x8071df1c;
    r3 = r29;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x8071DEFC
    r3 = *(0 + r31); // lwz @ 0x8071DF00
    /* mulli r0, r0, 0xf0 */ // 0x8071DF04
    r3 = r3 + r0; // 0x8071DF08
    r0 = *(0xf4 + r3); // lwz @ 0x8071DF0C
    if (!=) goto 0x0x8071df1c;
    /* li r30, 1 */ // 0x8071DF18
    *(0x154 + r28) = r30; // stb @ 0x8071DF1C
    /* lis r30, 0 */ // 0x8071DF20
    /* li r31, 0 */ // 0x8071DF24
    r3 = *(0 + r30); // lwz @ 0x8071DF28
    r0 = *(0xb90 + r3); // lwz @ 0x8071DF2C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8071DF30
    if (==) goto 0x0x8071df60;
    r3 = r29;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x8071DF40
    r3 = *(0 + r30); // lwz @ 0x8071DF44
    /* mulli r0, r0, 0xf0 */ // 0x8071DF48
    r3 = r3 + r0; // 0x8071DF4C
    r0 = *(0xf4 + r3); // lwz @ 0x8071DF50
    if (!=) goto 0x0x8071df60;
    /* li r31, 1 */ // 0x8071DF5C
    *(0x155 + r28) = r31; // stb @ 0x8071DF60
    /* lis r3, 0 */ // 0x8071DF64
    /* li r0, 1 */ // 0x8071DF68
    /* li r4, 1 */ // 0x8071DF6C
    r3 = *(0 + r3); // lwz @ 0x8071DF70
    r3 = *(0xb70 + r3); // lwz @ 0x8071DF74
    if (==) goto 0x0x8071df8c;
    if (==) goto 0x0x8071df8c;
    /* li r4, 0 */ // 0x8071DF88
    if (!=) goto 0x0x8071dfa0;
    if (==) goto 0x0x8071dfa0;
    /* li r0, 0 */ // 0x8071DF9C
    *(0x156 + r28) = r0; // stb @ 0x8071DFA0
    /* lis r3, 0 */ // 0x8071DFA4
    /* lis r31, 0 */ // 0x8071DFA8
    /* lis r30, 0 */ // 0x8071DFAC
    r6 = *(0 + r3); // lwz @ 0x8071DFB0
    r3 = r28 + 0x194; // 0x8071DFB4
    r4 = r31 + 0; // 0x8071DFB8
    r5 = r30 + 0; // 0x8071DFBC
    r0 = *(0x1a + r6); // lbz @ 0x8071DFC0
    /* li r6, 4 */ // 0x8071DFC4
    *(0x157 + r28) = r0; // stb @ 0x8071DFC8
    /* li r7, 0x10 */ // 0x8071DFCC
    FUN_805E3430(r5, r6, r7); // bl 0x805E3430
}