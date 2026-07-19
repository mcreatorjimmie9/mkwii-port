/* Function at 0x8079BEB4, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 11 function(s) */

int FUN_8079BEB4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8079BECC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8079BED4
    r28 = r3;
    if (==) goto 0x0x8079bfe0;
    /* lis r5, 0 */ // 0x8079BEE0
    /* lis r4, 0 */ // 0x8079BEE4
    r5 = r5 + 0; // 0x8079BEE8
    *(0 + r3) = r5; // stw @ 0x8079BEEC
    r31 = *(0 + r4); // lwz @ 0x8079BEF0
    if (==) goto 0x0x8079bfc4;
    /* li r0, 0 */ // 0x8079BEFC
    *(0 + r4) = r0; // stw @ 0x8079BF00
    if (==) goto 0x0x8079bfc4;
    /* addic. r3, r31, 0x1c */ // 0x8079BF08
    if (==) goto 0x0x8079bf14;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r31, 0x18 */ // 0x8079BF14
    if (==) goto 0x0x8079bf20;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x8079bfbc;
    /* lis r4, 0 */ // 0x8079BF28
    /* lis r3, 0 */ // 0x8079BF2C
    r4 = r4 + 0; // 0x8079BF30
    *(0 + r31) = r4; // stw @ 0x8079BF34
    r30 = *(0 + r3); // lwz @ 0x8079BF38
    if (==) goto 0x0x8079bfb0;
    /* li r0, 0 */ // 0x8079BF44
    *(0 + r3) = r0; // stw @ 0x8079BF48
    if (==) goto 0x0x8079bfb0;
    /* addic. r3, r30, 0x1c */ // 0x8079BF50
    if (==) goto 0x0x8079bf5c;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r30, 0x18 */ // 0x8079BF5C
    if (==) goto 0x0x8079bf68;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x8079bfa8;
    /* lis r3, 0 */ // 0x8079BF70
    /* lis r4, 0 */ // 0x8079BF74
    r3 = r3 + 0; // 0x8079BF78
    *(0 + r30) = r3; // stw @ 0x8079BF7C
    r3 = *(0 + r4); // lwz @ 0x8079BF80
    if (==) goto 0x0x8079bf9c;
    /* li r0, 0 */ // 0x8079BF8C
    *(0 + r4) = r0; // stw @ 0x8079BF90
    /* li r4, 1 */ // 0x8079BF94
    FUN_8079C1BC(r4); // bl 0x8079C1BC
    r3 = r30;
    /* li r4, 0 */ // 0x8079BFA0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x8079BFB4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r28;
    /* li r4, 0 */ // 0x8079BFC8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8079bfe0;
    r3 = r28;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8079BFE0
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x8079BFE8
    r29 = *(0x14 + r1); // lwz @ 0x8079BFEC
    r28 = *(0x10 + r1); // lwz @ 0x8079BFF0
}