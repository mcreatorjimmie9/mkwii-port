/* Function at 0x8062FFAC, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8062FFAC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x8062FFBC
    /* lis r31, 0 */ // 0x8062FFC0
    r31 = r31 + 0; // 0x8062FFC4
    *(0x18 + r1) = r30; // stw @ 0x8062FFC8
    r30 = r3;
    if (==) goto 0x0x8062ffe0;
    r3 = r3 + 0x7c; // 0x8062FFD4
    FUN_8062FEA8(r3); // bl 0x8062FEA8
    /* b 0x806300c8 */ // 0x8062FFDC
    /* li r0, 0x10 */ // 0x8062FFE0
    /* lfs f0, 0x128(r31) */ // 0x8062FFE4
    /* mulli r4, r0, 0xc */ // 0x8062FFE8
    *(0x80 + r3) = r0; // sth @ 0x8062FFEC
    /* stfs f0, 0x84(r3) */ // 0x8062FFF0
    r3 = r4 + 0x10; // 0x8062FFF4
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8062FFFC
    /* lis r5, 0 */ // 0x80630000
}