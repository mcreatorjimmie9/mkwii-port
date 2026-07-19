/* Function at 0x808F94F4, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808F94F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808F94FC
    /* li r6, 0 */ // 0x808F9500
    /* li r5, 0 */ // 0x808F9508
    *(0x1c + r1) = r31; // stw @ 0x808F950C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808F9514
    *(0x14 + r1) = r29; // stw @ 0x808F9518
    *(0x10 + r1) = r28; // stw @ 0x808F951C
    r4 = *(0 + r4); // lwz @ 0x808F9520
    r4 = *(0x24 + r4); // lbz @ 0x808F9524
    *(0 + r3) = r4; // stb @ 0x808F9528
    /* slwi r0, r4, 2 */ // 0x808F952C
    r0 = r0 + r4; // 0x808F9530
    *(1 + r3) = r0; // stb @ 0x808F9534
    r0 = r0 rlwinm 1; // rlwinm
    *(2 + r3) = r0; // stb @ 0x808F953C
    /* b 0x808f956c */ // 0x808F9540
    /* clrlwi r0, r6, 0x18 */ // 0x808F9544
    r6 = r6 + 1; // 0x808F9548
    /* mulli r0, r0, 0x18 */ // 0x808F954C
    r4 = r3 + r0; // 0x808F9550
    *(0x3c4 + r4) = r5; // stb @ 0x808F9554
    *(0x3c8 + r4) = r5; // stw @ 0x808F9558
    *(0x3cc + r4) = r5; // stw @ 0x808F955C
    *(0x3d0 + r4) = r5; // stw @ 0x808F9560
    *(0x3d4 + r4) = r5; // stw @ 0x808F9564
    *(0x3d8 + r4) = r5; // stw @ 0x808F9568
    r0 = *(0 + r3); // lbz @ 0x808F956C
    /* clrlwi r4, r6, 0x18 */ // 0x808F9570
    if (<) goto 0x0x808f9544;
    /* li r29, 0 */ // 0x808F957C
    /* b 0x808f95d4 */ // 0x808F9580
    r0 = *(1 + r31); // lbz @ 0x808F9584
    /* clrlwi r4, r29, 0x18 */ // 0x808F9588
    /* li r3, 0x1e4 */ // 0x808F958C
    r0 = r4 / r0; // 0x808F9590
    /* clrlwi r28, r0, 0x18 */ // 0x808F9594
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808f95b0;
    r5 = r28;
    /* clrlwi r4, r29, 0x18 */ // 0x808F95A8
    FUN_8090E63C(r5); // bl 0x8090E63C
    r0 = r29 rlwinm 3; // rlwinm
    r30 = r31 + r0; // 0x808F95B4
    *(4 + r30) = r3; // stw @ 0x808F95B8
    r12 = *(0 + r3); // lwz @ 0x808F95BC
    r12 = *(0x20 + r12); // lwz @ 0x808F95C0
    /* mtctr r12 */ // 0x808F95C4
    /* bctrl  */ // 0x808F95C8
    *(8 + r30) = r28; // stb @ 0x808F95CC
}