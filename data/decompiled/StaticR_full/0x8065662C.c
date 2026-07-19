/* Function at 0x8065662C, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8065662C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x80656640
    r30 = r5;
    r5 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8065664C
    r29 = r3;
    r3 = r30;
    r4 = r29 + 0xc; // 0x80656658
    FUN_806585C4(r5, r3, r4); // bl 0x806585C4
    r0 = *(0x20 + r30); // lwz @ 0x80656660
    *(8 + r29) = r0; // sth @ 0x80656664
    /* clrlwi. r0, r0, 0x10 */ // 0x80656668
    if (!=) goto 0x0x80656674;
    *(0xa + r29) = r31; // sth @ 0x80656670
    r0 = *(0x24 + r1); // lwz @ 0x80656674
    r31 = *(0x1c + r1); // lwz @ 0x80656678
    r30 = *(0x18 + r1); // lwz @ 0x8065667C
    r29 = *(0x14 + r1); // lwz @ 0x80656680
    return;
}