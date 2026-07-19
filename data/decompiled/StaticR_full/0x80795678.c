/* Function at 0x80795678, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_80795678(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x80795688
    *(0x14 + r1) = r29; // stw @ 0x80795690
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80795698
    r28 = r3;
    r30 = r28;
    r3 = *(0x80 + r30); // lwz @ 0x807956A4
    if (==) goto 0x0x807956b8;
    r4 = r29;
    FUN_805E3430(r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x807956B8
    r30 = r30 + 4; // 0x807956BC
    if (<) goto 0x0x807956a4;
    r3 = *(0xbc + r28); // lwz @ 0x807956C8
    if (==) goto 0x0x807956dc;
    r4 = r29;
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0xc0 + r28); // lwz @ 0x807956DC
    if (==) goto 0x0x807956f0;
    r4 = r29;
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0xc4 + r28); // lwz @ 0x807956F0
    if (==) goto 0x0x80795704;
    r4 = r29;
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0xc8 + r28); // lwz @ 0x80795704
    if (==) goto 0x0x80795718;
    r4 = r29;
    FUN_805E3430(r4); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x80795718
    r31 = *(0x1c + r1); // lwz @ 0x8079571C
    r30 = *(0x18 + r1); // lwz @ 0x80795720
    r29 = *(0x14 + r1); // lwz @ 0x80795724
    r28 = *(0x10 + r1); // lwz @ 0x80795728
    return;
}