/* Function at 0x80605220, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80605220(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80605228
    r5 = r5 + 0; // 0x80605230
    *(0x1c + r1) = r31; // stw @ 0x80605234
    r31 = r5 + 0x75; // 0x80605238
    *(0x18 + r1) = r30; // stw @ 0x8060523C
    /* li r30, 0 */ // 0x80605240
    *(0x14 + r1) = r29; // stw @ 0x80605244
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8060524C
    r28 = r3;
    r4 = r28;
    r3 = r31;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x806052b4;
    r0 = *(0x10 + r28); // lbz @ 0x80605268
    if (==) goto 0x0x80605288;
    r0 = *(4 + r29); // lwz @ 0x80605274
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80605278
    if (!=) goto 0x0x80605288;
    /* li r0, 1 */ // 0x80605280
    *(0x24 + r29) = r0; // stw @ 0x80605284
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x80605294
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x8060529C
    if (==) goto 0x0x806052b0;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x806052B0
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x806052B8
    r30 = *(0x18 + r1); // lwz @ 0x806052BC
    r29 = *(0x14 + r1); // lwz @ 0x806052C0
    r28 = *(0x10 + r1); // lwz @ 0x806052C4
    r0 = *(0x24 + r1); // lwz @ 0x806052C8
    return;
}