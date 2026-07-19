/* Function at 0x80731550, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80731550(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80731558
    /* li r6, 1 */ // 0x8073155C
    *(0x14 + r1) = r0; // stw @ 0x80731560
    /* li r7, 0 */ // 0x80731564
    *(0xc + r1) = r31; // stw @ 0x80731568
    r31 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x80731570
    FUN_80731780(r7); // bl 0x80731780
    r4 = *(0x530 + r31); // lwz @ 0x80731578
    r3 = r31;
    /* li r5, 1 */ // 0x80731580
    /* li r6, 2 */ // 0x80731584
    /* li r7, 1 */ // 0x80731588
    FUN_80731780(r3, r5, r6, r7); // bl 0x80731780
    r0 = *(0xe + r31); // lbz @ 0x80731590
    if (==) goto 0x0x807315dc;
    r4 = *(0x530 + r31); // lwz @ 0x8073159C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x807315A4
    r8 = r31 + 0x7bc; // 0x807315A8
    /* li r5, 0x20 */ // 0x807315AC
    /* li r6, 0x21 */ // 0x807315B0
    /* li r9, 1 */ // 0x807315B4
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r4 = *(0x530 + r31); // lwz @ 0x807315BC
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x807315C4
    r8 = r31 + 0x7c8; // 0x807315C8
    /* li r5, 0x21 */ // 0x807315CC
    /* li r6, 0x22 */ // 0x807315D0
    /* li r9, 1 */ // 0x807315D4
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x807315DC
    r31 = *(0xc + r1); // lwz @ 0x807315E0
    return;
}