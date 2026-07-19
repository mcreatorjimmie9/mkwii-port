/* Function at 0x805B96B0, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B96B0(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805B96B8
    /* li r6, 0 */ // 0x805B96BC
    *(0x14 + r1) = r0; // stw @ 0x805B96C0
    *(0xc + r1) = r31; // stw @ 0x805B96C4
    r31 = r3;
    r3 = r5 + 0; // 0x805B96CC
    /* li r5, 1 */ // 0x805B96D0
    FUN_805E3430(r3, r5); // bl 0x805E3430
}