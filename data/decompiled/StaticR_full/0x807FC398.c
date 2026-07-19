/* Function at 0x807FC398, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807FC398(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807FC3A8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807FC3B0
    r30 = r3;
    if (==) goto 0x0x807fc3fc;
    /* addic. r0, r3, 0xb4 */ // 0x807FC3BC
    if (==) goto 0x0x807fc3ec;
    r0 = *(0xbc + r3); // lwz @ 0x807FC3C4
    /* lis r4, 0 */ // 0x807FC3C8
    r4 = r4 + 0; // 0x807FC3CC
    *(0xb4 + r3) = r4; // stw @ 0x807FC3D0
    if (==) goto 0x0x807fc3ec;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807FC3E4
    *(0xbc + r30) = r0; // stw @ 0x807FC3E8
    if (<=) goto 0x0x807fc3fc;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807FC400
    r30 = *(8 + r1); // lwz @ 0x807FC404
    r0 = *(0x14 + r1); // lwz @ 0x807FC408
}