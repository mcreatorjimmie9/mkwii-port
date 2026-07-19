/* Function at 0x80794454, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80794454(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80794468
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80794470
    r29 = r3;
    if (>=) goto 0x0x807944a0;
    /* slwi r0, r5, 2 */ // 0x8079447C
    r31 = r3 + r0; // 0x80794480
    r3 = *(0x80 + r31); // lwzu @ 0x80794484
    if (==) goto 0x0x807944a4;
    if (==) goto 0x0x807944a4;
    /* li r4, 0 */ // 0x80794494
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x807944a4 */ // 0x8079449C
    /* li r31, 0 */ // 0x807944A0
    if (==) goto 0x0x807944c8;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x807944B8
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x807944cc */ // 0x807944C4
    /* li r3, 0 */ // 0x807944C8
    r0 = *(0x24 + r1); // lwz @ 0x807944CC
    r31 = *(0x1c + r1); // lwz @ 0x807944D0
    r30 = *(0x18 + r1); // lwz @ 0x807944D4
    r29 = *(0x14 + r1); // lwz @ 0x807944D8
}