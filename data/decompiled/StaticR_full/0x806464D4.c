/* Function at 0x806464D4, size=296 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806464D4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806464E8
    /* lis r30, 0 */ // 0x806464EC
    r30 = r30 + 0; // 0x806464F0
    *(0x14 + r1) = r29; // stw @ 0x806464F4
    /* li r29, 0 */ // 0x806464F8
    r4 = *(0x44 + r3); // lwz @ 0x806464FC
    /* rlwinm. r0, r4, 0, 0x1d, 0x1d */ // 0x80646500
    if (==) goto 0x0x8064650c;
    /* li r29, 1 */ // 0x80646508
    /* clrlwi. r0, r4, 0x1f */ // 0x8064650C
    /* li r0, 0 */ // 0x80646510
    if (==) goto 0x0x8064651c;
    /* li r0, 1 */ // 0x80646518
    if (==) goto 0x0x80646534;
    /* li r0, 0 */ // 0x80646524
    *(0x3d + r3) = r0; // stb @ 0x80646528
    *(0x3c + r3) = r0; // stb @ 0x8064652C
    /* b 0x8064659c */ // 0x80646530
    /* rlwinm. r0, r4, 0, 0x1e, 0x1e */ // 0x80646534
    /* li r0, 0 */ // 0x80646538
    if (==) goto 0x0x80646544;
    /* li r0, 1 */ // 0x80646540
    if (==) goto 0x0x80646560;
    /* li r4, 1 */ // 0x8064654C
    /* li r0, 0 */ // 0x80646550
    *(0x3d + r3) = r4; // stb @ 0x80646554
    *(0x3c + r3) = r0; // stb @ 0x80646558
    /* b 0x8064659c */ // 0x8064655C
    r0 = *(0x3c + r3); // lbz @ 0x80646560
    if (!=) goto 0x0x8064659c;
    r3 = r31;
    FUN_8061DA88(r3); // bl 0x8061DA88
    /* cntlzw r0, r29 */ // 0x80646574
    r4 = r3;
    r3 = r31;
    /* srwi r5, r0, 5 */ // 0x80646580
    FUN_80646B6C(r4, r3); // bl 0x80646B6C
    if (==) goto 0x0x8064659c;
    /* li r0, 1 */ // 0x80646590
    *(0x3d + r31) = r0; // stb @ 0x80646594
    *(0x3c + r31) = r0; // stb @ 0x80646598
    r3 = *(0x16 + r31); // lha @ 0x8064659C
    r0 = *(0x1e + r30); // lha @ 0x806465A0
    if (<=) goto 0x0x806465c4;
    /* lfs f1, 0x4c(r31) */ // 0x806465AC
    /* lfs f0, 0x40(r30) */ // 0x806465B0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806465B4
    if (>=) goto 0x0x806465c4;
    r0 = *(0x28 + r30); // lha @ 0x806465BC
    *(0x40 + r31) = r0; // stw @ 0x806465C0
    r3 = *(0 + r31); // lwz @ 0x806465C4
    r3 = *(4 + r3); // lwz @ 0x806465C8
    r0 = *(4 + r3); // lwz @ 0x806465CC
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x806465D0
    if (!=) goto 0x0x806465e4;
    r0 = *(0x40 + r31); // lwz @ 0x806465D8
    if (<=) goto 0x0x806465f0;
    /* li r0, 0 */ // 0x806465E4
    *(0x3d + r31) = r0; // stb @ 0x806465E8
    *(0x3c + r31) = r0; // stb @ 0x806465EC
    r3 = *(0x40 + r31); // lwz @ 0x806465F0
    /* addic. r0, r3, -1 */ // 0x806465F4
    *(0x40 + r31) = r0; // stw @ 0x806465F8
}