/* Function at 0x806A77D0, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806A77D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A77E0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A77E8
    r30 = r3;
    if (==) goto 0x0x806a7854;
    /* addic. r3, r3, 0x87c */ // 0x806A77F4
    if (==) goto 0x0x806a7804;
    /* li r4, 0 */ // 0x806A77FC
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x628; // 0x806A7804
    /* li r4, -1 */ // 0x806A7808
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x3dc; // 0x806A7810
    /* li r4, -1 */ // 0x806A7814
    FUN_80660AA0(r3, r4, r3, r4); // bl 0x80660AA0
    /* addic. r3, r30, 0x268 */ // 0x806A781C
    if (==) goto 0x0x806a782c;
    /* li r4, 0 */ // 0x806A7824
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x806A782C
    /* li r4, -1 */ // 0x806A7830
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806A783C
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806a7854;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A7858
    r30 = *(8 + r1); // lwz @ 0x806A785C
    r0 = *(0x14 + r1); // lwz @ 0x806A7860
    return;
}