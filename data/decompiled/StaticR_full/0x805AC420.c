/* Function at 0x805AC420, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805AC420(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0x14 */ // 0x805AC428
    *(0x1c + r1) = r31; // stw @ 0x805AC430
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805AC438
    r30 = r3;
    r3 = r4 + 0x20; // 0x805AC440
    r4 = r30 + 2; // 0x805AC444
    FUN_805E3430(r3, r4); // bl 0x805E3430
}