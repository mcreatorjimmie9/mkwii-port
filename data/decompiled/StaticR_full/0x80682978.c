/* Function at 0x80682978, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80682978(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80682988
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80682990
    r30 = r3;
    if (==) goto 0x0x806829c4;
    /* li r4, -1 */ // 0x8068299C
    r3 = r3 + 0x58; // 0x806829A0
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806829AC
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806829c4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806829C8
    r30 = *(8 + r1); // lwz @ 0x806829CC
    r0 = *(0x14 + r1); // lwz @ 0x806829D0
    return;
}