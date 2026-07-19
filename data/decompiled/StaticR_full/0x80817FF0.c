/* Function at 0x80817FF0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80817FF0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80817FF8
    *(0x14 + r1) = r0; // stw @ 0x80817FFC
    /* lfs f1, 0(r3) */ // 0x80818000
    *(0xc + r1) = r31; // stw @ 0x80818004
    r31 = r4;
    r3 = r31;
    FUN_80855ED8(r3); // bl 0x80855ED8
    /* lis r4, 0 */ // 0x80818014
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8081801C
    FUN_80855F78(r3, r4, r3); // bl 0x80855F78
    r0 = *(0x14 + r1); // lwz @ 0x80818024
    r31 = *(0xc + r1); // lwz @ 0x80818028
    return;
}