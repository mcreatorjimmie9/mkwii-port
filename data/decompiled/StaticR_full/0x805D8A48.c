/* Function at 0x805D8A48, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805D8A48(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x805D8A50
    /* li r5, 0x2800 */ // 0x805D8A54
    /* li r7, 1 */ // 0x805D8A5C
    *(0x1c + r1) = r31; // stw @ 0x805D8A60
    /* lis r31, 0 */ // 0x805D8A64
    *(0x18 + r1) = r30; // stw @ 0x805D8A68
    *(0x14 + r1) = r29; // stw @ 0x805D8A6C
    r29 = *(0 + r3); // lwz @ 0x805D8A70
    r3 = *(0 + r31); // lwz @ 0x805D8A74
    r4 = *(0x18 + r29); // lwz @ 0x805D8A78
    r6 = *(0x20 + r29); // lwz @ 0x805D8A7C
    FUN_805BBEFC(); // bl 0x805BBEFC
    if (!=) goto 0x0x805d8ad0;
    r0 = *(0x24 + r29); // lbz @ 0x805D8A8C
    if (==) goto 0x0x805d8ad0;
    r30 = *(0x14 + r29); // lwz @ 0x805D8A98
    /* lis r3, 2 */ // 0x805D8A9C
    r4 = r3 + 0x7ffc; // 0x805D8AA0
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* addis r5, r30, 2 */ // 0x805D8AAC
    /* lis r4, 3 */ // 0x805D8AB0
    *(0x7ffc + r5) = r3; // stw @ 0x805D8AB4
    r5 = r4 + -0x8000; // 0x805D8AB8
    /* li r6, 0 */ // 0x805D8ABC
    /* li r7, 1 */ // 0x805D8AC0
    r3 = *(0 + r31); // lwz @ 0x805D8AC4
    r4 = *(0x14 + r29); // lwz @ 0x805D8AC8
    FUN_805BBEFC(r5, r6, r7); // bl 0x805BBEFC
    /* addis r4, r29, 2 */ // 0x805D8AD0
    /* li r0, 0 */ // 0x805D8AD4
}