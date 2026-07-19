/* Function at 0x80757AC4, size=76 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80757AC4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80757ACC
    *(0x24 + r1) = r0; // stw @ 0x80757AD0
    /* lfs f1, 0(r4) */ // 0x80757AD4
    *(0x1c + r1) = r31; // stw @ 0x80757AD8
    r31 = r3;
    r4 = r31 + 0x100; // 0x80757AE4
    r5 = r31 + 0x118; // 0x80757AE8
    FUN_80757B3C(r3, r4, r5); // bl 0x80757B3C
    /* lfs f0, 8(r1) */ // 0x80757AF0
    r3 = r31 + 0x100; // 0x80757AF4
    /* stfs f0, 0x100(r31) */ // 0x80757AF8
    /* lfs f0, 0xc(r1) */ // 0x80757AFC
    /* stfs f0, 0x104(r31) */ // 0x80757B00
    /* lfs f0, 0x10(r1) */ // 0x80757B04
    /* stfs f0, 0x108(r31) */ // 0x80757B08
    FUN_805E3430(); // bl 0x805E3430
}