/* Function at 0x80919148, size=188 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_80919148(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* li r4, 0 */ // 0x80919150
    /* li r7, 2 */ // 0x80919154
    *(0x34 + r1) = r0; // stw @ 0x80919158
    /* li r8, 0 */ // 0x80919160
    /* li r9, 0 */ // 0x80919164
    /* stmw r27, 0x1c(r1) */ // 0x80919168
    /* lis r29, 0 */ // 0x8091916C
    r29 = r29 + 0; // 0x80919170
    /* li r30, 0 */ // 0x80919174
    r27 = r3;
    /* li r10, 9 */ // 0x8091917C
    r6 = r29;
    r0 = *(0x14 + r3); // lwz @ 0x80919184
    *(0x14 + r1) = r0; // stw @ 0x80919188
    *(8 + r1) = r30; // stw @ 0x8091918C
    r3 = *(8 + r3); // lwz @ 0x80919190
    FUN_805EDB0C(r6); // bl 0x805EDB0C
    r0 = *(0xb0 + r27); // lbz @ 0x80919198
    /* extsb. r0, r0 */ // 0x8091919C
    if (!=) goto 0x0x809191f0;
    /* lis r31, 0 */ // 0x809191A4
    /* li r28, 0 */ // 0x809191A8
    r31 = r31 + 0; // 0x809191AC
    r3 = *(0x14 + r27); // lwz @ 0x809191B0
    r0 = r28 rlwinm 2; // rlwinm
    *(0x10 + r1) = r3; // stw @ 0x809191B8
    r6 = r29;
    /* li r4, 0 */ // 0x809191C4
    *(8 + r1) = r30; // stw @ 0x809191C8
    /* li r7, 2 */ // 0x809191CC
    /* li r8, 0 */ // 0x809191D0
    /* li r9, 0 */ // 0x809191D4
    /* lwzx r3, r31, r0 */ // 0x809191D8
    /* li r10, 9 */ // 0x809191DC
    FUN_805EDB0C(r7, r8, r9, r10); // bl 0x805EDB0C
    r28 = r28 + 1; // 0x809191E4
    if (<) goto 0x0x809191b0;
    r0 = *(0x34 + r1); // lwz @ 0x809191F4
    return;
}