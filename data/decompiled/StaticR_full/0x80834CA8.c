/* Function at 0x80834CA8, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_80834CA8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x80834CC0
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80834CC8
    r28 = r3;
    if (==) goto 0x0x80834d40;
    /* addic. r0, r3, 0x2b0 */ // 0x80834CD4
    if (==) goto 0x0x80834cf0;
    /* lis r4, 0 */ // 0x80834CDC
    r4 = r4 + 0; // 0x80834CE0
    *(0x2b0 + r3) = r4; // stw @ 0x80834CE4
    r3 = *(0x2c4 + r3); // lwz @ 0x80834CE8
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (==) goto 0x0x80834d30;
    if (==) goto 0x0x80834d30;
    /* addic. r30, r28, 0x1ec */ // 0x80834CFC
    if (==) goto 0x0x80834d30;
    /* lis r31, 0 */ // 0x80834D04
    r3 = r30 + 0x30; // 0x80834D08
    r4 = r31 + 0; // 0x80834D0C
    /* li r5, 0xc */ // 0x80834D10
    /* li r6, 4 */ // 0x80834D14
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    r4 = r31 + 0; // 0x80834D20
    /* li r5, 0xc */ // 0x80834D24
    /* li r6, 4 */ // 0x80834D28
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x80834d40;
    r3 = r28;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80834D40
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x80834D48
    r29 = *(0x14 + r1); // lwz @ 0x80834D4C
}