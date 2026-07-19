/* Function at 0x806B97B8, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806B97B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B97C8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B97D0
    r30 = r3;
    if (==) goto 0x0x806b9810;
    /* addic. r3, r3, 0x174 */ // 0x806B97DC
    if (==) goto 0x0x806b97ec;
    /* li r4, 0 */ // 0x806B97E4
    FUN_806A0540(r4); // bl 0x806A0540
    if (==) goto 0x0x806b9800;
    r3 = r30;
    /* li r4, 0 */ // 0x806B97F8
    FUN_806A0540(r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x806b9810;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806B9814
    r30 = *(8 + r1); // lwz @ 0x806B9818
    r0 = *(0x14 + r1); // lwz @ 0x806B981C
    return;
}