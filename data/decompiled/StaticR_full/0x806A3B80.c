/* Function at 0x806A3B80, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806A3B80(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 2 */ // 0x806A3B88
    r3 = r3 + 0x214; // 0x806A3B8C
    *(0x24 + r1) = r0; // stw @ 0x806A3B90
    *(0x1c + r1) = r31; // stw @ 0x806A3B94
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r4 = *(0 + r3); // lwz @ 0x806A3B9C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806A3BA4
    FUN_805E3430(); // bl 0x805E3430
}