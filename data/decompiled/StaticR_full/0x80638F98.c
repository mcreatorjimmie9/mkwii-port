/* Function at 0x80638F98, size=44 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80638F98(int r3)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    *(0x6c + r1) = r31; // stw @ 0x80638FA8
    /* lis r31, 0 */ // 0x80638FAC
    r31 = r31 + 0; // 0x80638FB0
    /* lfs f1, 0x58(r31) */ // 0x80638FB4
    /* lfs f2, 0x5c(r31) */ // 0x80638FB8
    /* lfs f3, 0(r31) */ // 0x80638FBC
    FUN_805E3430(); // bl 0x805E3430
}