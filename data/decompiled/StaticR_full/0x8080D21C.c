/* Function at 0x8080D21C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8080D21C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8080D22C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8080D234
    r30 = r3;
    if (==) goto 0x0x8080d2b4;
    /* addic. r0, r3, 0xdc */ // 0x8080D240
    if (==) goto 0x0x8080d270;
    r0 = *(0xe4 + r3); // lwz @ 0x8080D248
    /* lis r4, 0 */ // 0x8080D24C
    r4 = r4 + 0; // 0x8080D250
    *(0xdc + r3) = r4; // stw @ 0x8080D254
    if (==) goto 0x0x8080d270;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x8080D268
    *(0xe4 + r30) = r0; // stw @ 0x8080D26C
    /* addic. r0, r30, 0xc4 */ // 0x8080D270
    if (==) goto 0x0x8080d2a4;
    r3 = *(0xcc + r30); // lwz @ 0x8080D278
    /* lis r4, 0 */ // 0x8080D27C
    r4 = r4 + 0; // 0x8080D280
    *(0xc4 + r30) = r4; // stw @ 0x8080D284
    if (==) goto 0x0x8080d2a4;
    /* lis r4, 0 */ // 0x8080D290
    r4 = r4 + 0; // 0x8080D294
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x8080D29C
    *(0xcc + r30) = r0; // stw @ 0x8080D2A0
    if (<=) goto 0x0x8080d2b4;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8080D2B8
    r30 = *(8 + r1); // lwz @ 0x8080D2BC
}