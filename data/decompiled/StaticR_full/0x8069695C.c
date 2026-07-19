/* Function at 0x8069695C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8069695C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069696C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80696974
    r30 = r3;
    if (==) goto 0x0x806969ac;
    if (==) goto 0x0x8069699c;
    /* li r4, -1 */ // 0x80696984
    r3 = r3 + 0x80; // 0x80696988
    FUN_806688C8(r4, r3); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x80696994
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806969ac;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806969B0
    r30 = *(8 + r1); // lwz @ 0x806969B4
    r0 = *(0x14 + r1); // lwz @ 0x806969B8
    return;
}