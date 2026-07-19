/* Function at 0x80863964, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80863964(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80863978
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80863980
    r29 = r3;
    if (==) goto 0x0x80863a04;
    /* li r4, -1 */ // 0x8086398C
    r3 = r3 + 0x18; // 0x80863990
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (==) goto 0x0x808639f4;
    /* lis r4, 0 */ // 0x808639A0
    /* lis r3, 0 */ // 0x808639A4
    r4 = r4 + 0; // 0x808639A8
    *(0 + r29) = r4; // stw @ 0x808639AC
    r31 = *(0 + r3); // lwz @ 0x808639B0
}