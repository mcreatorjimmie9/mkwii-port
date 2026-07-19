/* Function at 0x80673CD8, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80673CD8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 2 */ // 0x80673CE0
    r3 = r3 + 0x98; // 0x80673CE4
    *(0x24 + r1) = r0; // stw @ 0x80673CE8
    *(0x1c + r1) = r31; // stw @ 0x80673CEC
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r4 = *(0 + r3); // lwz @ 0x80673CF4
    r31 = r3;
    r3 = *(0x10 + r4); // lwz @ 0x80673CFC
    FUN_805E3430(); // bl 0x805E3430
}