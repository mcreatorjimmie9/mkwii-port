/* Function at 0x80703CBC, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80703CBC(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 2 */ // 0x80703CC4
    *(0x14 + r1) = r0; // stw @ 0x80703CC8
    /* li r0, 0 */ // 0x80703CCC
    *(0xc + r1) = r31; // stw @ 0x80703CD0
    r31 = r3;
    *(0x10 + r3) = r4; // stw @ 0x80703CD8
    *(0 + r3) = r5; // stw @ 0x80703CDC
    *(4 + r3) = r0; // stw @ 0x80703CE0
    FUN_805E3430(); // bl 0x805E3430
}