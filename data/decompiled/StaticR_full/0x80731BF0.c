/* Function at 0x80731BF0, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80731BF0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80731BFC
    r31 = r3;
    r0 = *(0x7b9 + r3); // lbz @ 0x80731C04
    r4 = *(0x530 + r3); // lwz @ 0x80731C08
    if (!=) goto 0x0x80731c24;
    r5 = *(0x80 + r3); // lwz @ 0x80731C14
    r0 = *(0xae0 + r3); // lbz @ 0x80731C18
    if (>=) goto 0x0x80731c44;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731C28
    r8 = r31 + 0x7bc; // 0x80731C2C
    /* li r5, 6 */ // 0x80731C30
    /* li r6, 8 */ // 0x80731C34
    /* li r9, 1 */ // 0x80731C38
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80731c5c */ // 0x80731C40
    r7 = r3 + 0x6f4; // 0x80731C44
    r8 = r3 + 0x7bc; // 0x80731C48
    /* li r5, 6 */ // 0x80731C4C
    /* li r6, 8 */ // 0x80731C50
    /* li r9, 1 */ // 0x80731C54
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x7ba + r31); // lbz @ 0x80731C5C
    r4 = *(0x530 + r31); // lwz @ 0x80731C60
    if (!=) goto 0x0x80731c7c;
    r3 = *(0x84 + r31); // lwz @ 0x80731C6C
    r0 = *(0xae0 + r31); // lbz @ 0x80731C70
    if (>=) goto 0x0x80731c9c;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731C80
    r8 = r31 + 0x7c8; // 0x80731C84
    /* li r5, 8 */ // 0x80731C88
    /* li r6, 0xa */ // 0x80731C8C
    /* li r9, 1 */ // 0x80731C90
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80731cb8 */ // 0x80731C98
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80731CA0
    r8 = r31 + 0x7c8; // 0x80731CA4
    /* li r5, 8 */ // 0x80731CA8
    /* li r6, 0xa */ // 0x80731CAC
    /* li r9, 1 */ // 0x80731CB0
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80731CB8
    r31 = *(0xc + r1); // lwz @ 0x80731CBC
    return;
}