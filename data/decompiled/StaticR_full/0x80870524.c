/* Function at 0x80870524, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80870524(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x80870538
    r30 = r3;
    /* lfs f0, 0xc(r4) */ // 0x80870540
    /* stfs f0, 0x10(r3) */ // 0x80870544
    /* lfs f0, 0x1c(r4) */ // 0x80870548
    /* stfs f0, 0x14(r3) */ // 0x8087054C
    /* lfs f0, 0x2c(r4) */ // 0x80870550
    /* stfs f0, 0x18(r3) */ // 0x80870554
    FUN_805E3430(); // bl 0x805E3430
}