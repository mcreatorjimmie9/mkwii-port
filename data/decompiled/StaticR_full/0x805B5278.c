/* Function at 0x805B5278, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_805B5278(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* addic. r0, r3, 4 */ // 0x805B5284
    *(0xc + r1) = r31; // stw @ 0x805B5288
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B5290
    r30 = r3;
    if (!=) goto 0x0x805b52b8;
    /* lis r3, 0 */ // 0x805B529C
    /* lis r5, 0 */ // 0x805B52A0
    r3 = r3 + 0; // 0x805B52A4
    /* li r4, 0xcf */ // 0x805B52A8
    r5 = r5 + 0; // 0x805B52AC
    /* crclr cr1eq */ // 0x805B52B0
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r0 = *(0xc + r30); // lhz @ 0x805B52B8
    if (==) goto 0x0x805b52e8;
    r0 = *(0x1c + r31); // lbz @ 0x805B52C4
    r4 = r31;
    r3 = r30 + 4; // 0x805B52CC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1c + r31) = r0; // stb @ 0x805B52D4
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r4 = r31;
    r3 = r30 + 0x10; // 0x805B52E0
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* addic. r0, r30, 4 */ // 0x805B52E8
    if (!=) goto 0x0x805b530c;
    /* lis r3, 0 */ // 0x805B52F0
    /* lis r5, 0 */ // 0x805B52F4
    r3 = r3 + 0; // 0x805B52F8
    /* li r4, 0xcf */ // 0x805B52FC
    r5 = r5 + 0; // 0x805B5300
    /* crclr cr1eq */ // 0x805B5304
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r0 = *(0xc + r30); // lhz @ 0x805B530C
    if (!=) goto 0x0x805b5320;
    r3 = *(0x1c + r30); // lwz @ 0x805B5318
    FUN_805B1CBC(); // bl 0x805B1CBC
    r0 = *(0x14 + r1); // lwz @ 0x805B5320
    r31 = *(0xc + r1); // lwz @ 0x805B5324
    r30 = *(8 + r1); // lwz @ 0x805B5328
}