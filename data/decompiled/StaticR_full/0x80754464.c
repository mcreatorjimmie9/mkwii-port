/* Function at 0x80754464, size=84 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80754464(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80754474
    /* lfs f0, 0(r31) */ // 0x80754478
    *(0x28 + r1) = r30; // stw @ 0x8075447C
    /* li r30, -1 */ // 0x80754480
    r4 = *(0x20 + r3); // lwz @ 0x80754484
    /* stfs f0, 8(r1) */ // 0x80754488
    /* lfs f2, 0x2c(r4) */ // 0x8075448C
    /* lfs f1, 0x24(r4) */ // 0x80754490
    /* stfs f1, 0x18(r1) */ // 0x80754494
    /* stfs f2, 0x1c(r1) */ // 0x80754498
    /* lfs f2, 0x128(r3) */ // 0x8075449C
    /* lfs f1, 0x120(r3) */ // 0x807544A0
    /* stfs f1, 0x10(r1) */ // 0x807544A8
    /* stfs f2, 0x14(r1) */ // 0x807544AC
    /* stfs f0, 0xc(r1) */ // 0x807544B0
    FUN_805E3430(r3); // bl 0x805E3430
}