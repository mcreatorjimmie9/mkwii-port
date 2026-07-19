/* Function at 0x807AB344, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807AB344(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807AB358
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807AB360
    r29 = r3;
    if (==) goto 0x0x807ab3c8;
    if (==) goto 0x0x807ab3b8;
    /* lis r5, 0 */ // 0x807AB370
    /* lis r4, 0 */ // 0x807AB374
    r5 = r5 + 0; // 0x807AB378
    *(0 + r3) = r5; // stw @ 0x807AB37C
    r31 = *(0 + r4); // lwz @ 0x807AB380
    if (==) goto 0x0x807ab3ac;
    /* li r0, 0 */ // 0x807AB38C
    *(0 + r4) = r0; // stw @ 0x807AB390
    if (==) goto 0x0x807ab3ac;
    r3 = r31;
    /* li r4, -1 */ // 0x807AB39C
    FUN_807AB028(r3, r4); // bl 0x807AB028
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807AB3B0
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807ab3c8;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x807AB3C8
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807AB3D0
    r29 = *(0x14 + r1); // lwz @ 0x807AB3D4
    r0 = *(0x24 + r1); // lwz @ 0x807AB3D8
    return;
}