/* Function at 0x807AE49C, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_807AE49C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x807AE4A8
    r27 = r3;
    r28 = r4;
    /* li r30, 0 */ // 0x807AE4B4
    r31 = r27;
    /* b 0x807ae4f4 */ // 0x807AE4BC
    r29 = *(0x14 + r31); // lwz @ 0x807AE4C0
    if (==) goto 0x0x807ae4ec;
    r3 = r29;
    FUN_807B200C(r3); // bl 0x807B200C
    /* clrlwi r0, r3, 0x18 */ // 0x807AE4D4
    if (!=) goto 0x0x807ae4ec;
    /* li r0, 0 */ // 0x807AE4E0
    *(0x5c + r29) = r0; // stb @ 0x807AE4E4
    /* b 0x807ae500 */ // 0x807AE4E8
    r31 = r31 + 4; // 0x807AE4EC
    r30 = r30 + 1; // 0x807AE4F0
    r0 = *(0x24 + r27); // lwz @ 0x807AE4F4
    if (<) goto 0x0x807ae4c0;
    r0 = *(0x24 + r1); // lwz @ 0x807AE504
    return;
}