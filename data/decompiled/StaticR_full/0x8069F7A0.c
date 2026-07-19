/* Function at 0x8069F7A0, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8069F7A0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8069F7AC
    r31 = r3;
    FUN_8069F59C(); // bl 0x8069F59C
    /* li r0, 0 */ // 0x8069F7B8
    *(0x35 + r31) = r0; // stb @ 0x8069F7BC
    r31 = *(0xc + r1); // lwz @ 0x8069F7C0
    r0 = *(0x14 + r1); // lwz @ 0x8069F7C4
    return;
}