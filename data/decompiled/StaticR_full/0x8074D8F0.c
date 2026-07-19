/* Function at 0x8074D8F0, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8074D8F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8074D8F8
    /* lis r4, 0 */ // 0x8074D8FC
    *(0x24 + r1) = r0; // stw @ 0x8074D900
    /* lfs f0, 0(r5) */ // 0x8074D904
    *(0x1c + r1) = r31; // stw @ 0x8074D90C
    r31 = r3;
    /* stfs f0, 0xdc(r3) */ // 0x8074D914
    r6 = *(0x20 + r3); // lwz @ 0x8074D918
    /* lfs f0, 0(r4) */ // 0x8074D91C
    /* stfs f0, 0x114(r3) */ // 0x8074D920
    r3 = r6;
    r4 = *(0x48 + r6); // lha @ 0x8074D928
    FUN_8076D090(r3); // bl 0x8076D090
    /* lfs f0, 8(r1) */ // 0x8074D930
    /* stfs f0, 0xec(r31) */ // 0x8074D934
    /* lfs f0, 0xc(r1) */ // 0x8074D938
    /* stfs f0, 0xf0(r31) */ // 0x8074D93C
    /* lfs f0, 0x10(r1) */ // 0x8074D940
    /* stfs f0, 0xf4(r31) */ // 0x8074D944
    r31 = *(0x1c + r1); // lwz @ 0x8074D948
    r0 = *(0x24 + r1); // lwz @ 0x8074D94C
    return;
}