/* Function at 0x80698030, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80698030(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80698038
    /* li r5, 4 */ // 0x8069803C
    *(0x24 + r1) = r0; // stw @ 0x80698040
    /* li r0, 0 */ // 0x80698044
    *(0x1c + r1) = r31; // stw @ 0x80698048
    r31 = r3;
    *(0 + r3) = r0; // stw @ 0x80698050
    /* li r3, 0x14 */ // 0x80698054
    r4 = *(0 + r4); // lwz @ 0x80698058
    r4 = *(0x34 + r4); // lwz @ 0x8069805C
    FUN_805E3430(r3); // bl 0x805E3430
}