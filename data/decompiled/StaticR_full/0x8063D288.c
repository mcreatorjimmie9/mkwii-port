/* Function at 0x8063D288, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063D288(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8063D294
    r31 = r3;
    FUN_805F3FD8(); // bl 0x805F3FD8
    /* lis r3, 0 */ // 0x8063D2A0
    /* li r0, 0 */ // 0x8063D2A4
    r3 = r3 + 0; // 0x8063D2A8
    *(0 + r31) = r3; // stw @ 0x8063D2AC
    r3 = r31;
    *(0x20 + r31) = r0; // stw @ 0x8063D2B4
    r31 = *(0xc + r1); // lwz @ 0x8063D2B8
    r0 = *(0x14 + r1); // lwz @ 0x8063D2BC
    return;
}