/* Function at 0x807E2C5C, size=60 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807E2C5C(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807E2C6C
    r31 = r31 + 0; // 0x807E2C70
    *(0x38 + r1) = r30; // stw @ 0x807E2C74
    r30 = r3;
    r4 = r30 + 0xcc; // 0x807E2C80
    FUN_805A4400(r3, r4); // bl 0x805A4400
    /* lfs f0, 0(r31) */ // 0x807E2C88
    /* stfs f0, 0x24(r1) */ // 0x807E2C90
    FUN_805E3430(r4, r3); // bl 0x805E3430
}