/* Function at 0x8074D3F0, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8074D3F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8074D3F8
    *(0x14 + r1) = r0; // stw @ 0x8074D3FC
    /* li r0, 0 */ // 0x8074D400
    *(0xc + r1) = r31; // stw @ 0x8074D404
    r31 = r3;
    *(0x14d + r3) = r0; // stb @ 0x8074D40C
    r3 = *(0 + r4); // lwz @ 0x8074D410
    /* li r4, 0x78 */ // 0x8074D414
    r3 = *(4 + r3); // lwz @ 0x8074D418
    FUN_805E364C(r4); // bl 0x805E364C
    /* clrlwi r4, r3, 0x10 */ // 0x8074D420
    /* lis r3, 0 */ // 0x8074D424
    r0 = r4 + 0x78; // 0x8074D428
    *(0x14e + r31) = r0; // sth @ 0x8074D42C
    /* lis r6, 0 */ // 0x8074D430
    r5 = *(8 + r31); // lwz @ 0x8074D434
    /* lfs f1, 0(r3) */ // 0x8074D438
    /* li r4, 2 */ // 0x8074D43C
    r3 = *(0x28 + r5); // lwz @ 0x8074D440
    /* li r5, 1 */ // 0x8074D444
    /* lfs f2, 0(r6) */ // 0x8074D448
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r0 = *(0x14 + r1); // lwz @ 0x8074D450
    r31 = *(0xc + r1); // lwz @ 0x8074D454
    return;
}