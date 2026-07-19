/* Function at 0x805B5FE8, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B5FE8(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0x4c */ // 0x805B5FF0
    *(0x14 + r1) = r0; // stw @ 0x805B5FF4
    *(0xc + r1) = r31; // stw @ 0x805B5FF8
    r31 = r3;
    r3 = r3 + 0x10; // 0x805B6000
    FUN_805E3430(r5, r3); // bl 0x805E3430
}