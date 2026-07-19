/* Function at 0x8085C51C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8085C51C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* addic. r0, r3, 0x144 */ // 0x8085C528
    *(0xc + r1) = r31; // stw @ 0x8085C52C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8085C534
    r30 = r3;
    if (==) goto 0x0x8085c54c;
    r3 = *(0 + r4); // lwz @ 0x8085C540
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r30 + 0x144; // 0x8085C54C
    r4 = r30 + 0x204; // 0x8085C550
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}