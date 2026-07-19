/* Function at 0x8064A384, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8064A384(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 3 */ // 0x8064A38C
    r3 = r3 + 0x98; // 0x8064A390
    *(0x24 + r1) = r0; // stw @ 0x8064A394
    *(0x1c + r1) = r31; // stw @ 0x8064A398
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r4 = *(0 + r3); // lwz @ 0x8064A3A0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x8064A3A8
    FUN_805E3430(); // bl 0x805E3430
}