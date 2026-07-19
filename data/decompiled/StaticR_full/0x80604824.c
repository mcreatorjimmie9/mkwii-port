/* Function at 0x80604824, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80604824(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x80604834
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80604840
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80604848
    r28 = r3;
    r3 = r29;
    r4 = r28;
    FUN_805EB784(r3, r4); // bl 0x805EB784
    if (==) goto 0x0x8060487c;
    r3 = r30;
    r4 = r29;
    r5 = r28;
    /* li r6, 0 */ // 0x80604870
    FUN_805EC240(r3, r4, r5, r6); // bl 0x805EC240
    /* li r31, 1 */ // 0x80604878
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x80604880
    r30 = *(0x18 + r1); // lwz @ 0x80604884
    r29 = *(0x14 + r1); // lwz @ 0x80604888
    r28 = *(0x10 + r1); // lwz @ 0x8060488C
    r0 = *(0x24 + r1); // lwz @ 0x80604890
    return;
}