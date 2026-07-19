/* Function at 0x806478A8, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806478A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806478BC
    r29 = r3;
    FUN_805F2854(); // bl 0x805F2854
    r0 = *(0x98 + r29); // lbz @ 0x806478C8
    if (==) goto 0x0x80647920;
    /* lis r4, 0 */ // 0x806478D4
    r3 = *(0x24 + r29); // lwz @ 0x806478D8
    r4 = *(0 + r4); // lwz @ 0x806478DC
    r4 = *(0x44 + r4); // lwz @ 0x806478E0
    r4 = *(0 + r4); // lwz @ 0x806478E4
    r31 = *(6 + r4); // lhz @ 0x806478E8
    r30 = *(4 + r4); // lhz @ 0x806478EC
    FUN_805E3430(); // bl 0x805E3430
    *(8 + r1) = r3; // stw @ 0x806478F4
    r4 = r30 rlwinm 0x1f; // rlwinm
    r0 = r31 rlwinm 0x1f; // rlwinm
    r7 = *(0x9c + r29); // lhz @ 0x80647904
    r6 = *(0x9a + r29); // lhz @ 0x80647908
    /* srwi r5, r7, 1 */ // 0x8064790C
}