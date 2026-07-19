/* Function at 0x805C8238, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_805C8238(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x805C8240
    *(0x24 + r1) = r0; // stw @ 0x805C8244
    /* stmw r27, 0xc(r1) */ // 0x805C8248
    r29 = r3;
    r27 = r4;
    /* li r4, 4 */ // 0x805C8254
    r3 = *(0 + r5); // lwz @ 0x805C8258
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805c8344;
    /* lis r28, 0 */ // 0x805C8268
    /* mulli r30, r27, 0x18 */ // 0x805C826C
    r3 = *(0 + r28); // lwz @ 0x805C8270
    r4 = r3 + r30; // 0x805C8274
    r0 = *(0x3c4 + r4); // lbz @ 0x805C8278
    if (==) goto 0x0x805c8344;
    r5 = *(4 + r29); // lwz @ 0x805C8284
    /* lis r4, 0 */ // 0x805C8288
    /* lis r6, 0 */ // 0x805C828C
    r7 = *(0 + r4); // lwz @ 0x805C8290
    r5 = *(0xc + r5); // lwz @ 0x805C8294
    r0 = r27 rlwinm 2; // rlwinm
    r9 = *(0 + r6); // lwz @ 0x805C829C
    r4 = r27;
    /* lwzx r31, r5, r0 */ // 0x805C82A4
    /* li r5, 0 */ // 0x805C82A8
    /* li r6, 1 */ // 0x805C82AC
    /* li r8, 1 */ // 0x805C82B0
    FUN_808F9C40(r4, r5, r6, r8); // bl 0x808F9C40
    r0 = *(0 + r28); // lwz @ 0x805C82B8
    r3 = r0 + r30; // 0x805C82BC
    r0 = *(0x3c4 + r3); // lbz @ 0x805C82C0
    if (!=) goto 0x0x805c82e4;
    /* lis r3, 0 */ // 0x805C82CC
    r4 = r27;
    r3 = *(0 + r3); // lwz @ 0x805C82D4
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DFF8(r3, r4); // bl 0x8061DFF8
    FUN_8060EFB4(r3, r4); // bl 0x8060EFB4
    r3 = *(4 + r29); // lwz @ 0x805C82E4
    r0 = *(0x22 + r31); // lhz @ 0x805C82E8
    r3 = *(0x3c + r3); // lwz @ 0x805C82EC
    r3 = *(4 + r3); // lwz @ 0x805C82F0
    r3 = *(0x1ce + r3); // lha @ 0x805C82F4
    /* add. r0, r3, r0 */ // 0x805C82F8
    if (>=) goto 0x0x805c8304;
    /* li r0, 0 */ // 0x805C8300
    *(0x22 + r31) = r0; // sth @ 0x805C8304
    /* lis r3, 0 */ // 0x805C8308
    r0 = *(0 + r3); // lwz @ 0x805C830C
    r3 = r0 + r30; // 0x805C8310
    r0 = *(0x3c4 + r3); // lbz @ 0x805C8314
    if (!=) goto 0x0x805c8344;
    r3 = *(4 + r29); // lwz @ 0x805C8320
    r0 = *(0x22 + r31); // lhz @ 0x805C8324
    r3 = *(0x3c + r3); // lwz @ 0x805C8328
    r3 = *(4 + r3); // lwz @ 0x805C832C
    r3 = *(0x1cc + r3); // lha @ 0x805C8330
    /* add. r0, r3, r0 */ // 0x805C8334
    if (>=) goto 0x0x805c8340;
    /* li r0, 0 */ // 0x805C833C
    *(0x22 + r31) = r0; // sth @ 0x805C8340
    r0 = *(0x24 + r1); // lwz @ 0x805C8348
    return;
}