/* Function at 0x80787FBC, size=344 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80787FBC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x80787FD0
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x80787FD8
    r29 = r5;
    r0 = *(0x24 + r3); // lbz @ 0x80787FE0
    if (==) goto 0x0x80787ff4;
    /* li r3, 0 */ // 0x80787FEC
    /* b 0x807880fc */ // 0x80787FF0
    if (==) goto 0x0x80788024;
    r3 = *(0x20 + r3); // lwz @ 0x80787FFC
    if (==) goto 0x0x80788024;
    r3 = *(0 + r3); // lwz @ 0x80788008
    if (==) goto 0x0x8078801c;
    /* li r4, 0 */ // 0x80788014
    FUN_805E3430(r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x8078801C
    *(0x20 + r30) = r0; // stw @ 0x80788020
    /* li r0, 2 */ // 0x80788024
    r5 = r30;
    *(0x24 + r30) = r29; // stb @ 0x8078802C
    /* li r4, 0 */ // 0x80788030
    /* li r3, 0 */ // 0x80788034
    /* mtctr r0 */ // 0x80788038
    r0 = *(0x14 + r5); // lwz @ 0x8078803C
    if (!=) goto 0x0x80788058;
    /* slwi r0, r3, 2 */ // 0x80788048
    r3 = r30 + r0; // 0x8078804C
    r4 = r3 + 0x14; // 0x80788050
    /* b 0x80788064 */ // 0x80788054
    r5 = r5 + 4; // 0x80788058
    r3 = r3 + 1; // 0x8078805C
    if (counter-- != 0) goto 0x0x8078803c;
    if (!=) goto 0x0x80788088;
    r3 = *(0x20 + r30); // lwz @ 0x8078806C
    r3 = *(0 + r3); // lwz @ 0x80788070
    if (==) goto 0x0x80788084;
    /* li r4, 0 */ // 0x8078807C
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = *(0x20 + r30); // lwz @ 0x80788084
    *(0x20 + r30) = r4; // stw @ 0x8078808C
    /* li r8, 0 */ // 0x80788090
    if (==) goto 0x0x807880a4;
    if (==) goto 0x0x807880b0;
    /* b 0x807880b8 */ // 0x807880A0
    /* lis r3, 3 */ // 0x807880A4
    r8 = r3 + 0x7955; // 0x807880A8
    /* b 0x807880b8 */ // 0x807880AC
    /* lis r3, 3 */ // 0x807880B0
    r8 = r3 + -0x3194; // 0x807880B4
    /* lis r3, 0 */ // 0x807880B8
    /* li r7, 0 */ // 0x807880BC
    /* li r4, 1 */ // 0x807880C0
    /* li r0, 2 */ // 0x807880C4
    *(0x20 + r1) = r7; // stw @ 0x807880C8
    r5 = r31;
    r3 = *(0 + r3); // lwz @ 0x807880D0
    *(0x24 + r1) = r7; // stw @ 0x807880D8
    *(8 + r1) = r4; // stw @ 0x807880DC
    *(0xc + r1) = r0; // stw @ 0x807880E0
    *(0x10 + r1) = r8; // stw @ 0x807880E4
    r3 = *(0x5bc + r3); // lwz @ 0x807880E8
    r4 = *(0x20 + r30); // lwz @ 0x807880EC
    r3 = r3 + 0xc; // 0x807880F0
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0x20 + r30); // lwz @ 0x807880F8
    r0 = *(0x44 + r1); // lwz @ 0x807880FC
    r31 = *(0x3c + r1); // lwz @ 0x80788100
    r30 = *(0x38 + r1); // lwz @ 0x80788104
    r29 = *(0x34 + r1); // lwz @ 0x80788108
}