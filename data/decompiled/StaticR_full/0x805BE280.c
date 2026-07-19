/* Function at 0x805BE280, size=456 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805BE280(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805BE294
    *(0x14 + r1) = r29; // stw @ 0x805BE298
    r0 = *(0xb54 + r3); // lwz @ 0x805BE29C
    if (==) goto 0x0x805be2bc;
    if (==) goto 0x0x805be304;
    if (==) goto 0x0x805be3dc;
    /* b 0x805be42c */ // 0x805BE2B8
    /* li r29, 0 */ // 0x805BE2BC
    /* lis r30, 0 */ // 0x805BE2C0
    /* clrlwi r0, r29, 0x18 */ // 0x805BE2C4
    /* mulli r0, r0, 0xf0 */ // 0x805BE2C8
    r3 = r31 + r0; // 0x805BE2CC
    r0 = *(0x18 + r3); // lwz @ 0x805BE2D0
    if (!=) goto 0x0x805be2f4;
    r0 = *(0xe + r3); // lbz @ 0x805BE2DC
    /* extsb. r0, r0 */ // 0x805BE2E0
    if (<) goto 0x0x805be2f4;
    r3 = *(0 + r30); // lwz @ 0x805BE2E8
    /* clrlwi r4, r0, 0x18 */ // 0x805BE2EC
    FUN_805B4184(); // bl 0x805B4184
    r29 = r29 + 1; // 0x805BE2F4
    if (<) goto 0x0x805be2c4;
    /* b 0x805be42c */ // 0x805BE300
    /* li r0, 4 */ // 0x805BE304
    /* li r6, 0 */ // 0x805BE308
    /* lis r5, 0 */ // 0x805BE30C
    /* mtctr r0 */ // 0x805BE310
    /* clrlwi r0, r6, 0x18 */ // 0x805BE314
    /* mulli r0, r0, 0xf0 */ // 0x805BE318
    r4 = r3 + r0; // 0x805BE31C
    r0 = *(0x18 + r4); // lwz @ 0x805BE320
    if (!=) goto 0x0x805be350;
    r0 = *(0xe + r4); // lbz @ 0x805BE32C
    /* extsb. r0, r0 */ // 0x805BE330
    if (<) goto 0x0x805be350;
    /* clrlwi r0, r0, 0x18 */ // 0x805BE338
    r4 = *(0 + r5); // lwz @ 0x805BE33C
    /* mulli r0, r0, 0xec */ // 0x805BE340
    r4 = r4 + r0; // 0x805BE344
    r0 = *(0x10 + r4); // lwz @ 0x805BE348
    *(8 + r4) = r0; // stw @ 0x805BE34C
    r6 = r6 + 1; // 0x805BE350
    /* clrlwi r0, r6, 0x18 */ // 0x805BE354
    /* mulli r0, r0, 0xf0 */ // 0x805BE358
    r4 = r3 + r0; // 0x805BE35C
    r0 = *(0x18 + r4); // lwz @ 0x805BE360
    if (!=) goto 0x0x805be390;
    r0 = *(0xe + r4); // lbz @ 0x805BE36C
    /* extsb. r0, r0 */ // 0x805BE370
    if (<) goto 0x0x805be390;
    /* clrlwi r0, r0, 0x18 */ // 0x805BE378
    r4 = *(0 + r5); // lwz @ 0x805BE37C
    /* mulli r0, r0, 0xec */ // 0x805BE380
    r4 = r4 + r0; // 0x805BE384
    r0 = *(0x10 + r4); // lwz @ 0x805BE388
    *(8 + r4) = r0; // stw @ 0x805BE38C
    r6 = r6 + 1; // 0x805BE390
    /* clrlwi r0, r6, 0x18 */ // 0x805BE394
    /* mulli r0, r0, 0xf0 */ // 0x805BE398
    r4 = r3 + r0; // 0x805BE39C
    r0 = *(0x18 + r4); // lwz @ 0x805BE3A0
    if (!=) goto 0x0x805be3d0;
    r0 = *(0xe + r4); // lbz @ 0x805BE3AC
    /* extsb. r0, r0 */ // 0x805BE3B0
    if (<) goto 0x0x805be3d0;
    /* clrlwi r0, r0, 0x18 */ // 0x805BE3B8
    r4 = *(0 + r5); // lwz @ 0x805BE3BC
    /* mulli r0, r0, 0xec */ // 0x805BE3C0
    r4 = r4 + r0; // 0x805BE3C4
    r0 = *(0x10 + r4); // lwz @ 0x805BE3C8
    *(8 + r4) = r0; // stw @ 0x805BE3CC
    r6 = r6 + 1; // 0x805BE3D0
    if (counter-- != 0) goto 0x0x805be314;
    /* b 0x805be42c */ // 0x805BE3D8
    r0 = *(0xb54 + r4); // lwz @ 0x805BE3DC
    if (!=) goto 0x0x805be42c;
    /* li r29, 0 */ // 0x805BE3E8
    /* lis r30, 0 */ // 0x805BE3EC
    /* clrlwi r0, r29, 0x18 */ // 0x805BE3F0
    /* mulli r0, r0, 0xf0 */ // 0x805BE3F4
    r3 = r31 + r0; // 0x805BE3F8
    r0 = *(0x18 + r3); // lwz @ 0x805BE3FC
    if (!=) goto 0x0x805be420;
    r0 = *(0xe + r3); // lbz @ 0x805BE408
    /* extsb. r0, r0 */ // 0x805BE40C
    if (<) goto 0x0x805be420;
    r3 = *(0 + r30); // lwz @ 0x805BE414
    /* clrlwi r4, r0, 0x18 */ // 0x805BE418
    FUN_805B412C(); // bl 0x805B412C
    r29 = r29 + 1; // 0x805BE420
    if (<) goto 0x0x805be3f0;
    r0 = *(0x24 + r1); // lwz @ 0x805BE42C
    r31 = *(0x1c + r1); // lwz @ 0x805BE430
    r30 = *(0x18 + r1); // lwz @ 0x805BE434
    r29 = *(0x14 + r1); // lwz @ 0x805BE438
    return;
}