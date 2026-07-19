/* Function at 0x80738C88, size=92 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80738C88(int r3)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    *(0x9c + r1) = r31; // stw @ 0x80738C94
    r31 = r3;
    r0 = *(0x129 + r3); // lbz @ 0x80738C9C
    if (==) goto 0x0x80738e4c;
    r3 = *(0x208 + r3); // lwz @ 0x80738CA8
    if (==) goto 0x0x80738ea8;
    r3 = r3 + 0x74; // 0x80738CB4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80738ccc;
    /* li r3, 0 */ // 0x80738CC4
    /* b 0x80738cd0 */ // 0x80738CC8
    r3 = *(0xc + r3); // lwz @ 0x80738CCC
    /* li r0, 0 */ // 0x80738CD4
    if (==) goto 0x0x80738ce4;
    if (!=) goto 0x0x80738ce8;
}