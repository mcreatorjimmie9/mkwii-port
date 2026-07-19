/* Function at 0x80750FC0, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80750FC0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x80750FD8
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x80750FE0
    r28 = r7;
    FUN_805EF5F0(); // bl 0x805EF5F0
    /* lis r3, 0 */ // 0x80750FEC
    *(0xc + r29) = r28; // stw @ 0x80750FF0
    r3 = r3 + 0; // 0x80750FF4
    /* clrlwi r28, r30, 0x10 */ // 0x80750FF8
    r0 = r3 + 8; // 0x80750FFC
    *(0x10 + r29) = r3; // stw @ 0x80751000
    /* li r30, 0 */ // 0x80751004
    /* li r31, 0 */ // 0x80751008
    *(8 + r29) = r0; // stw @ 0x8075100C
    r0 = *(0 + r29); // lwz @ 0x80751010
    /* li r4, 1 */ // 0x80751014
    r3 = r0 + r31; // 0x80751018
    r3 = *(0x14 + r3); // lwz @ 0x8075101C
    r0 = *(4 + r3); // lwz @ 0x80751020
    if (==) goto 0x0x80751038;
    if (==) goto 0x0x80751038;
    /* li r4, 0 */ // 0x80751034
    if (==) goto 0x0x80751048;
    r3 = *(0 + r3); // lwz @ 0x80751040
    /* b 0x8075104c */ // 0x80751044
    /* li r3, 0 */ // 0x80751048
    *(0x122 + r3) = r28; // sth @ 0x80751050
    r4 = r29;
    if (==) goto 0x0x80751060;
    r4 = r29 + 8; // 0x8075105C
    r0 = *(0 + r29); // lwz @ 0x80751060
    /* li r5, 1 */ // 0x80751064
    r3 = r0 + r31; // 0x80751068
    r3 = *(0x14 + r3); // lwz @ 0x8075106C
    r0 = *(4 + r3); // lwz @ 0x80751070
    if (==) goto 0x0x80751088;
    if (==) goto 0x0x80751088;
    /* li r5, 0 */ // 0x80751084
    if (==) goto 0x0x80751098;
    r3 = *(0 + r3); // lwz @ 0x80751090
    /* b 0x8075109c */ // 0x80751094
    /* li r3, 0 */ // 0x80751098
    *(0x11c + r3) = r4; // stw @ 0x8075109C
    /* li r4, 1 */ // 0x807510A0
    r0 = *(0 + r29); // lwz @ 0x807510A4
    r3 = r0 + r31; // 0x807510A8
    r3 = *(0x14 + r3); // lwz @ 0x807510AC
    r0 = *(4 + r3); // lwz @ 0x807510B0
    if (==) goto 0x0x807510c8;
    if (==) goto 0x0x807510c8;
    /* li r4, 0 */ // 0x807510C4
    if (==) goto 0x0x807510d8;
    r3 = *(0 + r3); // lwz @ 0x807510D0
    /* b 0x807510dc */ // 0x807510D4
    /* li r3, 0 */ // 0x807510D8
    /* li r4, 2 */ // 0x807510DC
    FUN_805E3430(r3, r4); // bl 0x805E3430
}