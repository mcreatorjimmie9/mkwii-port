/* Function at 0x807FD4F8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807FD4F8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807FD500
    *(0x14 + r1) = r0; // stw @ 0x807FD504
    *(0xc + r1) = r31; // stw @ 0x807FD508
    r0 = *(0 + r3); // lwz @ 0x807FD50C
    if (!=) goto 0x0x807fd568;
    /* li r3, 0x1bc */ // 0x807FD518
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x807fd560;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807FD530
    /* li r0, 0 */ // 0x807FD534
    r3 = r3 + 0; // 0x807FD538
}