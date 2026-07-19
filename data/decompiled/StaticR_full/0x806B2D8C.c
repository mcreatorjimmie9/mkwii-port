/* Function at 0x806B2D8C, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806B2D8C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 1 */ // 0x806B2D9C
    *(0x18 + r1) = r30; // stw @ 0x806B2DA0
    /* li r30, 0 */ // 0x806B2DA4
    *(0x14 + r1) = r29; // stw @ 0x806B2DA8
    r29 = r3;
    r3 = *(0x8b0 + r29); // lwz @ 0x806B2DB0
    r0 = r31 << r30; // slw
    /* and. r0, r3, r0 */ // 0x806B2DB8
    if (==) goto 0x0x806b2dd8;
    r0 = *(0x27c + r29); // lwz @ 0x806B2DC0
    r4 = r30;
    /* mulli r0, r0, 0x254 */ // 0x806B2DC8
    r3 = r29 + r0; // 0x806B2DCC
    r3 = r3 + 0x294; // 0x806B2DD0
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r30 = r30 + 1; // 0x806B2DD8
    if (<) goto 0x0x806b2db0;
    r0 = *(0x24 + r1); // lwz @ 0x806B2DE4
    r31 = *(0x1c + r1); // lwz @ 0x806B2DE8
    r30 = *(0x18 + r1); // lwz @ 0x806B2DEC
    r29 = *(0x14 + r1); // lwz @ 0x806B2DF0
    return;
}