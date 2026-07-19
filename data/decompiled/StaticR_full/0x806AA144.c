/* Function at 0x806AA144, size=368 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806AA144(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806AA14C
    *(0xc + r1) = r31; // stw @ 0x806AA154
    *(8 + r1) = r30; // stw @ 0x806AA158
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x806AA160
    r3 = *(0 + r3); // lwz @ 0x806AA164
    r3 = *(0x218 + r3); // lwz @ 0x806AA168
    if (==) goto 0x0x806aa1a8;
    /* lis r31, 0 */ // 0x806AA174
    r31 = r31 + 0; // 0x806AA178
    if (==) goto 0x0x806aa1a8;
    r12 = *(0 + r3); // lwz @ 0x806AA180
    r12 = *(0x60 + r12); // lwz @ 0x806AA184
    /* mtctr r12 */ // 0x806AA188
    /* bctrl  */ // 0x806AA18C
    /* b 0x806aa1a0 */ // 0x806AA190
    if (==) goto 0x0x806aa1a8;
    r3 = *(0 + r3); // lwz @ 0x806AA19C
    if (!=) goto 0x0x806aa194;
    /* lis r3, 0 */ // 0x806AA1A8
    r3 = *(0 + r3); // lwz @ 0x806AA1AC
    r3 = *(0 + r3); // lwz @ 0x806AA1B0
    r0 = *(0 + r3); // lwz @ 0x806AA1B4
    if (==) goto 0x0x806aa26c;
    if (>=) goto 0x0x806aa204;
    if (>=) goto 0x0x806aa1ec;
    if (>=) goto 0x0x806aa1e0;
    if (>=) goto 0x0x806aa23c;
    /* b 0x806aa26c */ // 0x806AA1DC
    if (>=) goto 0x0x806aa244;
    /* b 0x806aa26c */ // 0x806AA1E8
    if (==) goto 0x0x806aa26c;
    if (>=) goto 0x0x806aa25c;
    if (>=) goto 0x0x806aa254;
    /* b 0x806aa26c */ // 0x806AA200
    if (>=) goto 0x0x806aa224;
    if (==) goto 0x0x806aa264;
    if (>=) goto 0x0x806aa26c;
    if (>=) goto 0x0x806aa26c;
    /* b 0x806aa24c */ // 0x806AA220
    if (==) goto 0x0x806aa24c;
    if (>=) goto 0x0x806aa26c;
    if (>=) goto 0x0x806aa26c;
    /* b 0x806aa254 */ // 0x806AA238
    /* li r4, 0x7f1 */ // 0x806AA23C
    /* b 0x806aa270 */ // 0x806AA240
    /* li r4, 0x7f2 */ // 0x806AA244
    /* b 0x806aa270 */ // 0x806AA248
    /* li r4, 0x13ba */ // 0x806AA24C
    /* b 0x806aa270 */ // 0x806AA250
    /* li r4, 0 */ // 0x806AA254
    /* b 0x806aa270 */ // 0x806AA258
    /* li r4, 0xfa3 */ // 0x806AA25C
    /* b 0x806aa270 */ // 0x806AA260
    /* li r4, 0x19cd */ // 0x806AA264
    /* b 0x806aa270 */ // 0x806AA268
    /* li r4, 0 */ // 0x806AA26C
    r3 = r30 + 0x2a4; // 0x806AA270
    /* li r5, 0 */ // 0x806AA274
    FUN_806A0A34(r4, r4, r3, r5); // bl 0x806A0A34
    r0 = *(0x10 + r30); // lwz @ 0x806AA27C
    /* li r3, 2 */ // 0x806AA280
    *(0xc98 + r30) = r3; // stw @ 0x806AA284
    if (!=) goto 0x0x806aa29c;
    r3 = r30 + 0x7e0; // 0x806AA290
    /* li r4, 0 */ // 0x806AA294
    FUN_80649EEC(r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806AA29C
    r31 = *(0xc + r1); // lwz @ 0x806AA2A0
    r30 = *(8 + r1); // lwz @ 0x806AA2A4
    return;
}