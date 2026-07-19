/* Function at 0x807328FC, size=288 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807328FC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80732904
    /* li r6, 1 */ // 0x80732908
    *(0x14 + r1) = r0; // stw @ 0x8073290C
    /* li r7, 1 */ // 0x80732910
    *(0xc + r1) = r31; // stw @ 0x80732914
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8073291C
    r30 = r3;
    r4 = *(0x614 + r3); // lwz @ 0x80732924
    FUN_807315F0(); // bl 0x807315F0
    r0 = *(0xe + r30); // lbz @ 0x8073292C
    if (==) goto 0x0x80732a04;
    if (!=) goto 0x0x807329a0;
    r0 = *(0x7ba + r30); // lbz @ 0x80732940
    r4 = *(0x614 + r30); // lwz @ 0x80732944
    if (!=) goto 0x0x80732960;
    r3 = *(0x84 + r30); // lwz @ 0x80732950
    r0 = *(0xae0 + r30); // lbz @ 0x80732954
    if (>=) goto 0x0x80732980;
    r3 = r30;
    r7 = r30 + 0x6f4; // 0x80732964
    r8 = r30 + 0x7c8; // 0x80732968
    /* li r5, 0x1a */ // 0x8073296C
    /* li r6, 0x1b */ // 0x80732970
    /* li r9, 1 */ // 0x80732974
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80732a04 */ // 0x8073297C
    r3 = r30;
    r7 = r30 + 0x6f4; // 0x80732984
    r8 = r30 + 0x7c8; // 0x80732988
    /* li r5, 0x1a */ // 0x8073298C
    /* li r6, 0x1b */ // 0x80732990
    /* li r9, 1 */ // 0x80732994
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    /* b 0x80732a04 */ // 0x8073299C
    if (!=) goto 0x0x80732a04;
    r0 = *(0x7ba + r30); // lbz @ 0x807329A8
    r4 = *(0x614 + r30); // lwz @ 0x807329AC
    if (!=) goto 0x0x807329c8;
    r3 = *(0x84 + r30); // lwz @ 0x807329B8
    r0 = *(0xae0 + r30); // lbz @ 0x807329BC
    if (>=) goto 0x0x807329e8;
    r3 = r30;
    r7 = r30 + 0x6f4; // 0x807329CC
    r8 = r30 + 0x7c8; // 0x807329D0
    /* li r5, 0x1b */ // 0x807329D4
    /* li r6, 0x1c */ // 0x807329D8
    /* li r9, 1 */ // 0x807329DC
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80732a04 */ // 0x807329E4
    r3 = r30;
    r7 = r30 + 0x6f4; // 0x807329EC
    r8 = r30 + 0x7c8; // 0x807329F0
    /* li r5, 0x1b */ // 0x807329F4
    /* li r6, 0x1c */ // 0x807329F8
    /* li r9, 1 */ // 0x807329FC
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80732A04
    r31 = *(0xc + r1); // lwz @ 0x80732A08
    r30 = *(8 + r1); // lwz @ 0x80732A0C
    return;
}