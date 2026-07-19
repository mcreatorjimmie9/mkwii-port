/* Function at 0x8066DBB8, size=388 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r17 */
/* Calls: 4 function(s) */

int FUN_8066DBB8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -144(r1) */
    /* saved r17 */
    *(0x94 + r1) = r0; // stw @ 0x8066DBC4
    /* stmw r17, 0x54(r1) */ // 0x8066DBC8
    r19 = r3;
    r18 = r4;
    r20 = r5;
    if (!=) goto 0x0x8066dbe4;
    FUN_8066E240(); // bl 0x8066E240
    /* b 0x8066dd28 */ // 0x8066DBE0
    r3 = *(4 + r3); // lwz @ 0x8066DBE4
    /* slwi r17, r4, 2 */ // 0x8066DBE8
    /* lwzx r3, r3, r17 */ // 0x8066DBEC
    if (==) goto 0x0x8066dc10;
    if (==) goto 0x0x8066dc10;
    r12 = *(0 + r3); // lwz @ 0x8066DBFC
    /* li r4, 1 */ // 0x8066DC00
    r12 = *(8 + r12); // lwz @ 0x8066DC04
    /* mtctr r12 */ // 0x8066DC08
    /* bctrl  */ // 0x8066DC0C
    r3 = *(4 + r19); // lwz @ 0x8066DC10
    /* mulli r23, r18, 0x24 */ // 0x8066DC14
    /* lis r28, 0 */ // 0x8066DC18
    /* li r21, 0 */ // 0x8066DC1C
    /* stwx r20, r3, r17 */ // 0x8066DC20
    /* lis r24, 0 */ // 0x8066DC24
    r28 = r28 + 0; // 0x8066DC28
    r31 = r21;
    r24 = r24 + 0; // 0x8066DC34
    /* li r18, 0 */ // 0x8066DC38
    /* li r17, 0 */ // 0x8066DC3C
    /* lis r29, 0 */ // 0x8066DC40
    /* li r25, 9 */ // 0x8066DC44
    /* lis r27, 0 */ // 0x8066DC48
    /* li r30, 1 */ // 0x8066DC4C
    r22 = r19 + r17; // 0x8066DC50
    r0 = *(8 + r22); // lwz @ 0x8066DC54
    if (==) goto 0x0x8066dd10;
    r5 = r24 + -4; // 0x8066DC64
    /* mtctr r25 */ // 0x8066DC68
    r4 = *(4 + r5); // lwz @ 0x8066DC6C
    r3 = *(8 + r5); // lwzu @ 0x8066DC70
    *(4 + r6) = r4; // stw @ 0x8066DC74
    *(8 + r6) = r3; // stwu @ 0x8066DC78
    if (counter-- != 0) goto 0x0x8066dc6c;
    r4 = *(0x9c + r20); // lwz @ 0x8066DC80
    r3 = *(0 + r27); // lwz @ 0x8066DC84
    /* srwi r4, r4, 0x1f */ // 0x8066DC88
    r5 = *(0xa8 + r20); // lwz @ 0x8066DC8C
    r3 = *(0 + r3); // lwz @ 0x8066DC90
    /* mulli r4, r4, 0x24 */ // 0x8066DC94
    r3 = *(0x38f + r3); // lbz @ 0x8066DC98
    /* mulli r5, r5, 0xc */ // 0x8066DC9C
    r4 = r26 + r4; // 0x8066DCA0
    /* lwzx r6, r5, r4 */ // 0x8066DCA8
    if (==) goto 0x0x8066dce0;
    r4 = r28 + r18; // 0x8066DCB0
    r3 = *(0 + r29); // lwz @ 0x8066DCB4
    r7 = *(8 + r4); // lwz @ 0x8066DCB8
    r5 = r20;
    r8 = *(4 + r4); // lwz @ 0x8066DCC0
    r9 = *(0xc + r4); // lbz @ 0x8066DCC4
    r4 = r0 + r23; // 0x8066DCC8
    FUN_807FF804(r5); // bl 0x807FF804
    r0 = *(8 + r22); // lwz @ 0x8066DCD0
    r3 = r23 + r0; // 0x8066DCD4
    *(0x20 + r3) = r30; // stb @ 0x8066DCD8
    /* b 0x8066dd10 */ // 0x8066DCDC
    r3 = r23 + r0; // 0x8066DCE0
    r7 = r28 + r18; // 0x8066DCE4
    *(0x20 + r3) = r31; // stb @ 0x8066DCE8
    r5 = r20;
    r8 = *(8 + r7); // lwz @ 0x8066DCF0
    r0 = *(8 + r22); // lwz @ 0x8066DCF4
    r3 = *(0 + r29); // lwz @ 0x8066DCF8
    r4 = r0 + r23; // 0x8066DCFC
    r9 = *(4 + r7); // lwz @ 0x8066DD00
    r10 = *(0xc + r7); // lbz @ 0x8066DD04
    r7 = r4 + 0x20; // 0x8066DD08
    FUN_808008D0(r7); // bl 0x808008D0
    r21 = r21 + 1; // 0x8066DD10
    if (<) goto 0x0x8066dc50;
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x94 + r1); // lwz @ 0x8066DD2C
    return;
}