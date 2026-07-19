/* Function at 0x8078F2B0, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078F2B0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r6, 0 */ // 0x8078F2BC
    *(0x14 + r1) = r0; // stw @ 0x8078F2C0
    r7 = r3;
    *(0xc + r1) = r31; // stw @ 0x8078F2C8
    r9 = *(0x90 + r3); // lwz @ 0x8078F2CC
    /* mtctr r9 */ // 0x8078F2D0
    if (<=) goto 0x0x8078f318;
    r8 = *(0x80 + r7); // lwz @ 0x8078F2DC
    if (==) goto 0x0x8078f2f0;
    r0 = *(0x90 + r8); // lwz @ 0x8078F2E8
    /* b 0x8078f2f4 */ // 0x8078F2EC
    /* li r0, -1 */ // 0x8078F2F0
    if (!=) goto 0x0x8078f30c;
    /* slwi r0, r6, 2 */ // 0x8078F2FC
    r4 = r3 + r0; // 0x8078F300
    r31 = r4 + 0x80; // 0x8078F304
    /* b 0x8078f31c */ // 0x8078F308
    r7 = r7 + 4; // 0x8078F30C
    r6 = r6 + 1; // 0x8078F310
    if (counter-- != 0) goto 0x0x8078f2dc;
    /* li r31, 0 */ // 0x8078F318
    if (!=) goto 0x0x8078f364;
    r6 = r3;
    /* li r4, 0 */ // 0x8078F328
    /* mtctr r9 */ // 0x8078F32C
    if (<=) goto 0x0x8078f360;
    r0 = *(0x80 + r6); // lwz @ 0x8078F338
    if (!=) goto 0x0x8078f354;
    /* slwi r0, r4, 2 */ // 0x8078F344
    r4 = r3 + r0; // 0x8078F348
    r31 = r4 + 0x80; // 0x8078F34C
    /* b 0x8078f364 */ // 0x8078F350
    r6 = r6 + 4; // 0x8078F354
    r4 = r4 + 1; // 0x8078F358
    if (counter-- != 0) goto 0x0x8078f338;
    /* li r31, 0 */ // 0x8078F360
    if (==) goto 0x0x8078f380;
    r4 = r31;
    /* li r6, 0 */ // 0x8078F370
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f384 */ // 0x8078F37C
    /* li r3, 0 */ // 0x8078F380
    r0 = *(0x14 + r1); // lwz @ 0x8078F384
    r31 = *(0xc + r1); // lwz @ 0x8078F388
}