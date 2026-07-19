/* Function at 0x805D18B0, size=32 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D18B0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* li r4, 0xe */ // 0x805D18B8
    *(0x34 + r1) = r0; // stw @ 0x805D18BC
    *(0x2c + r1) = r31; // stw @ 0x805D18C0
    r31 = r3;
    r3 = r3 + 0x30; // 0x805D18C8
    FUN_805E3430(r4, r3); // bl 0x805E3430
}