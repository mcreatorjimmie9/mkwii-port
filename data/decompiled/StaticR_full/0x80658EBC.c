/* Function at 0x80658EBC, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80658EBC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80658EC4
    /* li r5, 0x1c0 */ // 0x80658EC8
    *(0x14 + r1) = r0; // stw @ 0x80658ECC
    r4 = r4 + 0; // 0x80658ED0
    *(0xc + r1) = r31; // stw @ 0x80658ED4
    r31 = r3;
    *(8 + r3) = r4; // stw @ 0x80658EDC
    /* li r4, 0 */ // 0x80658EE0
    r3 = r3 + 0x10; // 0x80658EE4
    FUN_805E3430(r4, r3); // bl 0x805E3430
}