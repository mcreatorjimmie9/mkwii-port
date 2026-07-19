/* Function at 0x8078D134, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078D134(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8078D13C
    *(0x14 + r1) = r0; // stw @ 0x8078D140
    r5 = r5 + 0; // 0x8078D144
    *(0xc + r1) = r31; // stw @ 0x8078D148
    r31 = r3;
    r0 = *(0x104 + r3); // lwz @ 0x8078D150
    /* slwi r0, r0, 2 */ // 0x8078D154
    /* lwzx r5, r5, r0 */ // 0x8078D158
    FUN_805E3430(); // bl 0x805E3430
}