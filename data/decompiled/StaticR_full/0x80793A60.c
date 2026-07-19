/* Function at 0x80793A60, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80793A60(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x80793A6C
    *(0x14 + r1) = r0; // stw @ 0x80793A70
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x80793A78
    r0 = *(0x88 + r3); // lwz @ 0x80793A7C
    /* mtctr r0 */ // 0x80793A80
    if (<=) goto 0x0x80793ab4;
    r0 = *(0x80 + r6); // lwz @ 0x80793A8C
    if (!=) goto 0x0x80793aa8;
    /* slwi r0, r4, 2 */ // 0x80793A98
    r4 = r3 + r0; // 0x80793A9C
    r31 = r4 + 0x80; // 0x80793AA0
    /* b 0x80793ab8 */ // 0x80793AA4
    r6 = r6 + 4; // 0x80793AA8
    r4 = r4 + 1; // 0x80793AAC
    if (counter-- != 0) goto 0x0x80793a8c;
    /* li r31, 0 */ // 0x80793AB4
    if (==) goto 0x0x80793ad4;
    r4 = r31;
    /* li r6, 0 */ // 0x80793AC4
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793ad8 */ // 0x80793AD0
    /* li r3, 0 */ // 0x80793AD4
    r0 = *(0x14 + r1); // lwz @ 0x80793AD8
    r31 = *(0xc + r1); // lwz @ 0x80793ADC
}