/* Function at 0x8078F710, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078F710(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x8078F71C
    *(0x14 + r1) = r0; // stw @ 0x8078F720
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x8078F728
    r0 = *(0x90 + r3); // lwz @ 0x8078F72C
    /* mtctr r0 */ // 0x8078F730
    if (<=) goto 0x0x8078f764;
    r0 = *(0x80 + r6); // lwz @ 0x8078F73C
    if (!=) goto 0x0x8078f758;
    /* slwi r0, r4, 2 */ // 0x8078F748
    r4 = r3 + r0; // 0x8078F74C
    r31 = r4 + 0x80; // 0x8078F750
    /* b 0x8078f768 */ // 0x8078F754
    r6 = r6 + 4; // 0x8078F758
    r4 = r4 + 1; // 0x8078F75C
    if (counter-- != 0) goto 0x0x8078f73c;
    /* li r31, 0 */ // 0x8078F764
    if (==) goto 0x0x8078f784;
    r4 = r31;
    /* li r6, 0 */ // 0x8078F774
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f788 */ // 0x8078F780
    /* li r3, 0 */ // 0x8078F784
    r0 = *(0x14 + r1); // lwz @ 0x8078F788
    r31 = *(0xc + r1); // lwz @ 0x8078F78C
}