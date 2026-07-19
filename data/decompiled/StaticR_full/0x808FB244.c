/* Function at 0x808FB244, size=68 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808FB244(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x38 + r1) = r30; // stw @ 0x808FB254
    r30 = r3;
    r0 = *(0x2c + r3); // lhz @ 0x808FB25C
    /* lfs f0, 0xbc(r3) */ // 0x808FB260
    /* lfs f1, 0xb8(r3) */ // 0x808FB264
    r0 = r0 | 8; // 0x808FB268
    /* lfs f2, 0xb4(r3) */ // 0x808FB26C
    *(0x2c + r3) = r0; // sth @ 0x808FB270
    /* stfs f2, 0x3c(r3) */ // 0x808FB274
    /* stfs f1, 0x40(r3) */ // 0x808FB278
    /* stfs f0, 0x44(r3) */ // 0x808FB27C
    FUN_805E3430(r3); // bl 0x805E3430
}