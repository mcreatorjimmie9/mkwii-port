/* Function at 0x80706BB4, size=172 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 2 function(s) */

int FUN_80706BB4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r11, 0 */ // 0x80706BBC
    *(0x34 + r1) = r0; // stw @ 0x80706BC0
    /* stmw r23, 0xc(r1) */ // 0x80706BC4
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r23 = r7;
    r24 = r8;
    r27 = r9;
    r26 = r10;
    r0 = *(0 + r11); // lwz @ 0x80706BE8
    if (!=) goto 0x0x80706c30;
    /* lis r3, 0 */ // 0x80706BF4
    r0 = *(0 + r3); // lbz @ 0x80706BF8
    /* extsb. r0, r0 */ // 0x80706BFC
    if (!=) goto 0x0x80706c28;
    /* lis r4, 0 */ // 0x80706C04
    /* lis r6, 0 */ // 0x80706C08
    r4 = r4 + 0; // 0x80706C0C
    r3 = r3 + 0; // 0x80706C10
    r5 = r4 + 0x5e0; // 0x80706C14
    r6 = r6 + 0; // 0x80706C18
    /* li r4, 0x80 */ // 0x80706C1C
    /* crclr cr1eq */ // 0x80706C20
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x80706C28
    /* b 0x80706c34 */ // 0x80706C2C
    /* li r0, 0 */ // 0x80706C30
    if (!=) goto 0x0x80706c44;
    /* li r3, 0x6a */ // 0x80706C3C
    /* b 0x80706dc4 */ // 0x80706C40
    /* li r3, 8 */ // 0x80706C44
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r25 = r3;
    if (!=) goto 0x0x80706c60;
    /* li r3, 0x68 */ // 0x80706C58
    /* b 0x80706dc4 */ // 0x80706C5C
}