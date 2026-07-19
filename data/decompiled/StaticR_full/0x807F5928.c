/* Function at 0x807F5928, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807F5928(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807F5930
    *(0x34 + r1) = r0; // stw @ 0x807F5934
    /* lfs f1, 0(r6) */ // 0x807F593C
    *(0x2c + r1) = r31; // stw @ 0x807F5940
    r31 = r3;
    r4 = r31 + 0xb4; // 0x807F5948
    r8 = *(0x20 + r3); // lwz @ 0x807F594C
    r7 = *(0x24 + r8); // lwz @ 0x807F5954
    r0 = *(0x28 + r8); // lwz @ 0x807F5958
    *(0x18 + r1) = r0; // stw @ 0x807F595C
    *(0x14 + r1) = r7; // stw @ 0x807F5960
    r0 = *(0x2c + r8); // lwz @ 0x807F5964
    *(0x1c + r1) = r0; // stw @ 0x807F5968
    FUN_807F59B0(); // bl 0x807F59B0
    /* lfs f0, 8(r1) */ // 0x807F5970
    r3 = r31 + 0xb4; // 0x807F5974
    /* stfs f0, 0xb4(r31) */ // 0x807F5978
    /* lfs f0, 0xc(r1) */ // 0x807F597C
    /* stfs f0, 0xb8(r31) */ // 0x807F5980
    /* lfs f0, 0x10(r1) */ // 0x807F5984
    /* stfs f0, 0xbc(r31) */ // 0x807F5988
    FUN_805E3430(); // bl 0x805E3430
}