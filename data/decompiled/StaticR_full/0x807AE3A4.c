/* Function at 0x807AE3A4, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_807AE3A4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x807AE3B0
    r27 = r3;
    r28 = r4;
    /* li r30, 0 */ // 0x807AE3BC
    r31 = r27;
    /* b 0x807ae3fc */ // 0x807AE3C4
    r29 = *(0x14 + r31); // lwz @ 0x807AE3C8
    if (==) goto 0x0x807ae3f4;
    r3 = r29;
    FUN_807B200C(r3); // bl 0x807B200C
    /* clrlwi r0, r3, 0x18 */ // 0x807AE3DC
    if (!=) goto 0x0x807ae3f4;
    r3 = r29;
    FUN_807B2014(r3); // bl 0x807B2014
    /* b 0x807ae408 */ // 0x807AE3F0
    r31 = r31 + 4; // 0x807AE3F4
    r30 = r30 + 1; // 0x807AE3F8
    r0 = *(0x24 + r27); // lwz @ 0x807AE3FC
    if (<) goto 0x0x807ae3c8;
    r0 = *(0x24 + r1); // lwz @ 0x807AE40C
    return;
}