/* Function at 0x80837DB4, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_80837DB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x80837DCC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80837DD4
    r28 = r3;
    if (==) goto 0x0x80837e4c;
    /* addic. r0, r3, 0x2bc */ // 0x80837DE0
    if (==) goto 0x0x80837dfc;
    /* lis r4, 0 */ // 0x80837DE8
    r4 = r4 + 0; // 0x80837DEC
    *(0x2bc + r3) = r4; // stw @ 0x80837DF0
    r3 = *(0x2d0 + r3); // lwz @ 0x80837DF4
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (==) goto 0x0x80837e3c;
    if (==) goto 0x0x80837e3c;
    /* addic. r30, r28, 0x1ec */ // 0x80837E08
    if (==) goto 0x0x80837e3c;
    /* lis r31, 0 */ // 0x80837E10
    r3 = r30 + 0x30; // 0x80837E14
    r4 = r31 + 0; // 0x80837E18
    /* li r5, 0xc */ // 0x80837E1C
    /* li r6, 4 */ // 0x80837E20
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    r4 = r31 + 0; // 0x80837E2C
    /* li r5, 0xc */ // 0x80837E30
    /* li r6, 4 */ // 0x80837E34
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x80837e4c;
    r3 = r28;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80837E4C
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x80837E54
    r29 = *(0x14 + r1); // lwz @ 0x80837E58
}