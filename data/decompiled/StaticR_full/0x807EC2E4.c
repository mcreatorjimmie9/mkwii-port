/* Function at 0x807EC2E4, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807EC2E4(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807EC2F4
    r31 = r31 + 0; // 0x807EC2F8
    *(0x38 + r1) = r30; // stw @ 0x807EC2FC
    r30 = r3;
    /* lfs f1, 0x18(r31) */ // 0x807EC304
    /* lfs f2, 0xb4(r3) */ // 0x807EC308
    /* lfs f0, 0xb8(r3) */ // 0x807EC30C
    /* fmuls f1, f2, f1 */ // 0x807EC310
    /* fadds f0, f0, f1 */ // 0x807EC314
    /* stfs f0, 0xb8(r3) */ // 0x807EC318
    r3 = r3 + 0xf8; // 0x807EC31C
    FUN_805E3430(r3); // bl 0x805E3430
}