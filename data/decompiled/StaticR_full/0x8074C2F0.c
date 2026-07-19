/* Function at 0x8074C2F0, size=212 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8074C2F0(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x88 + r1) = r30; // stw @ 0x8074C300
    r30 = r3;
    /* lfs f1, 0xe8(r30) */ // 0x8074C30C
    r4 = r30 + 0xb4; // 0x8074C310
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r30 + 0xb4; // 0x8074C31C
    r5 = r30 + 0xc0; // 0x8074C320
    FUN_805A4498(r4, r3, r4, r5); // bl 0x805A4498
    /* lfs f1, 0xe4(r30) */ // 0x8074C328
    FUN_805A443C(r5, r3, r4); // bl 0x805A443C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    r5 = r30 + 0x110; // 0x8074C350
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    /* lis r4, 0 */ // 0x8074C358
    /* lis r31, 0 */ // 0x8074C35C
    /* lfs f0, 0(r31) */ // 0x8074C360
    /* lfs f1, 0(r4) */ // 0x8074C368
    /* stfs f0, 0x20(r1) */ // 0x8074C370
    /* stfs f1, 0x24(r1) */ // 0x8074C378
    /* stfs f0, 0x28(r1) */ // 0x8074C37C
    FUN_805A4498(r4, r5); // bl 0x805A4498
    /* lfs f1, 0xd8(r30) */ // 0x8074C384
    /* lfs f0, 0x14(r1) */ // 0x8074C388
    /* lfs f3, 0xdc(r30) */ // 0x8074C38C
    /* fadds f0, f1, f0 */ // 0x8074C390
    /* lfs f2, 0xe0(r30) */ // 0x8074C394
    /* stfs f0, 0xd8(r30) */ // 0x8074C398
    /* fmuls f1, f0, f0 */ // 0x8074C39C
    /* lfs f0, 0x18(r1) */ // 0x8074C3A0
    /* fadds f0, f3, f0 */ // 0x8074C3A4
    /* stfs f0, 0xdc(r30) */ // 0x8074C3A8
    /* lfs f0, 0x1c(r1) */ // 0x8074C3AC
    /* fadds f0, f2, f0 */ // 0x8074C3B0
    /* stfs f0, 0xe0(r30) */ // 0x8074C3B4
    /* fmuls f0, f0, f0 */ // 0x8074C3B8
    /* fadds f1, f1, f0 */ // 0x8074C3BC
    FUN_805E3430(); // bl 0x805E3430
}