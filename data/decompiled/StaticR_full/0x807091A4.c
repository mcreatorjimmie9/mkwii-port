/* Function at 0x807091A4, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_807091A4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807091B4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807091BC
    r30 = r3;
    if (==) goto 0x0x8070926c;
    /* li r4, -1 */ // 0x807091C8
    r3 = r3 + 0x29a4; // 0x807091CC
    FUN_8066D714(r4, r3); // bl 0x8066D714
    r3 = r30 + 0x290c; // 0x807091D4
    /* li r4, -1 */ // 0x807091D8
    FUN_8066D714(r4, r3, r3, r4); // bl 0x8066D714
    /* addic. r3, r30, 0x2780 */ // 0x807091E0
    if (==) goto 0x0x807091f0;
    /* li r4, 0 */ // 0x807091E8
    FUN_806A0540(r4, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x251c */ // 0x807091F0
    if (==) goto 0x0x80709200;
    /* li r4, 0 */ // 0x807091F8
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x23a8; // 0x80709200
    /* li r4, -1 */ // 0x80709204
    FUN_806A1428(r4, r3, r4); // bl 0x806A1428
    /* addic. r3, r30, 0x1e70 */ // 0x8070920C
    if (==) goto 0x0x8070921c;
    /* li r4, 0 */ // 0x80709214
    FUN_80699284(r4, r4); // bl 0x80699284
    /* lis r4, 0 */ // 0x8070921C
    r3 = r30 + 0x440; // 0x80709220
    r4 = r4 + 0; // 0x80709224
    /* li r5, 0xd18 */ // 0x80709228
    /* li r6, 2 */ // 0x8070922C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r30, 0x2cc */ // 0x80709234
    if (==) goto 0x0x80709244;
    /* li r4, 0 */ // 0x8070923C
    FUN_806A0540(r6, r4); // bl 0x806A0540
    r3 = r30 + 0xa8; // 0x80709244
    /* li r4, -1 */ // 0x80709248
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
}