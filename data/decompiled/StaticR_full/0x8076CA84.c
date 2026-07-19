/* Function at 0x8076CA84, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8076CA84(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8076CA94
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8076CA9C
    r30 = r3;
    if (==) goto 0x0x8076cae8;
    /* lis r5, 0 */ // 0x8076CAA8
    /* lis r4, 0 */ // 0x8076CAAC
    r5 = r5 + 0; // 0x8076CAB0
    *(0 + r3) = r5; // stw @ 0x8076CAB4
    r3 = *(0xc + r3); // lwz @ 0x8076CAB8
    r4 = r4 + 0; // 0x8076CABC
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    r3 = *(0x14 + r30); // lwz @ 0x8076CAC4
    if (==) goto 0x0x8076cad8;
    if (==) goto 0x0x8076cad8;
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x8076cae8;
}