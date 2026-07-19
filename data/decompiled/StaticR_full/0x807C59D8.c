/* Function at 0x807C59D8, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_807C59D8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807C59E4
    r26 = r3;
    r27 = r4;
    /* li r30, 0 */ // 0x807C59F0
    r31 = r26;
    /* li r29, 0 */ // 0x807C59F8
    /* b 0x807c5a28 */ // 0x807C59FC
    r28 = *(0xe8 + r31); // lwz @ 0x807C5A00
    r3 = r28;
    FUN_807C36A8(r3); // bl 0x807C36A8
    /* clrlwi r0, r3, 0x18 */ // 0x807C5A0C
    if (!=) goto 0x0x807c5a20;
    r30 = r28;
    /* b 0x807c5a34 */ // 0x807C5A1C
    r31 = r31 + 8; // 0x807C5A20
    r29 = r29 + 1; // 0x807C5A24
    r0 = *(0x178 + r26); // lwz @ 0x807C5A28
    if (<) goto 0x0x807c5a00;
    r3 = r30;
    r0 = *(0x24 + r1); // lwz @ 0x807C5A3C
    return;
}