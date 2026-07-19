/* Function at 0x8074D634, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8074D634(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8074D63C
    /* lis r6, 0 */ // 0x8074D640
    *(0x14 + r1) = r0; // stw @ 0x8074D644
    /* lfs f1, 0(r5) */ // 0x8074D648
    /* li r5, 1 */ // 0x8074D64C
    *(0xc + r1) = r31; // stw @ 0x8074D650
    r31 = r3;
    /* lfs f2, 0(r6) */ // 0x8074D658
    r4 = *(8 + r3); // lwz @ 0x8074D65C
    r3 = *(0x28 + r4); // lwz @ 0x8074D660
    /* li r4, 1 */ // 0x8074D664
    FUN_805E73A4(r4); // bl 0x805E73A4
    /* li r0, 0 */ // 0x8074D66C
    *(0x14c + r31) = r0; // stb @ 0x8074D670
    r31 = *(0xc + r1); // lwz @ 0x8074D674
    r0 = *(0x14 + r1); // lwz @ 0x8074D678
    return;
}