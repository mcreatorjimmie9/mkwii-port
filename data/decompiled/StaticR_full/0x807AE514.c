/* Function at 0x807AE514, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807AE514(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x807AE528
    *(0x14 + r1) = r29; // stw @ 0x807AE52C
    r29 = r3;
    r31 = r29;
    /* b 0x807ae554 */ // 0x807AE538
    r3 = *(0x14 + r31); // lwz @ 0x807AE53C
    if (==) goto 0x0x807ae54c;
    FUN_807B202C(); // bl 0x807B202C
    r31 = r31 + 4; // 0x807AE54C
    r30 = r30 + 1; // 0x807AE550
    r0 = *(0x24 + r29); // lwz @ 0x807AE554
    if (<) goto 0x0x807ae53c;
    r0 = *(0x24 + r1); // lwz @ 0x807AE560
    r31 = *(0x1c + r1); // lwz @ 0x807AE564
    r30 = *(0x18 + r1); // lwz @ 0x807AE568
    r29 = *(0x14 + r1); // lwz @ 0x807AE56C
    return;
}