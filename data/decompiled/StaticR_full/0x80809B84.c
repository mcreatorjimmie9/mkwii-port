/* Function at 0x80809B84, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80809B84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80809B94
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80809B9C
    r30 = r3;
    if (==) goto 0x0x80809be8;
    /* addic. r0, r3, 0xb0 */ // 0x80809BA8
    if (==) goto 0x0x80809bd8;
    r0 = *(0xb8 + r3); // lwz @ 0x80809BB0
    /* lis r4, 0 */ // 0x80809BB4
    r4 = r4 + 0; // 0x80809BB8
    *(0xb0 + r3) = r4; // stw @ 0x80809BBC
    if (==) goto 0x0x80809bd8;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x80809BD0
    *(0xb8 + r30) = r0; // stw @ 0x80809BD4
    if (<=) goto 0x0x80809be8;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80809BEC
    r30 = *(8 + r1); // lwz @ 0x80809BF0
    r0 = *(0x14 + r1); // lwz @ 0x80809BF4
}