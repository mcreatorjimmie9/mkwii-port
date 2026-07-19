/* Function at 0x80620FF8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80620FF8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8062100C
    r30 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r4, 0 */ // 0x80621018
    /* li r0, 0 */ // 0x8062101C
    r4 = r4 + 0; // 0x80621020
    *(0x10 + r30) = r0; // sth @ 0x80621024
    r3 = r30;
    *(0x14 + r30) = r0; // stw @ 0x8062102C
    *(0x18 + r30) = r31; // stw @ 0x80621030
    *(0xc + r30) = r4; // stw @ 0x80621034
    r31 = *(0xc + r1); // lwz @ 0x80621038
    r30 = *(8 + r1); // lwz @ 0x8062103C
    r0 = *(0x14 + r1); // lwz @ 0x80621040
    return;
}