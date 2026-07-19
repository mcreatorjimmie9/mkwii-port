/* Function at 0x807892EC, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807892EC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80789300
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80789308
    r29 = r3;
    if (==) goto 0x0x80789370;
    if (==) goto 0x0x80789360;
    /* lis r5, 0 */ // 0x80789318
    /* lis r4, 0 */ // 0x8078931C
    r5 = r5 + 0; // 0x80789320
    *(0 + r3) = r5; // stw @ 0x80789324
    r31 = *(0 + r4); // lwz @ 0x80789328
    if (==) goto 0x0x80789354;
    /* li r0, 0 */ // 0x80789334
    *(0 + r4) = r0; // stw @ 0x80789338
    if (==) goto 0x0x80789354;
    r3 = r31;
    /* li r4, -1 */ // 0x80789344
    FUN_80789064(r3, r4); // bl 0x80789064
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x80789358
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80789370;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80789370
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x80789378
    r29 = *(0x14 + r1); // lwz @ 0x8078937C
    r0 = *(0x24 + r1); // lwz @ 0x80789380
    return;
}