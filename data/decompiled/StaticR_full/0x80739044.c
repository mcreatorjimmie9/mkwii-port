/* Function at 0x80739044, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80739044(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80739054
    r30 = r3;
    r0 = *(0x129 + r3); // lbz @ 0x8073905C
    if (==) goto 0x0x807390f4;
    r31 = *(0x214 + r3); // lwz @ 0x80739068
    if (==) goto 0x0x80739150;
    r3 = r31 + 0x74; // 0x80739074
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073908c;
    /* li r3, 0 */ // 0x80739084
    /* b 0x80739090 */ // 0x80739088
    r3 = *(0xc + r3); // lwz @ 0x8073908C
    /* li r0, 0 */ // 0x80739094
    if (==) goto 0x0x807390a4;
    if (!=) goto 0x0x807390a8;
    /* li r0, 1 */ // 0x807390A4
}