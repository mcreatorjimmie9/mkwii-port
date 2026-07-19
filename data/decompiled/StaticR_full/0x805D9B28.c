/* Function at 0x805D9B28, size=84 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D9B28(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lfs f3, 0(r4) */ // 0x805D9B30
    /* lis r5, 0 */ // 0x805D9B34
    *(0x44 + r1) = r0; // stw @ 0x805D9B38
    /* lfs f0, 0(r5) */ // 0x805D9B3C
    /* fneg f5, f3 */ // 0x805D9B40
    /* lfs f4, 4(r4) */ // 0x805D9B44
    *(0x3c + r1) = r31; // stw @ 0x805D9B48
    r31 = r3;
    r3 = r3 + 0x1c; // 0x805D9B50
    /* stfs f4, 0x20(r1) */ // 0x805D9B54
    /* stfs f5, 0x24(r1) */ // 0x805D9B58
    /* stfs f0, 0x28(r1) */ // 0x805D9B5C
    /* stfs f3, 0x14(r1) */ // 0x805D9B60
    /* stfs f4, 0x18(r1) */ // 0x805D9B64
    /* stfs f0, 0x1c(r1) */ // 0x805D9B68
    /* stfs f1, 8(r1) */ // 0x805D9B6C
    /* stfs f2, 0xc(r1) */ // 0x805D9B70
    /* stfs f0, 0x10(r1) */ // 0x805D9B74
    FUN_805E3430(); // bl 0x805E3430
}