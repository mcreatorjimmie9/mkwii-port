/* Function at 0x807AE57C, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807AE57C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x807AE590
    *(0x14 + r1) = r29; // stw @ 0x807AE594
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x807AE59C
    r28 = r3;
    r31 = r28;
    /* b 0x807ae5c8 */ // 0x807AE5A8
    r3 = *(0x14 + r31); // lwz @ 0x807AE5AC
    if (==) goto 0x0x807ae5c0;
    r4 = r29;
    FUN_807B2088(r4); // bl 0x807B2088
    r31 = r31 + 4; // 0x807AE5C0
    r30 = r30 + 1; // 0x807AE5C4
    r0 = *(0x24 + r28); // lwz @ 0x807AE5C8
    if (<) goto 0x0x807ae5ac;
    r0 = *(0x24 + r1); // lwz @ 0x807AE5D4
    r31 = *(0x1c + r1); // lwz @ 0x807AE5D8
    r30 = *(0x18 + r1); // lwz @ 0x807AE5DC
    r29 = *(0x14 + r1); // lwz @ 0x807AE5E0
    r28 = *(0x10 + r1); // lwz @ 0x807AE5E4
    return;
}