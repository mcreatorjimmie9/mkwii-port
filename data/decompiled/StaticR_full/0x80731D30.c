/* Function at 0x80731D30, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80731D30(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80731D3C
    r31 = r3;
    r0 = *(0x7b9 + r3); // lbz @ 0x80731D44
    r4 = *(0x530 + r3); // lwz @ 0x80731D48
    if (!=) goto 0x0x80731d64;
    r5 = *(0x80 + r3); // lwz @ 0x80731D54
    r0 = *(0xae0 + r3); // lbz @ 0x80731D58
    if (>=) goto 0x0x80731d84;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731D68
    r8 = r31 + 0x7bc; // 0x80731D6C
    /* li r5, 0x16 */ // 0x80731D70
    /* li r6, 0x17 */ // 0x80731D74
    /* li r9, 1 */ // 0x80731D78
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80731d9c */ // 0x80731D80
    r7 = r3 + 0x6f4; // 0x80731D84
    r8 = r3 + 0x7bc; // 0x80731D88
    /* li r5, 0x16 */ // 0x80731D8C
    /* li r6, 0x17 */ // 0x80731D90
    /* li r9, 1 */ // 0x80731D94
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x7ba + r31); // lbz @ 0x80731D9C
    r4 = *(0x530 + r31); // lwz @ 0x80731DA0
    if (!=) goto 0x0x80731dbc;
    r3 = *(0x84 + r31); // lwz @ 0x80731DAC
    r0 = *(0xae0 + r31); // lbz @ 0x80731DB0
    if (>=) goto 0x0x80731ddc;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731DC0
    r8 = r31 + 0x7c8; // 0x80731DC4
    /* li r5, 0x17 */ // 0x80731DC8
    /* li r6, 0x18 */ // 0x80731DCC
    /* li r9, 1 */ // 0x80731DD0
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80731df8 */ // 0x80731DD8
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731DE0
    r8 = r31 + 0x7c8; // 0x80731DE4
    /* li r5, 0x17 */ // 0x80731DE8
    /* li r6, 0x18 */ // 0x80731DEC
    /* li r9, 1 */ // 0x80731DF0
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80731DF8
    r31 = *(0xc + r1); // lwz @ 0x80731DFC
    return;
}