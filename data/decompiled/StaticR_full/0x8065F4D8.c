/* Function at 0x8065F4D8, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8065F4D8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8065F4EC
    r0 = *(0x94 + r3); // lwz @ 0x8065F4F0
    if (>) goto 0x0x8065f80c;
    /* lis r4, 0 */ // 0x8065F4FC
    /* slwi r0, r0, 2 */ // 0x8065F500
    r4 = r4 + 0; // 0x8065F504
    /* lwzx r4, r4, r0 */ // 0x8065F508
    /* mtctr r4 */ // 0x8065F50C
    /* bctr  */ // 0x8065F510
    r4 = *(0x98 + r3); // lwz @ 0x8065F514
    if (<=) goto 0x0x8065f534;
    if (<) goto 0x0x8065f618;
    if (<=) goto 0x0x8065f5b0;
    /* b 0x8065f618 */ // 0x8065F530
    /* lis r30, 0 */ // 0x8065F534
    r3 = *(0 + r30); // lwz @ 0x8065F538
    r3 = *(0x90 + r3); // lwz @ 0x8065F53C
    FUN_806844E8(); // bl 0x806844E8
    if (!=) goto 0x0x8065f80c;
    r3 = *(0x98 + r31); // lwz @ 0x8065F54C
    r0 = r3 + 1; // 0x8065F550
    *(0x98 + r31) = r0; // stw @ 0x8065F554
    if (>=) goto 0x0x8065f80c;
    /* slwi r3, r0, 2 */ // 0x8065F560
    r3 = r31 + r3; // 0x8065F564
    r5 = *(0x54 + r3); // lwz @ 0x8065F568
    if (==) goto 0x0x8065f80c;
    if (<=) goto 0x0x8065f588;
    if (==) goto 0x0x8065f59c;
    /* b 0x8065f80c */ // 0x8065F584
    r3 = *(0 + r30); // lwz @ 0x8065F588
    /* clrlwi r4, r0, 0x18 */ // 0x8065F58C
}