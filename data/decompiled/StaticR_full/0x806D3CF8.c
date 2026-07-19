/* Function at 0x806D3CF8, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806D3CF8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806D3D04
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806D3D10
    r3 = r31;
    r4 = r4 + 0; // 0x806D3D18
    *(0 + r31) = r4; // stw @ 0x806D3D1C
    r31 = *(0xc + r1); // lwz @ 0x806D3D20
    r0 = *(0x14 + r1); // lwz @ 0x806D3D24
    return;
}