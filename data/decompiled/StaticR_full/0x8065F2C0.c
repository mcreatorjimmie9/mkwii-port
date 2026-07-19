/* Function at 0x8065F2C0, size=252 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8065F2C0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x8065F2C8
    *(0x14 + r1) = r0; // stw @ 0x8065F2CC
    /* li r0, 0 */ // 0x8065F2D0
    *(0xc + r1) = r31; // stw @ 0x8065F2D8
    r31 = r3;
    *(0x94 + r3) = r4; // stw @ 0x8065F2E0
    *(0x98 + r3) = r0; // stw @ 0x8065F2E4
    if (>=) goto 0x0x8065f338;
    r5 = *(0x54 + r3); // lwz @ 0x8065F2EC
    if (==) goto 0x0x8065f338;
    if (<=) goto 0x0x8065f30c;
    if (==) goto 0x0x8065f324;
    /* b 0x8065f338 */ // 0x8065F308
    /* lis r3, 0 */ // 0x8065F30C
    /* li r4, 0 */ // 0x8065F310
    r3 = *(0 + r3); // lwz @ 0x8065F314
    r3 = *(0x90 + r3); // lwz @ 0x8065F318
    FUN_80684ECC(r3, r4); // bl 0x80684ECC
    /* b 0x8065f338 */ // 0x8065F320
    /* lis r3, 0 */ // 0x8065F324
    r4 = *(0x64 + r31); // lwz @ 0x8065F328
    r3 = *(0 + r3); // lwz @ 0x8065F32C
    r3 = *(0x90 + r3); // lwz @ 0x8065F330
    FUN_80684E9C(r3); // bl 0x80684E9C
    /* li r0, 0 */ // 0x8065F338
    *(0x300 + r31) = r0; // stw @ 0x8065F33C
    /* lis r4, 0 */ // 0x8065F340
    *(0x9c + r31) = r0; // stw @ 0x8065F344
    r3 = *(0 + r4); // lwz @ 0x8065F348
    r3 = *(0 + r3); // lwz @ 0x8065F34C
    r0 = *(0 + r3); // lwz @ 0x8065F350
    if (==) goto 0x0x8065f370;
    if (==) goto 0x0x8065f370;
    if (==) goto 0x0x8065f384;
    /* b 0x8065f3a8 */ // 0x8065F36C
    r3 = r31;
    /* li r4, 0 */ // 0x8065F374
    /* li r5, 0 */ // 0x8065F378
    FUN_8065FA0C(r3, r4, r5); // bl 0x8065FA0C
    /* b 0x8065f3a8 */ // 0x8065F380
    /* lis r5, 0 */ // 0x8065F384
    /* li r0, 5 */ // 0x8065F388
    r3 = *(0 + r5); // lwz @ 0x8065F38C
    *(0xd18 + r3) = r0; // stw @ 0x8065F390
    r4 = *(0 + r4); // lwz @ 0x8065F394
    r3 = *(0 + r5); // lwz @ 0x8065F398
    r4 = *(0x98 + r4); // lwz @ 0x8065F39C
    r0 = *(0x3c8 + r4); // lwz @ 0x8065F3A0
    *(0x1758 + r3) = r0; // stw @ 0x8065F3A4
    r0 = *(0x14 + r1); // lwz @ 0x8065F3A8
    r31 = *(0xc + r1); // lwz @ 0x8065F3AC
    return;
}