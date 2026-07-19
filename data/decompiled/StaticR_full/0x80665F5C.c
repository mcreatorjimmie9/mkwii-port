/* Function at 0x80665F5C, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80665F5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80665F64
    *(0x14 + r1) = r0; // stw @ 0x80665F68
    r4 = r4 + 0; // 0x80665F6C
    *(0xc + r1) = r31; // stw @ 0x80665F70
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x80665F78
    r3 = r3 + 4; // 0x80665F7C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}