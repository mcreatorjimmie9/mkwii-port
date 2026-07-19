/* Function at 0x80731988, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80731988(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80731994
    r31 = r3;
    r0 = *(0x7b9 + r3); // lbz @ 0x8073199C
    r4 = *(0x530 + r3); // lwz @ 0x807319A0
    if (!=) goto 0x0x807319bc;
    r5 = *(0x80 + r3); // lwz @ 0x807319AC
    r0 = *(0xae0 + r3); // lbz @ 0x807319B0
    if (>=) goto 0x0x807319dc;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x807319C0
    r8 = r31 + 0x7bc; // 0x807319C4
    /* li r5, 2 */ // 0x807319C8
    /* li r6, 4 */ // 0x807319CC
    /* li r9, 1 */ // 0x807319D0
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x807319f4 */ // 0x807319D8
    r7 = r3 + 0x6f4; // 0x807319DC
    r8 = r3 + 0x7bc; // 0x807319E0
    /* li r5, 2 */ // 0x807319E4
    /* li r6, 4 */ // 0x807319E8
    /* li r9, 1 */ // 0x807319EC
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x7ba + r31); // lbz @ 0x807319F4
    r4 = *(0x530 + r31); // lwz @ 0x807319F8
    if (!=) goto 0x0x80731a14;
    r3 = *(0x84 + r31); // lwz @ 0x80731A04
    r0 = *(0xae0 + r31); // lbz @ 0x80731A08
    if (>=) goto 0x0x80731a34;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731A18
    r8 = r31 + 0x7c8; // 0x80731A1C
    /* li r5, 4 */ // 0x80731A20
    /* li r6, 6 */ // 0x80731A24
    /* li r9, 1 */ // 0x80731A28
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80731a50 */ // 0x80731A30
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731A38
    r8 = r31 + 0x7c8; // 0x80731A3C
    /* li r5, 4 */ // 0x80731A40
    /* li r6, 6 */ // 0x80731A44
    /* li r9, 1 */ // 0x80731A48
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80731A50
    r31 = *(0xc + r1); // lwz @ 0x80731A54
    return;
}