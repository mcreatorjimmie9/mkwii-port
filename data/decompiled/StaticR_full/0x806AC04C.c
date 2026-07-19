/* Function at 0x806AC04C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806AC04C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806AC058
    r31 = r3;
    FUN_806497A4(); // bl 0x806497A4
    /* lis r4, 0 */ // 0x806AC064
    r3 = r31;
    r4 = r4 + 0; // 0x806AC06C
    *(0 + r31) = r4; // stw @ 0x806AC070
    r31 = *(0xc + r1); // lwz @ 0x806AC074
    r0 = *(0x14 + r1); // lwz @ 0x806AC078
    return;
}