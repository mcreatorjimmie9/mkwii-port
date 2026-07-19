/* Function at 0x806BC22C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806BC22C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806BC23C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806BC244
    r30 = r3;
    if (==) goto 0x0x806bc294;
    /* addic. r3, r3, 0x1c8 */ // 0x806BC250
    if (==) goto 0x0x806bc260;
    /* li r4, 0 */ // 0x806BC258
    FUN_806A0540(r4); // bl 0x806A0540
    r3 = r30 + 0x54; // 0x806BC260
    /* li r4, -1 */ // 0x806BC264
    FUN_806A0540(r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x806BC26C
    /* li r4, -1 */ // 0x806BC270
    FUN_80668158(r3, r4, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806BC27C
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806bc294;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806BC298
    r30 = *(8 + r1); // lwz @ 0x806BC29C
    r0 = *(0x14 + r1); // lwz @ 0x806BC2A0
    return;
}