/* Function at 0x806055B8, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806055B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x806055C0
    r5 = r5 + 0; // 0x806055C8
    *(0x1c + r1) = r31; // stw @ 0x806055CC
    r31 = r5 + 0x98; // 0x806055D0
    *(0x18 + r1) = r30; // stw @ 0x806055D4
    /* li r30, 0 */ // 0x806055D8
    *(0x14 + r1) = r29; // stw @ 0x806055DC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806055E4
    r28 = r3;
    r4 = r28;
    r3 = r31;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x80605618;
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x8060560C
    FUN_805EC240(r3, r4, r5, r6); // bl 0x805EC240
    /* li r30, 1 */ // 0x80605614
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x8060561C
    r30 = *(0x18 + r1); // lwz @ 0x80605620
    r29 = *(0x14 + r1); // lwz @ 0x80605624
    r28 = *(0x10 + r1); // lwz @ 0x80605628
    r0 = *(0x24 + r1); // lwz @ 0x8060562C
    return;
}