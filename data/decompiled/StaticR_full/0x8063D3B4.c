/* Function at 0x8063D3B4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063D3B4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8063D3C0
    r31 = r3;
    FUN_805F3FD8(); // bl 0x805F3FD8
    /* lis r3, 0 */ // 0x8063D3CC
    /* li r0, 0 */ // 0x8063D3D0
    r3 = r3 + 0; // 0x8063D3D4
    *(0 + r31) = r3; // stw @ 0x8063D3D8
    r3 = r31;
    *(0x20 + r31) = r0; // stw @ 0x8063D3E0
    r31 = *(0xc + r1); // lwz @ 0x8063D3E4
    r0 = *(0x14 + r1); // lwz @ 0x8063D3E8
    return;
}