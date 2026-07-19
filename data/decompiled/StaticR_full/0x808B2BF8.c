/* Function at 0x808B2BF8, size=164 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808B2BF8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x808B2C00
    /* lfs f1, 0(r5) */ // 0x808B2C04
    *(0x44 + r1) = r0; // stw @ 0x808B2C08
    /* li r0, 1 */ // 0x808B2C0C
    *(0x3c + r1) = r31; // stw @ 0x808B2C10
    r31 = r6;
    *(0x38 + r1) = r30; // stw @ 0x808B2C18
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x808B2C20
    r29 = r4;
    *(0x30 + r1) = r28; // stw @ 0x808B2C28
    r28 = r3;
    *(0x1c + r3) = r0; // stb @ 0x808B2C30
    /* lfs f0, 0(r6) */ // 0x808B2C34
    /* stfs f0, 0x10(r3) */ // 0x808B2C38
    /* lfs f0, 0(r7) */ // 0x808B2C3C
    /* lfs f2, 4(r6) */ // 0x808B2C40
    /* stfs f2, 0x14(r3) */ // 0x808B2C44
    /* fcmpu cr0, f0, f1 */ // 0x808B2C48
    /* lfs f0, 8(r6) */ // 0x808B2C4C
    /* stfs f0, 0x18(r3) */ // 0x808B2C50
    if (==) goto 0x0x808b2c8c;
    r4 = r28 + 0x24; // 0x808B2C5C
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f0, 0x20(r1) */ // 0x808B2C64
    /* stfs f0, 0x34(r28) */ // 0x808B2C68
    /* lfs f1, 0x20(r28) */ // 0x808B2C6C
    /* lfs f0, 0x24(r1) */ // 0x808B2C70
    /* stfs f0, 0x38(r28) */ // 0x808B2C74
    /* lfs f0, 0(r30) */ // 0x808B2C78
    /* lfs f2, 0x28(r1) */ // 0x808B2C7C
    /* fmuls f0, f1, f0 */ // 0x808B2C80
    /* stfs f2, 0x3c(r28) */ // 0x808B2C84
    /* stfs f0, 0x30(r28) */ // 0x808B2C88
    r4 = r29;
    r5 = r28 + 0x34; // 0x808B2C94
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}