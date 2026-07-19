/* Function at 0x807FCB94, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807FCB94(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807FCBA4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807FCBAC
    r30 = r3;
    if (==) goto 0x0x807fcbd0;
    /* li r4, 0 */ // 0x807FCBB8
    FUN_8080F1A0(r4); // bl 0x8080F1A0
    if (<=) goto 0x0x807fcbd0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807FCBD4
    r30 = *(8 + r1); // lwz @ 0x807FCBD8
    r0 = *(0x14 + r1); // lwz @ 0x807FCBDC
    return;
}