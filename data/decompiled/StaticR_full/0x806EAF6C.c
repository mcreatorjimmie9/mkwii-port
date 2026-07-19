/* Function at 0x806EAF6C, size=60 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_806EAF6C(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r3, 0 */ // 0x806EAF74
    *(0x34 + r1) = r0; // stw @ 0x806EAF78
    /* stmw r23, 0xc(r1) */ // 0x806EAF7C
    r0 = *(0 + r3); // lwz @ 0x806EAF80
    if (!=) goto 0x0x806eb070;
    /* li r3, 0x2b88 */ // 0x806EAF8C
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x806eb068;
    /* li r31, 0 */ // 0x806EAFA0
    *(0 + r3) = r31; // stb @ 0x806EAFA4
}