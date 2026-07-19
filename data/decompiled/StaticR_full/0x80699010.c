/* Function at 0x80699010, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80699010(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x80699020
    *(8 + r1) = r30; // stw @ 0x80699024
    r30 = r4;
    r3 = *(0 + r3); // lwz @ 0x8069902C
    FUN_80686174(); // bl 0x80686174
    if (!=) goto 0x0x80699044;
    if (==) goto 0x0x80699048;
    /* li r31, 1 */ // 0x80699044
    if (!=) goto 0x0x80699080;
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x80699080;
    FUN_805E3430(); // bl 0x805E3430
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x806990a8;
    /* lis r3, 0 */ // 0x8069906C
    /* li r0, 1 */ // 0x80699070
    r3 = *(0 + r3); // lwz @ 0x80699074
}