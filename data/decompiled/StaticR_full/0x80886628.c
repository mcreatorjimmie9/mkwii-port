/* Function at 0x80886628, size=116 bytes */
/* Stack frame: 592 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_80886628(int r3, int r4, int r5)
{
    /* Stack frame: -592(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    /* lis r30, 0 */ // 0x80886640
    r30 = r30 + 0; // 0x80886644
    *(0x244 + r1) = r29; // stw @ 0x80886648
    *(0x240 + r1) = r28; // stw @ 0x8088664C
    FUN_808A2028(); // bl 0x808A2028
    /* lfs f1, 0x50(r30) */ // 0x80886654
    r4 = r31 + 0x134; // 0x8088665C
    FUN_805A86E4(r3, r4); // bl 0x805A86E4
    r4 = r31 + 0x30; // 0x80886668
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    r28 = *(0x124 + r31); // lwz @ 0x80886674
    r3 = *(0x10 + r28); // lwz @ 0x80886678
    r3 = *(0 + r3); // lwz @ 0x8088667C
    if (==) goto 0x0x80886698;
    r3 = r3 + 0xc; // 0x80886688
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x808866a0 */ // 0x80886694
}