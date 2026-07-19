/* Function at 0x80842BFC, size=296 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80842BFC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80842C10
    /* lis r30, 0 */ // 0x80842C14
    r3 = *(0 + r30); // lwz @ 0x80842C18
    r0 = *(0xb70 + r3); // lwz @ 0x80842C1C
    if (!=) goto 0x0x80842c30;
    /* li r3, 1 */ // 0x80842C28
    /* b 0x80842d0c */ // 0x80842C2C
    r4 = r31;
    FUN_805C1470(r3, r4); // bl 0x805C1470
    if (!=) goto 0x0x80842cb8;
    /* extsb r0, r3 */ // 0x80842C40
    if (!=) goto 0x0x80842cb8;
    r6 = *(0 + r30); // lwz @ 0x80842C4C
    /* li r5, 1 */ // 0x80842C50
    r4 = *(0x218 + r6); // lwz @ 0x80842C54
    r4 = r4 + -1; // 0x80842C58
    if (>) goto 0x0x80842c78;
    /* li r0, 1 */ // 0x80842C64
    r0 = r0 << r4; // slw
    /* andi. r0, r0, 0x19 */ // 0x80842C6C
    if (==) goto 0x0x80842c78;
    /* li r5, 0 */ // 0x80842C74
    if (==) goto 0x0x80842cb8;
    r4 = *(0x308 + r6); // lwz @ 0x80842C80
    /* li r5, 1 */ // 0x80842C84
    r4 = r4 + -1; // 0x80842C88
    if (>) goto 0x0x80842ca8;
    /* li r0, 1 */ // 0x80842C94
    r0 = r0 << r4; // slw
    /* andi. r0, r0, 0x19 */ // 0x80842C9C
    if (==) goto 0x0x80842ca8;
    /* li r5, 0 */ // 0x80842CA4
    if (!=) goto 0x0x80842cb8;
    /* li r3, 0 */ // 0x80842CB0
    /* b 0x80842d0c */ // 0x80842CB4
    /* lis r4, 0 */ // 0x80842CB8
    /* li r5, 1 */ // 0x80842CBC
    /* mulli r0, r31, 0xf0 */ // 0x80842CC0
    r4 = *(0 + r4); // lwz @ 0x80842CC4
    /* li r6, 1 */ // 0x80842CC8
    r4 = r4 + r0; // 0x80842CCC
    r4 = *(0x38 + r4); // lwz @ 0x80842CD0
    r4 = r4 + -1; // 0x80842CD4
    if (>) goto 0x0x80842cf4;
    /* li r0, 1 */ // 0x80842CE0
    r0 = r0 << r4; // slw
    /* andi. r0, r0, 0x19 */ // 0x80842CE8
    if (==) goto 0x0x80842cf4;
    /* li r6, 0 */ // 0x80842CF0
    if (!=) goto 0x0x80842d08;
    /* extsb. r0, r3 */ // 0x80842CFC
    if (>=) goto 0x0x80842d08;
    /* li r5, 0 */ // 0x80842D04
    r3 = r5;
    r0 = *(0x14 + r1); // lwz @ 0x80842D0C
    r31 = *(0xc + r1); // lwz @ 0x80842D10
    r30 = *(8 + r1); // lwz @ 0x80842D14
    return;
}