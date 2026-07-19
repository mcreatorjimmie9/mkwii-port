/* Function at 0x807CE360, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807CE360(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807CE368
    /* lis r5, 0 */ // 0x807CE36C
    *(0x14 + r1) = r0; // stw @ 0x807CE370
    /* lfs f1, 0(r6) */ // 0x807CE374
    *(0xc + r1) = r31; // stw @ 0x807CE378
    r31 = r3;
    /* lfs f2, 0(r5) */ // 0x807CE380
    r4 = *(8 + r3); // lwz @ 0x807CE384
    r3 = *(0x28 + r4); // lwz @ 0x807CE388
    /* li r4, 3 */ // 0x807CE38C
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* li r0, 0 */ // 0x807CE394
    *(0x340 + r31) = r0; // stw @ 0x807CE398
    r31 = *(0xc + r1); // lwz @ 0x807CE39C
    r0 = *(0x14 + r1); // lwz @ 0x807CE3A0
    return;
}