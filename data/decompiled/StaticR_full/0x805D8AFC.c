/* Function at 0x805D8AFC, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805D8AFC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0x2800 */ // 0x805D8B04
    /* li r7, 1 */ // 0x805D8B08
    *(0x1c + r1) = r31; // stw @ 0x805D8B10
    /* lis r31, 0 */ // 0x805D8B14
    *(0x18 + r1) = r30; // stw @ 0x805D8B18
    *(0x14 + r1) = r29; // stw @ 0x805D8B1C
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x805D8B24
    r4 = *(0x18 + r29); // lwz @ 0x805D8B28
    r6 = *(0x20 + r29); // lwz @ 0x805D8B2C
    FUN_805BBEFC(); // bl 0x805BBEFC
    if (!=) goto 0x0x805d8b80;
    r0 = *(0x24 + r29); // lbz @ 0x805D8B3C
    if (==) goto 0x0x805d8b80;
    r30 = *(0x14 + r29); // lwz @ 0x805D8B48
    /* lis r3, 2 */ // 0x805D8B4C
    r4 = r3 + 0x7ffc; // 0x805D8B50
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* addis r5, r30, 2 */ // 0x805D8B5C
    /* lis r4, 3 */ // 0x805D8B60
    *(0x7ffc + r5) = r3; // stw @ 0x805D8B64
    r5 = r4 + -0x8000; // 0x805D8B68
    /* li r6, 0 */ // 0x805D8B6C
    /* li r7, 1 */ // 0x805D8B70
    r3 = *(0 + r31); // lwz @ 0x805D8B74
    r4 = *(0x14 + r29); // lwz @ 0x805D8B78
    FUN_805BBEFC(r5, r6, r7); // bl 0x805BBEFC
    /* addis r4, r29, 2 */ // 0x805D8B80
    /* li r0, 0 */ // 0x805D8B84
}