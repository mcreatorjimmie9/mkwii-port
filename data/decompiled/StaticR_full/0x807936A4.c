/* Function at 0x807936A4, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807936A4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x807936B0
    *(0x14 + r1) = r0; // stw @ 0x807936B4
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x807936BC
    r0 = *(0x84 + r3); // lwz @ 0x807936C0
    /* mtctr r0 */ // 0x807936C4
    if (<=) goto 0x0x807936f8;
    r0 = *(0x80 + r6); // lwz @ 0x807936D0
    if (!=) goto 0x0x807936ec;
    /* slwi r0, r4, 2 */ // 0x807936DC
    r4 = r3 + r0; // 0x807936E0
    r31 = r4 + 0x80; // 0x807936E4
    /* b 0x807936fc */ // 0x807936E8
    r6 = r6 + 4; // 0x807936EC
    r4 = r4 + 1; // 0x807936F0
    if (counter-- != 0) goto 0x0x807936d0;
    /* li r31, 0 */ // 0x807936F8
    if (==) goto 0x0x80793718;
    r4 = r31;
    /* li r6, 0 */ // 0x80793708
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8079371c */ // 0x80793714
    /* li r3, 0 */ // 0x80793718
    r0 = *(0x14 + r1); // lwz @ 0x8079371C
    r31 = *(0xc + r1); // lwz @ 0x80793720
}