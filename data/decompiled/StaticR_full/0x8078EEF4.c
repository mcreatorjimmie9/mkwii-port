/* Function at 0x8078EEF4, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078EEF4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x8078EF00
    *(0x14 + r1) = r0; // stw @ 0x8078EF04
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x8078EF0C
    r0 = *(0x90 + r3); // lwz @ 0x8078EF10
    /* mtctr r0 */ // 0x8078EF14
    if (<=) goto 0x0x8078ef48;
    r0 = *(0x80 + r6); // lwz @ 0x8078EF20
    if (!=) goto 0x0x8078ef3c;
    /* slwi r0, r4, 2 */ // 0x8078EF2C
    r4 = r3 + r0; // 0x8078EF30
    r31 = r4 + 0x80; // 0x8078EF34
    /* b 0x8078ef4c */ // 0x8078EF38
    r6 = r6 + 4; // 0x8078EF3C
    r4 = r4 + 1; // 0x8078EF40
    if (counter-- != 0) goto 0x0x8078ef20;
    /* li r31, 0 */ // 0x8078EF48
    if (==) goto 0x0x8078ef68;
    r4 = r31;
    /* li r6, 0 */ // 0x8078EF58
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078ef6c */ // 0x8078EF64
    /* li r3, 0 */ // 0x8078EF68
    r0 = *(0x14 + r1); // lwz @ 0x8078EF6C
    r31 = *(0xc + r1); // lwz @ 0x8078EF70
}