/* Function at 0x807C6220, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_807C6220(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807C622C
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    /* li r30, 0 */ // 0x807C6240
    /* b 0x807c62c4 */ // 0x807C6244
    if (==) goto 0x0x807c6264;
    if (==) goto 0x0x807c6278;
    if (==) goto 0x0x807c628c;
    /* b 0x807c629c */ // 0x807C6260
    r3 = r26;
    /* li r4, -1 */ // 0x807C6268
    FUN_807C63D0(r3, r4); // bl 0x807C63D0
    r31 = r3;
    /* b 0x807c629c */ // 0x807C6274
    r3 = r26;
    /* li r4, -1 */ // 0x807C627C
    FUN_807C64A0(r3, r4); // bl 0x807C64A0
    r31 = r3;
    /* b 0x807c629c */ // 0x807C6288
    r3 = r26;
    /* li r4, -1 */ // 0x807C6290
    FUN_807C656C(r3, r4); // bl 0x807C656C
    r31 = r3;
    if (==) goto 0x0x807c62c0;
    *(8 + r31) = r27; // stw @ 0x807C62A4
    r3 = r27;
    r4 = r31;
    r12 = *(0 + r27); // lwz @ 0x807C62B0
    r12 = *(0x18 + r12); // lwz @ 0x807C62B4
    /* mtctr r12 */ // 0x807C62B8
    /* bctrl  */ // 0x807C62BC
    r30 = r30 + 1; // 0x807C62C0
    if (<) goto 0x0x807c6248;
    r0 = *(0x24 + r1); // lwz @ 0x807C62D0
    return;
}