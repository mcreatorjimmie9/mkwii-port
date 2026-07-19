/* Function at 0x808602EC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808602EC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80860300
    r30 = r3;
    r5 = *(0x14 + r3); // lwz @ 0x80860308
    r0 = *(4 + r5); // lwz @ 0x8086030C
    if (!=) goto 0x0x80860320;
    r3 = *(0 + r5); // lwz @ 0x80860318
    /* b 0x80860324 */ // 0x8086031C
    /* li r3, 0 */ // 0x80860320
    r4 = r31;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}