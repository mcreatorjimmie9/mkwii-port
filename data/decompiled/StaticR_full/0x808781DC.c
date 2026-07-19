/* Function at 0x808781DC, size=144 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808781DC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0xc8 + r1) = r30; // stw @ 0x808781F4
    r4 = r31;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r3, 0 */ // 0x80878200
    /* li r0, 0xf */ // 0x80878204
    r3 = r3 + 0; // 0x80878208
    r4 = r3 + -4; // 0x80878210
    /* mtctr r0 */ // 0x80878214
    r3 = *(4 + r4); // lwz @ 0x80878218
    r0 = *(8 + r4); // lwzu @ 0x8087821C
    *(4 + r5) = r3; // stw @ 0x80878220
    *(8 + r5) = r0; // stwu @ 0x80878224
    if (counter-- != 0) goto 0x0x80878218;
    r0 = *(4 + r4); // lwz @ 0x8087822C
    /* lis r4, 0 */ // 0x80878230
    *(4 + r5) = r0; // stw @ 0x80878234
    /* lis r5, 0 */ // 0x80878238
    r4 = r4 + 0; // 0x8087823C
    r7 = *(0 + r5); // lwz @ 0x80878244
    r5 = r4 + 0x6f; // 0x80878248
    /* li r4, 0x10 */ // 0x8087824C
    /* li r6, 4 */ // 0x80878250
    r0 = *(0x27 + r7); // lbz @ 0x80878254
    if (==) goto 0x0x80878264;
    r6 = r0;
    /* crclr cr1eq */ // 0x80878264
    FUN_805E3430(r6); // bl 0x805E3430
}