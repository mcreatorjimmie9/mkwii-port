/* Function at 0x8088A4F4, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8088A4F4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8088A50C
    FUN_808A2028(); // bl 0x808A2028
    r0 = *(0x178 + r30); // lwz @ 0x8088A514
    if (==) goto 0x0x8088a560;
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r29 = *(0x178 + r30); // lwz @ 0x8088A528
    r30 = r30 + 0x58; // 0x8088A52C
    /* li r31, 0 */ // 0x8088A530
    r3 = *(0x14 + r29); // lwz @ 0x8088A534
    r3 = *(0 + r3); // lwz @ 0x8088A538
    if (==) goto 0x0x8088a550;
    r5 = r30;
    /* li r4, 0 */ // 0x8088A548
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x8088A550
    r29 = r29 + 4; // 0x8088A554
    if (<) goto 0x0x8088a534;
    r0 = *(0x24 + r1); // lwz @ 0x8088A560
    r31 = *(0x1c + r1); // lwz @ 0x8088A564
    r30 = *(0x18 + r1); // lwz @ 0x8088A568
    r29 = *(0x14 + r1); // lwz @ 0x8088A56C
    return;
}