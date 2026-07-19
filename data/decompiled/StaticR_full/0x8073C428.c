/* Function at 0x8073C428, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073C428(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073C438
    r30 = r3;
    r0 = *(0x151 + r3); // lbz @ 0x8073C440
    if (==) goto 0x0x8073c524;
    r3 = *(0x25c + r3); // lwz @ 0x8073C44C
    r3 = r3 + 0x74; // 0x8073C450
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073c468;
    /* li r3, 0 */ // 0x8073C460
    /* b 0x8073c46c */ // 0x8073C464
    r3 = *(0xc + r3); // lwz @ 0x8073C468
}