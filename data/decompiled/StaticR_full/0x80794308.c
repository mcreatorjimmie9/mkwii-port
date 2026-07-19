/* Function at 0x80794308, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80794308(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x80794314
    *(0x14 + r1) = r0; // stw @ 0x80794318
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x80794320
    r0 = *(0x88 + r3); // lwz @ 0x80794324
    /* mtctr r0 */ // 0x80794328
    if (<=) goto 0x0x8079435c;
    r0 = *(0x80 + r6); // lwz @ 0x80794334
    if (!=) goto 0x0x80794350;
    /* slwi r0, r4, 2 */ // 0x80794340
    r4 = r3 + r0; // 0x80794344
    r31 = r4 + 0x80; // 0x80794348
    /* b 0x80794360 */ // 0x8079434C
    r6 = r6 + 4; // 0x80794350
    r4 = r4 + 1; // 0x80794354
    if (counter-- != 0) goto 0x0x80794334;
    /* li r31, 0 */ // 0x8079435C
    if (==) goto 0x0x8079437c;
    r4 = r31;
    /* li r6, 0 */ // 0x8079436C
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80794380 */ // 0x80794378
    /* li r3, 0 */ // 0x8079437C
    r0 = *(0x14 + r1); // lwz @ 0x80794380
    r31 = *(0xc + r1); // lwz @ 0x80794384
}