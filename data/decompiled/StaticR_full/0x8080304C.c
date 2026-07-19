/* Function at 0x8080304C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8080304C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80803054
    /* li r0, 1 */ // 0x8080305C
    /* lfs f0, 0(r4) */ // 0x80803060
    *(0xc + r1) = r31; // stw @ 0x80803064
    *(8 + r1) = r30; // stw @ 0x80803068
    r30 = r3;
    /* stfs f0, 0xf4(r3) */ // 0x80803070
    *(0xb0 + r3) = r0; // stw @ 0x80803074
    FUN_80812BE4(); // bl 0x80812BE4
    /* lis r4, 0 */ // 0x8080307C
    /* lis r31, 0 */ // 0x80803080
    /* lfs f1, 0(r4) */ // 0x80803084
    /* lfs f0, 0(r31) */ // 0x80803088
    /* fsubs f1, f1, f0 */ // 0x8080308C
    FUN_805E3728(r4); // bl 0x805E3728
    /* lfs f0, 0(r31) */ // 0x80803094
    /* fadds f0, f0, f1 */ // 0x80803098
    /* stfs f0, 0xf8(r30) */ // 0x8080309C
    r31 = *(0xc + r1); // lwz @ 0x808030A0
    r30 = *(8 + r1); // lwz @ 0x808030A4
    r0 = *(0x14 + r1); // lwz @ 0x808030A8
    return;
}