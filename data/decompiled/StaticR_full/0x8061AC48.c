/* Function at 0x8061AC48, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8061AC48(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8061AC54
    r31 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x8061AC60
    /* li r0, 0 */ // 0x8061AC64
    r3 = r3 + 0; // 0x8061AC68
    *(0xc + r31) = r3; // stw @ 0x8061AC6C
    r3 = r31;
    *(0x14 + r31) = r0; // stw @ 0x8061AC74
    *(0x10 + r31) = r0; // stw @ 0x8061AC78
    r31 = *(0xc + r1); // lwz @ 0x8061AC7C
    r0 = *(0x14 + r1); // lwz @ 0x8061AC80
    return;
}