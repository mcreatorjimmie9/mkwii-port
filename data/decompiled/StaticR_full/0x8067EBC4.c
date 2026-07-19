/* Function at 0x8067EBC4, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8067EBC4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8067EBD0
    *(0xc + r1) = r31; // stw @ 0x8067EBD4
    r31 = r3;
    if (>) goto 0x0x8067ec34;
    r0 = *(0x524 + r3); // lwz @ 0x8067EBE0
    r5 = r31;
    /* li r6, -1 */ // 0x8067EBE8
    /* li r7, 0 */ // 0x8067EBEC
    /* mtctr r0 */ // 0x8067EBF0
    if (<=) goto 0x0x8067ec1c;
    r0 = *(0x1b7c + r5); // lwz @ 0x8067EBFC
    if (!=) goto 0x0x8067ec10;
    r6 = r7;
    /* b 0x8067ec1c */ // 0x8067EC0C
    r5 = r5 + 4; // 0x8067EC10
    r7 = r7 + 1; // 0x8067EC14
    if (counter-- != 0) goto 0x0x8067ebfc;
    r4 = r6;
    /* li r5, 1 */ // 0x8067EC20
    r3 = r3 + 0x31c; // 0x8067EC24
    FUN_806A1D78(r7, r4, r5, r3); // bl 0x806A1D78
    /* li r0, 0 */ // 0x8067EC2C
    *(0x1c25 + r31) = r0; // stb @ 0x8067EC30
    r0 = *(0x14 + r1); // lwz @ 0x8067EC34
    r31 = *(0xc + r1); // lwz @ 0x8067EC38
    return;
}