/* Function at 0x805F9A6C, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805F9A6C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805F9A80
    r30 = r3;
    FUN_8061DC48(); // bl 0x8061DC48
    r4 = r3;
    r4 = r4 + 0xf0; // 0x805F9A94
    FUN_805F9AC4(r4, r3, r4); // bl 0x805F9AC4
    r5 = r31;
    r4 = r30 + 0x3c; // 0x805F9AA4
    FUN_805E3430(r4, r5, r3, r4); // bl 0x805E3430
}