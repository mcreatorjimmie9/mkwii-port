/* Function at 0x8061F270, size=384 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_8061F270(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8061F284
    /* lis r29, 0 */ // 0x8061F288
    r29 = r29 + 0; // 0x8061F28C
    FUN_8061F518(); // bl 0x8061F518
    /* lis r31, 0 */ // 0x8061F294
    /* lis r30, 0 */ // 0x8061F298
    r3 = *(0 + r31); // lwz @ 0x8061F29C
    r5 = r30 + 0; // 0x8061F2A0
    /* li r4, 0 */ // 0x8061F2A4
    /* li r6, 0 */ // 0x8061F2A8
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r0 = r3 + 4; // 0x8061F2B0
    *(0 + r29) = r3; // stw @ 0x8061F2B4
    r30 = r30 + 0; // 0x8061F2B8
    r3 = *(0 + r31); // lwz @ 0x8061F2BC
    *(8 + r29) = r0; // stw @ 0x8061F2C0
    r5 = r30 + 0xe; // 0x8061F2C4
    /* li r4, 0 */ // 0x8061F2C8
    /* li r6, 0 */ // 0x8061F2CC
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r0 = r3 + 4; // 0x8061F2D4
    *(4 + r29) = r3; // stw @ 0x8061F2D8
    r3 = *(0 + r31); // lwz @ 0x8061F2DC
    r5 = r30 + 0x1e; // 0x8061F2E0
    *(0xc + r29) = r0; // stw @ 0x8061F2E4
    /* li r4, 0 */ // 0x8061F2E8
    /* li r6, 0 */ // 0x8061F2EC
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    *(0x10 + r29) = r3; // stw @ 0x8061F2F8
    if (==) goto 0x0x8061f308;
    r0 = r3 + 8; // 0x8061F300
    *(0x14 + r29) = r0; // stw @ 0x8061F304
    /* lis r4, 0 */ // 0x8061F308
    /* lis r3, 0 */ // 0x8061F30C
    r4 = r4 + 0; // 0x8061F310
    r3 = *(0 + r3); // lwz @ 0x8061F314
    r5 = r4 + 0x36; // 0x8061F318
    /* li r6, 0 */ // 0x8061F31C
    /* li r4, 0 */ // 0x8061F320
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    *(0x18 + r29) = r3; // stw @ 0x8061F32C
    if (==) goto 0x0x8061f33c;
    r0 = r3 + 4; // 0x8061F334
    *(0x1c + r29) = r0; // stw @ 0x8061F338
    /* lis r4, 0 */ // 0x8061F33C
    /* lis r3, 0 */ // 0x8061F340
    r4 = r4 + 0; // 0x8061F344
    r3 = *(0 + r3); // lwz @ 0x8061F348
    r5 = r4 + 0x4d; // 0x8061F34C
    /* li r6, 0 */ // 0x8061F350
    /* li r4, 0 */ // 0x8061F354
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    *(0x20 + r29) = r3; // stw @ 0x8061F360
    if (==) goto 0x0x8061f370;
    r0 = r3 + 4; // 0x8061F368
    *(0x24 + r29) = r0; // stw @ 0x8061F36C
    /* lis r30, 0 */ // 0x8061F370
    /* lis r31, 0 */ // 0x8061F374
    r30 = r30 + 0; // 0x8061F378
    r3 = *(0 + r31); // lwz @ 0x8061F37C
    r5 = r30 + 0x64; // 0x8061F380
    /* li r4, 0 */ // 0x8061F384
    /* li r6, 0 */ // 0x8061F388
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r0 = r3 + 4; // 0x8061F390
    *(0x28 + r29) = r3; // stw @ 0x8061F394
    r3 = *(0 + r31); // lwz @ 0x8061F398
    r5 = r30 + 0x75; // 0x8061F39C
    *(0x2c + r29) = r0; // stw @ 0x8061F3A0
    /* li r4, 0 */ // 0x8061F3A4
    /* li r6, 0 */ // 0x8061F3A8
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    *(0x30 + r29) = r3; // stw @ 0x8061F3B0
    r5 = r30 + 0x89; // 0x8061F3B4
    r3 = *(0 + r31); // lwz @ 0x8061F3B8
    /* li r4, 0 */ // 0x8061F3BC
    /* li r6, 0 */ // 0x8061F3C0
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r0 = r3 + 4; // 0x8061F3C8
    *(0x34 + r29) = r3; // stw @ 0x8061F3CC
    *(0x38 + r29) = r0; // stw @ 0x8061F3D0
    r31 = *(0x1c + r1); // lwz @ 0x8061F3D4
    r30 = *(0x18 + r1); // lwz @ 0x8061F3D8
    r29 = *(0x14 + r1); // lwz @ 0x8061F3DC
    r0 = *(0x24 + r1); // lwz @ 0x8061F3E0
    return;
}