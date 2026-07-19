/* Function at 0x8080C294, size=268 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_8080C294(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r30, 0 */ // 0x8080C2A8
    r30 = r30 + 0; // 0x8080C2AC
    *(0x34 + r1) = r29; // stw @ 0x8080C2B0
    r29 = r5;
    *(0x30 + r1) = r28; // stw @ 0x8080C2B8
    r28 = r3;
    r0 = *(0x121 + r3); // lbz @ 0x8080C2C0
    if (!=) goto 0x0x8080c40c;
    /* li r5, 2 */ // 0x8080C2D0
    /* li r0, 1 */ // 0x8080C2D4
    *(0xb0 + r3) = r5; // stw @ 0x8080C2D8
    *(0x120 + r3) = r0; // stb @ 0x8080C2DC
    *(0x124 + r3) = r4; // stw @ 0x8080C2E0
    if (!=) goto 0x0x8080c318;
    /* lfs f1, 8(r30) */ // 0x8080C2E8
    r4 = r29;
    /* stfs f1, 0xc4(r3) */ // 0x8080C2F0
    FUN_805A443C(r4, r3); // bl 0x805A443C
    /* lfs f0, 0x14(r1) */ // 0x8080C2FC
    /* stfs f0, 0xb4(r28) */ // 0x8080C300
    /* lfs f0, 0x18(r1) */ // 0x8080C304
    /* stfs f0, 0xb8(r28) */ // 0x8080C308
    /* lfs f0, 0x1c(r1) */ // 0x8080C30C
    /* stfs f0, 0xbc(r28) */ // 0x8080C310
    /* b 0x8080c344 */ // 0x8080C314
    /* lfs f1, 0xc(r30) */ // 0x8080C318
    r4 = r29;
    /* stfs f1, 0xc4(r3) */ // 0x8080C320
    FUN_805A443C(r4, r3); // bl 0x805A443C
    /* lfs f0, 8(r1) */ // 0x8080C32C
    /* stfs f0, 0xb4(r28) */ // 0x8080C330
    /* lfs f0, 0xc(r1) */ // 0x8080C334
    /* stfs f0, 0xb8(r28) */ // 0x8080C338
    /* lfs f0, 0x10(r1) */ // 0x8080C33C
    /* stfs f0, 0xbc(r28) */ // 0x8080C340
    /* lfs f0, 0x10(r30) */ // 0x8080C344
    /* lis r31, 0 */ // 0x8080C348
    /* stfs f0, 0xb8(r28) */ // 0x8080C34C
    /* lfs f0, 0(r31) */ // 0x8080C354
    r0 = *(0x14 + r30); // lwz @ 0x8080C358
    *(0xc8 + r28) = r0; // stw @ 0x8080C35C
    r4 = *(0 + r29); // lwz @ 0x8080C360
    r0 = *(4 + r29); // lwz @ 0x8080C364
    *(0x24 + r1) = r0; // stw @ 0x8080C368
    *(0x20 + r1) = r4; // stw @ 0x8080C36C
    r0 = *(8 + r29); // lwz @ 0x8080C370
    *(0x28 + r1) = r0; // stw @ 0x8080C374
    /* stfs f0, 0x24(r1) */ // 0x8080C378
    FUN_805E3430(); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8080C380
    r3 = r28;
    r4 = r4 + 0; // 0x8080C388
    FUN_808A1E9C(r4, r3, r4, r5); // bl 0x808A1E9C
    /* lfs f0, 0(r31) */ // 0x8080C394
    r3 = r28;
    /* stfs f0, 0xcc(r28) */ // 0x8080C39C
}