/* Function at 0x8061DA08, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8061DA08(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x8061DA14
    *(0xc + r1) = r31; // stw @ 0x8061DA18
    r31 = r3;
    r4 = r31;
    *(0 + r3) = r0; // stw @ 0x8061DA24
    /* lis r3, 0 */ // 0x8061DA28
    r3 = r3 + 0; // 0x8061DA2C
    FUN_805E3430(r4, r3, r3); // bl 0x805E3430
}