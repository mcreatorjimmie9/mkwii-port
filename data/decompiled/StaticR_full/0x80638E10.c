/* Function at 0x80638E10, size=64 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80638E10(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80638E18
    *(0x74 + r1) = r0; // stw @ 0x80638E1C
    r4 = r3 + 0; // 0x80638E20
    /* li r0, 0 */ // 0x80638E24
    *(0x6c + r1) = r31; // stw @ 0x80638E28
    /* lis r31, 0 */ // 0x80638E2C
    r31 = r31 + 0; // 0x80638E30
    *(0 + r3) = r0; // stw @ 0x80638E34
    /* lfs f1, 0x58(r31) */ // 0x80638E3C
    *(4 + r4) = r0; // stw @ 0x80638E40
    /* lfs f2, 0x5c(r31) */ // 0x80638E44
    /* lfs f3, 0(r31) */ // 0x80638E48
    FUN_805E3430(r3); // bl 0x805E3430
}