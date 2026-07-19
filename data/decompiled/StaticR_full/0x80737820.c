/* Function at 0x80737820, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80737820(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8073782C
    r31 = r3;
    r4 = *(0x28c + r3); // lwz @ 0x80737834
    if (==) goto 0x0x80737890;
    r3 = r4 + 0x74; // 0x80737840
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80737858;
    /* li r3, 0 */ // 0x80737850
    /* b 0x8073785c */ // 0x80737854
    r3 = *(0xc + r3); // lwz @ 0x80737858
}