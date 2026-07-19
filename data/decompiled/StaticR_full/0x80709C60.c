/* Function at 0x80709C60, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80709C60(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80709C70
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80709C78
    r30 = r3;
    if (==) goto 0x0x80709cb8;
    /* li r4, -1 */ // 0x80709C84
    r3 = r3 + 0x68; // 0x80709C88
    FUN_806C9C78(r4, r3); // bl 0x806C9C78
    r3 = r30 + 0x44; // 0x80709C90
    /* li r4, -1 */ // 0x80709C94
    FUN_80668158(r4, r3, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x80709CA0
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80709cb8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80709CBC
    r30 = *(8 + r1); // lwz @ 0x80709CC0
    r0 = *(0x14 + r1); // lwz @ 0x80709CC4
    return;
}