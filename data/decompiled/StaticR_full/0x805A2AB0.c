/* Function at 0x805A2AB0, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A2AB0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A2AB8
    /* li r31, 0 */ // 0x805A2AC4
    *(0x18 + r1) = r30; // stw @ 0x805A2AC8
    *(0x14 + r1) = r29; // stw @ 0x805A2ACC
    *(0x10 + r1) = r28; // stw @ 0x805A2AD0
    r5 = *(4 + r3); // lwz @ 0x805A2AD4
    r7 = *(0 + r5); // lwz @ 0x805A2AD8
    r0 = *(8 + r7); // lhz @ 0x805A2ADC
    /* mtctr r0 */ // 0x805A2AE0
    if (<=) goto 0x0x805a2b18;
    r0 = *(0xa + r7); // lhz @ 0x805A2AEC
    r3 = *(4 + r5); // lwz @ 0x805A2AF0
    r0 = r7 + r0; // 0x805A2AF4
    /* lwzx r3, r3, r6 */ // 0x805A2AF8
    /* lwzux r0, r3, r0 */ // 0x805A2AFC
    if (!=) goto 0x0x805a2b10;
    r31 = r3;
    /* b 0x805a2b18 */ // 0x805A2B0C
    r6 = r6 + 4; // 0x805A2B10
    if (counter-- != 0) goto 0x0x805a2aec;
    /* li r28, 0 */ // 0x805A2B1C
    if (==) goto 0x0x805a2bac;
    /* li r3, 0xc */ // 0x805A2B24
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a2bac;
    /* li r0, 0 */ // 0x805A2B38
    *(0 + r3) = r0; // stw @ 0x805A2B3C
    r29 = r31 + 8; // 0x805A2B40
    *(4 + r3) = r0; // sth @ 0x805A2B44
    *(8 + r3) = r31; // stw @ 0x805A2B48
    r30 = *(4 + r31); // lhz @ 0x805A2B4C
}