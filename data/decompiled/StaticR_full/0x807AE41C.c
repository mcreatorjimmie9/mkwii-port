/* Function at 0x807AE41C, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_807AE41C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807AE428
    r26 = r3;
    r27 = r4;
    r28 = r5;
    /* li r30, 0 */ // 0x807AE438
    r31 = r26;
    /* b 0x807ae47c */ // 0x807AE440
    r29 = *(0x14 + r31); // lwz @ 0x807AE444
    if (==) goto 0x0x807ae474;
    r3 = r29;
    FUN_807B200C(r3); // bl 0x807B200C
    /* clrlwi r0, r3, 0x18 */ // 0x807AE458
    if (!=) goto 0x0x807ae474;
    r3 = r29;
    r4 = r28;
    FUN_807B0D00(r3, r4); // bl 0x807B0D00
    /* b 0x807ae488 */ // 0x807AE470
    r31 = r31 + 4; // 0x807AE474
    r30 = r30 + 1; // 0x807AE478
    r0 = *(0x24 + r26); // lwz @ 0x807AE47C
    if (<) goto 0x0x807ae444;
    r0 = *(0x24 + r1); // lwz @ 0x807AE48C
    return;
}