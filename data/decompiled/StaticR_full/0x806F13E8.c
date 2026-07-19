/* Function at 0x806F13E8, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806F13E8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x806F13F0
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806F1400
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F1408
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x806F1410
    FUN_806E4530(); // bl 0x806E4530
    /* lis r7, 0 */ // 0x806F1418
    /* slwi r8, r3, 3 */ // 0x806F141C
    r3 = *(0 + r7); // lwz @ 0x806F1420
    /* slwi r0, r30, 2 */ // 0x806F1424
    r5 = r29 + r8; // 0x806F1428
    /* li r4, 1 */ // 0x806F142C
    r6 = *(0x20 + r3); // lwz @ 0x806F1430
    r3 = r29 + r0; // 0x806F1434
    r0 = r6 rlwinm 0x1d; // rlwinm
    /* stbx r0, r29, r8 */ // 0x806F143C
    *(1 + r5) = r31; // stb @ 0x806F1440
    *(3 + r5) = r4; // stb @ 0x806F1444
    r4 = *(0 + r7); // lwz @ 0x806F1448
    r0 = *(0x20 + r4); // lwz @ 0x806F144C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xa0 + r3) = r0; // stw @ 0x806F1454
    r31 = *(0x1c + r1); // lwz @ 0x806F1458
    r30 = *(0x18 + r1); // lwz @ 0x806F145C
    r29 = *(0x14 + r1); // lwz @ 0x806F1460
    r0 = *(0x24 + r1); // lwz @ 0x806F1464
    return;
}