/* Function at 0x805D1870, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D1870(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0xe */ // 0x805D1878
    *(0x14 + r1) = r0; // stw @ 0x805D187C
    *(0xc + r1) = r31; // stw @ 0x805D1880
    r31 = r3;
    r3 = r3 + 0x30; // 0x805D1888
    FUN_805E3430(r4, r3); // bl 0x805E3430
}