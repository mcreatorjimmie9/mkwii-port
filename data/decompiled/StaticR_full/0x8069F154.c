/* Function at 0x8069F154, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8069F154(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* mulli r0, r4, 0x44 */ // 0x8069F160
    *(0xc + r1) = r31; // stw @ 0x8069F164
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8069F16C
    r4 = *(0 + r3); // lwz @ 0x8069F170
    /* slwi r3, r5, 4 */ // 0x8069F174
    r3 = r3 + 0x10; // 0x8069F178
    r30 = r4 + r0; // 0x8069F17C
    *(4 + r30) = r5; // stw @ 0x8069F180
    FUN_805E3430(r3); // bl 0x805E3430
}