/* Function at 0x80605158, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80605158(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x8060516C
    *(0x14 + r1) = r29; // stw @ 0x80605170
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80605178
    r28 = r3;
    r0 = *(0x11 + r3); // lbz @ 0x80605180
    if (!=) goto 0x0x806051fc;
    /* lis r3, 0 */ // 0x8060518C
    r4 = r28;
    r3 = r3 + 0; // 0x80605194
    /* li r30, 0 */ // 0x80605198
    r31 = r3 + 0x6e; // 0x8060519C
    r3 = r31;
    FUN_805EB784(r4, r3, r3); // bl 0x805EB784
    if (==) goto 0x0x806051fc;
    r0 = *(0x10 + r28); // lbz @ 0x806051B0
    if (==) goto 0x0x806051d0;
    r0 = *(4 + r29); // lwz @ 0x806051BC
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x806051C0
    if (!=) goto 0x0x806051d0;
    /* li r0, 1 */ // 0x806051C8
    *(0x24 + r29) = r0; // stw @ 0x806051CC
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x806051DC
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x806051E4
    if (==) goto 0x0x806051f8;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x806051F8
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x80605200
    r30 = *(0x18 + r1); // lwz @ 0x80605204
    r29 = *(0x14 + r1); // lwz @ 0x80605208
    r28 = *(0x10 + r1); // lwz @ 0x8060520C
    r0 = *(0x24 + r1); // lwz @ 0x80605210
    return;
}