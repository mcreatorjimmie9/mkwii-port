/* Function at 0x805A3944, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_805A3944(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* li r6, 0 */ // 0x805A394C
    *(0x34 + r1) = r0; // stw @ 0x805A3950
    /* stmw r25, 0x14(r1) */ // 0x805A3954
    /* li r29, 0 */ // 0x805A3958
    r5 = *(4 + r3); // lwz @ 0x805A395C
    r7 = *(0 + r5); // lwz @ 0x805A3960
    r0 = *(8 + r7); // lhz @ 0x805A3964
    /* mtctr r0 */ // 0x805A3968
    if (<=) goto 0x0x805a39a0;
    r0 = *(0xa + r7); // lhz @ 0x805A3974
    r3 = *(4 + r5); // lwz @ 0x805A3978
    r0 = r7 + r0; // 0x805A397C
    /* lwzx r3, r3, r6 */ // 0x805A3980
    /* lwzux r0, r3, r0 */ // 0x805A3984
    if (!=) goto 0x0x805a3998;
    r29 = r3;
    /* b 0x805a39a0 */ // 0x805A3994
    r6 = r6 + 4; // 0x805A3998
    if (counter-- != 0) goto 0x0x805a3974;
    /* li r25, 0 */ // 0x805A39A4
    if (==) goto 0x0x805a3a54;
    /* li r3, 0xc */ // 0x805A39AC
    FUN_805E3430(r3); // bl 0x805E3430
    r25 = r3;
    if (==) goto 0x0x805a3a54;
    /* li r0, 0 */ // 0x805A39C0
    *(0 + r3) = r0; // stw @ 0x805A39C4
    r26 = r29 + 8; // 0x805A39C8
}