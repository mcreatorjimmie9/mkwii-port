/* Function at 0x80702C10, size=248 bytes */
/* Stack frame: 480 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80702C10(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -480(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r4 = r4 + -4; // 0x80702C18
    /* li r0, 0x38 */ // 0x80702C20
    *(0x1d8 + r1) = r30; // stw @ 0x80702C28
    *(0x1d4 + r1) = r29; // stw @ 0x80702C2C
    r29 = r6;
    *(0x1d0 + r1) = r28; // stw @ 0x80702C34
    r28 = r5;
    /* mtctr r0 */ // 0x80702C40
    r3 = *(4 + r4); // lwz @ 0x80702C44
    r0 = *(8 + r4); // lwzu @ 0x80702C48
    *(4 + r5) = r3; // stw @ 0x80702C4C
    *(8 + r5) = r0; // stwu @ 0x80702C50
    if (counter-- != 0) goto 0x0x80702c44;
    r0 = *(0xec + r1); // lwz @ 0x80702C58
    /* lis r3, 0 */ // 0x80702C5C
    r3 = *(0 + r3); // lwz @ 0x80702C60
    /* li r31, 0 */ // 0x80702C64
    /* addis r30, r3, 2 */ // 0x80702C6C
    if (==) goto 0x0x80702c94;
    r0 = *(0xf0 + r1); // lwz @ 0x80702C74
    if (==) goto 0x0x80702c94;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80702c94;
    /* li r31, 1 */ // 0x80702C90
    if (==) goto 0x0x80702cfc;
    r0 = *(0xc + r1); // lwz @ 0x80702C9C
    /* li r31, 0 */ // 0x80702CA0
    if (==) goto 0x0x80702ccc;
    r0 = *(0x10 + r1); // lwz @ 0x80702CAC
    if (==) goto 0x0x80702ccc;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80702ccc;
    /* li r31, 1 */ // 0x80702CC8
    if (==) goto 0x0x80702cfc;
    *(0x1ac + r1) = r29; // stb @ 0x80702CD4
    r5 = r28;
    /* li r6, 0 */ // 0x80702CE0
    *(0xcc + r1) = r29; // stb @ 0x80702CE4
    r3 = *(0x4ffc + r30); // lwz @ 0x80702CE8
    /* addis r3, r3, 2 */ // 0x80702CEC
    r3 = r3 + 0x3308; // 0x80702CF0
    FUN_805D77BC(r6, r3); // bl 0x805D77BC
    /* b 0x80702d00 */ // 0x80702CF8
    /* li r3, 0 */ // 0x80702CFC
    r0 = *(0x1e4 + r1); // lwz @ 0x80702D00
    r31 = *(0x1dc + r1); // lwz @ 0x80702D04
}