/* Function at 0x80683CA0, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80683CA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80683CB0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80683CB8
    r30 = r3;
    if (==) goto 0x0x80683cfc;
    /* addic. r0, r3, 0x18 */ // 0x80683CC4
    if (==) goto 0x0x80683cec;
    /* addic. r3, r0, 0xc */ // 0x80683CCC
    if (==) goto 0x0x80683cec;
    /* lis r4, 0 */ // 0x80683CD4
    r3 = r3 + 0x68; // 0x80683CD8
    r4 = r4 + 0; // 0x80683CDC
    /* li r5, 0xc */ // 0x80683CE0
    /* li r6, 5 */ // 0x80683CE4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x80683cfc;
    r3 = r30;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80683D00
    r30 = *(8 + r1); // lwz @ 0x80683D04
    r0 = *(0x14 + r1); // lwz @ 0x80683D08
    return;
}